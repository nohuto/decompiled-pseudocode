/*
 * XREFs of NtUserGetCurrentDpiInfoForWindow @ 0x1401AB690
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetCurrentDpiInfoForWindow(__int64 a1, void *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  char v9; // [rsp+60h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v4 = (_QWORD *)ValidateHwnd(a1);
  v6 = 0;
  if ( v4 )
  {
    if ( *(_WORD *)(v4[5] + 286LL) )
      v7 = v4[37];
    else
      v7 = v4[36];
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, (const void *)(v7 + 4), 0x60uLL);
    v6 = 1;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
