/*
 * XREFs of ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14026F7B8
 * Callers:
 *     UserResetPointer @ 0x140131DD0 (UserResetPointer.c)
 *     ??0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ @ 0x1402130E8 (--0EnterLeaveSharedCritIfNotHeld@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GET_USERCRIT_DISPOSITION(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread(a1, a2, a3) + 24) >> 2) & 3;
}
