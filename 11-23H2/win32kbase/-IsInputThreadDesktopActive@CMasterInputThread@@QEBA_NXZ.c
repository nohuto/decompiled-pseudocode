/*
 * XREFs of ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1C01FC8B4
 * Callers:
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C00E5C9E (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C01F81DC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ @ 0x1C0084AD0 (-IsEmpty@InputThreadState@CInputThreadBase@@QEBA_NXZ.c)
 */

bool __fastcall CMasterInputThread::IsInputThreadDesktopActive(CMasterInputThread *this)
{
  PKDPC BufferChainingDpc; // rsi
  bool v2; // di

  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&BufferChainingDpc->DpcListEntry, 0LL);
  v2 = 0;
  if ( !CInputThreadBase::InputThreadState::IsEmpty((CInputThreadBase::InputThreadState *)&BufferChainingDpc->DeferredRoutine) )
    v2 = *((_QWORD *)BufferChainingDpc->DeferredContext + 57) == (_QWORD)grpdeskRitInput;
  ExReleasePushLockSharedEx(&BufferChainingDpc->DpcListEntry, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
