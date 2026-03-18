/*
 * XREFs of NtUserGetWindowBand @ 0x140297420
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetWindowBand(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  _DWORD *v7; // rdx
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v5 = ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    if ( a2 )
    {
      v7 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v7 = (_DWORD *)MmUserProbeAddress;
      *v7 = *v7;
      v4 = *(unsigned int *)(*(_QWORD *)(v5 + 40) + 236LL);
      *a2 = v4;
      v6 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
