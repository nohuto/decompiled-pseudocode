/*
 * XREFs of MiGetPageForHeader @ 0x1403F2A54
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiInitializeImageProtos @ 0x1403F26E0 (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemPage @ 0x1403F462C (MiGetSystemPage.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiGetPageForHeader(ULONG *a1, int a2, unsigned int a3, struct _KPRCB *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rdi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char EffectivePagePriorityThread; // r15
  unsigned __int8 v14; // r14
  unsigned int v15; // ebp
  _OWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+78h] [rbp+20h]
  int v19; // [rsp+78h] [rbp+20h]

  v17[0] = 0LL;
  if ( !MiObtainFaultCharges(a1, 1uLL, 1, a4) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase((__int64)&CurrentThread->ApcState.Process[2].ReadyListHead.Blink, 3, a2, (__int64)v17);
  SystemPage = MiGetSystemPage(a1, a3, v17);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  v9 = (volatile signed __int32 *)(SystemPage + 24);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( a3 )
  {
    v14 = 17;
    v15 = 0;
    while ( _interlockedbittestandset64(v9, 0x3FuLL) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v15);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v9 < 0 );
    }
  }
  else
  {
    v14 = MiLockPageInline(SystemPage, v10, v11, v12);
  }
  HIWORD(v18) = HIWORD(*(_DWORD *)(SystemPage + 32));
  LOWORD(v18) = 1;
  *(_DWORD *)(SystemPage + 32) = v18;
  *(_QWORD *)(SystemPage + 16) = CLFS_LSN_NULL_EXT;
  v19 = *(_DWORD *)(SystemPage + 32);
  HIBYTE(v19) ^= (HIBYTE(v19) ^ EffectivePagePriorityThread) & 7;
  *(_DWORD *)(SystemPage + 32) = v19;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_QWORD *)(SystemPage + 24) = *(_QWORD *)v9 | 0x4000000000000000LL;
  if ( v14 == 17 )
    _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
  else
    MiUnlockPage(SystemPage, v14);
  return 0xAAAAAAAAAAAAAAABuLL * ((SystemPage + 0x220000000000LL) >> 4);
}
