/*
 * XREFs of ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1401565AC
 * Callers:
 *     xxxSetThreadDesktop @ 0x1401071FC (xxxSetThreadDesktop.c)
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x14012ED84 (PostInputMessage.c)
 *     NtUserDelegateInput @ 0x140156260 (NtUserDelegateInput.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x140156438 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1401564E0 (PackAffectedThreadsFromThreadCleanup.c)
 *     IsShellFrameHangResilient @ 0x140156564 (IsShellFrameHangResilient.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     NtUserShellHandwritingDelegateInput @ 0x14029FBB0 (NtUserShellHandwritingDelegateInput.c)
 *     _SetThreadQueueMergeSetting @ 0x1402A3388 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::AreMultipleThreadsAttached(tagQ *this)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 66);
  v2 = 0;
  if ( v1 )
  {
    v2 = 1;
    if ( *(_QWORD *)(v1 + 1688) )
      return 1;
  }
  v3 = *((_QWORD *)this + 67);
  if ( !v3 )
    return 0;
  return (unsigned int)(v2 + 1) > 1 || *(_QWORD *)(v3 + 1696) != 0LL;
}
