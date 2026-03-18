/*
 * XREFs of UnlockMFMWFPWindow @ 0x1C0216164
 * Callers:
 *     NtUserMNDragLeave @ 0x1C01D5E00 (NtUserMNDragLeave.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01FF260 (xxxMNEndMenuStateInternal.c)
 *     xxxHandleMenuMessages @ 0x1C0213518 (xxxHandleMenuMessages.c)
 *     LockMFMWFPWindow @ 0x1C0215EAC (LockMFMWFPWindow.c)
 *     MNCheckButtonDownState @ 0x1C0215FE4 (MNCheckButtonDownState.c)
 * Callees:
 *     IsMFMWFPWindow @ 0x1C0215E88 (IsMFMWFPWindow.c)
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
