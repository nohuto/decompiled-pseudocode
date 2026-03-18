/*
 * XREFs of MiGetPageForHeader @ 0x1403133D4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiInitializeImageProtos @ 0x140313060 (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x140945DF8 (MiCreateMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiGetSystemPage @ 0x140311984 (MiGetSystemPage.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 */

unsigned __int64 __fastcall MiGetPageForHeader(ULONG *a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rdi
  volatile signed __int32 *v8; // rbx
  char EffectivePagePriorityThread; // r15
  unsigned __int8 v10; // r14
  unsigned int v11; // ebp
  _OWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+78h] [rbp+20h]
  int v15; // [rsp+78h] [rbp+20h]

  v13[0] = 0LL;
  if ( !MiObtainFaultCharges(a1, 1uLL, 1) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase((__int64)&CurrentThread->ApcState.Process[2].ReadyListHead.Blink, 3, a2, (__int64)v13);
  SystemPage = MiGetSystemPage((__int64)a1, a3, (__int64)v13);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  v8 = (volatile signed __int32 *)(SystemPage + 24);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  if ( a3 )
  {
    v10 = 17;
    v11 = 0;
    while ( _interlockedbittestandset64(v8, 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v8 < 0 );
    }
  }
  else
  {
    v10 = MiLockPageInline(SystemPage);
  }
  HIWORD(v14) = HIWORD(*(_DWORD *)(SystemPage + 32));
  LOWORD(v14) = 1;
  *(_DWORD *)(SystemPage + 32) = v14;
  *(_QWORD *)(SystemPage + 16) = CLFS_LSN_NULL_EXT;
  v15 = *(_DWORD *)(SystemPage + 32);
  HIBYTE(v15) ^= (HIBYTE(v15) ^ EffectivePagePriorityThread) & 7;
  *(_DWORD *)(SystemPage + 32) = v15;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_QWORD *)(SystemPage + 24) = *(_QWORD *)v8 | 0x4000000000000000LL;
  if ( v10 == 17 )
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
  else
    MiUnlockPage(SystemPage, v10);
  return 0xAAAAAAAAAAAAAAABuLL * ((SystemPage + 0x220000000000LL) >> 4);
}
