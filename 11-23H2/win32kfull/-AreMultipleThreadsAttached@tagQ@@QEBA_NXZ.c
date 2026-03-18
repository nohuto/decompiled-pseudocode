/*
 * XREFs of ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C0116644
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C0006E08 (IsShellFrameHangResilient.c)
 *     xxxSetThreadDesktop @ 0x1C002B6D4 (xxxSetThreadDesktop.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C0038EF4 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     NtUserDelegateInput @ 0x1C008A350 (NtUserDelegateInput.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C01165E0 (PackAffectedThreadsFromThreadCleanup.c)
 *     PostInputMessage @ 0x1C0117FD8 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     NtUserShellHandwritingDelegateInput @ 0x1C01DD0F0 (NtUserShellHandwritingDelegateInput.c)
 *     _SetThreadQueueMergeSetting @ 0x1C01E2FE0 (_SetThreadQueueMergeSetting.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EF350 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::AreMultipleThreadsAttached(tagQ *this)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 60);
  v2 = 0;
  if ( v1 )
  {
    v2 = 1;
    if ( *(_QWORD *)(v1 + 1528) )
      return 1;
  }
  v3 = *((_QWORD *)this + 61);
  if ( !v3 )
    return 0;
  return (unsigned int)(v2 + 1) > 1 || *(_QWORD *)(v3 + 1536) != 0LL;
}
