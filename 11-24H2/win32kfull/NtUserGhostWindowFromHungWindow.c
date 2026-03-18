/*
 * XREFs of NtUserGhostWindowFromHungWindow @ 0x1401AA300
 * Callers:
 *     <none>
 * Callees:
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGhostWindowFromHungWindow(__int64 a1)
{
  const struct tagWND *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct tagWND *v5; // rax
  char v7; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  v2 = (const struct tagWND *)ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v5 = _GhostWindowFromHungWindow(v2);
    if ( v5 )
      v4 = *(_QWORD *)v5;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
