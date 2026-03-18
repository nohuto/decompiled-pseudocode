/*
 * XREFs of UserReleaseDC @ 0x140024770
 * Callers:
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v3, 1LL);
  LODWORD(a1) = ReleaseCacheDC(a1, 0) != 2;
  UserSessionSwitchLeaveCritWithNonPaged();
  return (unsigned int)a1;
}
