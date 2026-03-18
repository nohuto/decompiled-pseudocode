/*
 * XREFs of ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1800E6C0C
 * Callers:
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1800E1918 (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 *     ?OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ @ 0x1800E3E70 (-OnInteractionTrackerTransitionToCustomAnimation@InteractionSourceManager@@QEAAXXZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x1800E6200 (--1InteractionSourceManager@@QEAA@XZ.c)
 * Callees:
 *     ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1800ECD5C (-SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z.c)
 */

void __fastcall InteractionSourceManager::ClearActiveManipulations(InteractionSourceManager *this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rbp

  v1 = *((_QWORD *)this + 12);
  v3 = v1 + *((_QWORD *)this + 13);
  while ( v1 != v3 )
  {
    CManipulation::SetCaptureState_RenderThread(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8 * ((*((_QWORD *)this + 11) - 1LL) & (v1 >> 1))) + 8 * (v1 & 1)),
      0LL);
    ++v1;
  }
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy((char *)this + 72);
}
