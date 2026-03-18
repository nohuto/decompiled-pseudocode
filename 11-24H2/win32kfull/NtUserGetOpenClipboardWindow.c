/*
 * XREFs of NtUserGetOpenClipboardWindow @ 0x140104500
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetOpenClipboardWindow()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  v0 = CheckClipboardAccess();
  v2 = 0LL;
  if ( v0 )
  {
    v4 = (__int64 *)*((_QWORD *)v0 + 12);
    if ( v4 )
      v2 = *v4;
  }
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
