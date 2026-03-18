/*
 * XREFs of MiGetPageForHeader @ 0x140453C9C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiInitializeImageProtos @ 0x140453928 (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x140A2A938 (MiCreateMdl.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x14022B950 (MiObtainFaultCharges.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemPage @ 0x140454030 (MiGetSystemPage.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiGetPageForHeader(ULONG *a1, int a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rdi
  volatile signed __int32 *v9; // rbx
  char EffectivePagePriorityThread; // r15
  unsigned __int8 v11; // r14
  int v12; // ebp
  _OWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+78h] [rbp+20h]
  int v16; // [rsp+78h] [rbp+20h]

  v14[0] = 0LL;
  if ( !MiObtainFaultCharges(a1, 1uLL, 1, a4) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase((__int64)&CurrentThread->ApcState.Process[2].ReadyListHead.Blink, 3, a2, (__int64)v14);
  SystemPage = MiGetSystemPage(a1, a3, v14);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  v9 = (volatile signed __int32 *)(SystemPage + 24);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( a3 )
  {
    v11 = 17;
    v12 = 0;
    while ( _interlockedbittestandset64(v9, 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
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
    v11 = MiLockPageInline(SystemPage);
  }
  HIWORD(v15) = HIWORD(*(_DWORD *)(SystemPage + 32));
  LOWORD(v15) = 1;
  *(_DWORD *)(SystemPage + 32) = v15;
  *(_QWORD *)(SystemPage + 16) = CLFS_LSN_NULL_EXT;
  v16 = *(_DWORD *)(SystemPage + 32);
  HIBYTE(v16) ^= (HIBYTE(v16) ^ EffectivePagePriorityThread) & 7;
  *(_DWORD *)(SystemPage + 32) = v16;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_QWORD *)(SystemPage + 24) = *(_QWORD *)v9 | 0x4000000000000000LL;
  if ( v11 == 17 )
    _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
  else
    MiUnlockPage(SystemPage, v11);
  return 0xAAAAAAAAAAAAAAABuLL * ((SystemPage + 0x220000000000LL) >> 4);
}
