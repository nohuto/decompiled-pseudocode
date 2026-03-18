/*
 * XREFs of NtUserGetWindowDC @ 0x1401A6C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetWindowDC(__int64 a1)
{
  __int64 DCEx; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  DCEx = 0LL;
  if ( !a1 )
  {
    v3 = 0LL;
    goto LABEL_3;
  }
  v3 = ValidateHwnd(a1);
  if ( v3 )
LABEL_3:
    DCEx = _GetDCEx(v3, 0LL, 65537LL);
  UserSessionSwitchLeaveCrit(v4);
  return DCEx;
}
