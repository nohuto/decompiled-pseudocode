/*
 * XREFs of HasPrivilege @ 0x1401AD4C0
 * Callers:
 *     _RegisterLogonProcess @ 0x140167C90 (_RegisterLogonProcess.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A2894 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     HasTcbPrivilege @ 0x1401AD540 (HasTcbPrivilege.c)
 * Callees:
 *     IsPrivileged @ 0x1401647E0 (IsPrivileged.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

bool __fastcall HasPrivilege(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPROCESS *CurrentProcess; // rax
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+28h] [rbp-30h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)(int)a1;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(a1, a2, a3, a4);
  return IsPrivileged(CurrentProcess, 0LL, &RequiredPrivileges);
}
