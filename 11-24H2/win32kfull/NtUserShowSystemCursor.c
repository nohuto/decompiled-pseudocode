/*
 * XREFs of NtUserShowSystemCursor @ 0x1402A0FD0
 * Callers:
 *     <none>
 * Callees:
 *     EditionShowSystemCursor @ 0x14002B360 (EditionShowSystemCursor.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x140093660 (CheckWinstaAttributeAccess.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

_BOOL8 __fastcall NtUserShowSystemCursor(int a1)
{
  BOOL v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  v2 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
    v2 = EditionShowSystemCursor(a1);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
