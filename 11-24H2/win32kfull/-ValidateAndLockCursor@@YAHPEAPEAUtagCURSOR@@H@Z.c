/*
 * XREFs of ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x14008BA08
 * Callers:
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateAndLockCursor(struct tagCURSOR **a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // rax
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v4 = (__int64)*a1;
  if ( !v4 )
    return 1LL;
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoSecure(v4, a2);
  if ( v6 || !v3 )
  {
    *a1 = 0LL;
    v7[0] = a1;
    v7[1] = v6;
    HMAssignmentLock(v7, 0LL);
    return 1LL;
  }
  UserSetLastError(87);
  return 0LL;
}
