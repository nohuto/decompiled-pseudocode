/*
 * XREFs of NtUserReleaseDC @ 0x140023030
 * Callers:
 *     <none>
 * Callees:
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v3, 1LL);
  LODWORD(a1) = ReleaseCacheDC(a1, 0);
  UserSessionSwitchLeaveCritWithNonPaged();
  return (_DWORD)a1 != 2;
}
