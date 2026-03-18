/*
 * XREFs of NtUserGetWindowDisplayAffinity @ 0x1401C15A0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     GetDisplayAffinity @ 0x1401C1650 (GetDisplayAffinity.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetWindowDisplayAffinity(__int64 a1, _DWORD *a2)
{
  int v4; // edi
  __int64 v5; // rax
  ULONG64 v6; // rcx
  __int64 v7; // r9
  _DWORD *v8; // rdx
  int v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( IsTopLevelWindow(v5) )
    {
      GetDisplayAffinity(v7, &v10);
      v4 = 1;
      v6 = MmUserProbeAddress;
      v8 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v8 = (_DWORD *)MmUserProbeAddress;
      *v8 = *v8;
      *a2 = v10;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
