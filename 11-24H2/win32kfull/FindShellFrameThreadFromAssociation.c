/*
 * XREFs of FindShellFrameThreadFromAssociation @ 0x14018E2D4
 * Callers:
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14018DF04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x140237D24 (TryDetachShellFrame.c)
 *     _SetThreadQueueMergeSetting @ 0x1402A3388 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x14018E358 (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall FindShellFrameThreadFromAssociation(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *ShellFrameAppThreadsAssociation; // rax

  ShellFrameAppThreadsAssociation = FindShellFrameAppThreadsAssociation(a1);
  if ( ShellFrameAppThreadsAssociation && *((struct tagTHREADINFO **)ShellFrameAppThreadsAssociation + 3) == a1 )
    return *((_QWORD *)ShellFrameAppThreadsAssociation + 2);
  else
    return 0LL;
}
