/*
 * XREFs of UnlockMFMWFPWindow @ 0x140269060
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMNEndMenuStateInternal @ 0x14009AEB0 (xxxMNEndMenuStateInternal.c)
 *     NtUserMNDragLeave @ 0x140299B10 (NtUserMNDragLeave.c)
 *     LockMFMWFPWindow @ 0x1402BD81C (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1402BD878 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x14006DE58 (IsMFMWFPWindow.c)
 */

char __fastcall UnlockMFMWFPWindow(__int64 *a1)
{
  int v1; // eax
  _QWORD *v2; // r8

  LOBYTE(v1) = IsMFMWFPWindow(*a1);
  if ( v1 )
    LOBYTE(v1) = HMAssignmentUnlock(v2);
  else
    *v2 = 0LL;
  return v1;
}
