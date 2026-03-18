/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1401056B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rcx
  unsigned int v2; // ebx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v4, 1LL);
  v0 = CheckClipboardAccess();
  v2 = 0;
  if ( v0 )
    v2 = *((_DWORD *)v0 + 36);
  UserSessionSwitchLeaveCrit(v1);
  return v2;
}
