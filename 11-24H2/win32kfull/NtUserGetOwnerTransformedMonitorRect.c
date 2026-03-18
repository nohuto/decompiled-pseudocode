/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x140296BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1402C80C4 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, int a3, struct tagRECT *a4)
{
  struct tagWND *v8; // rsi
  int v9; // ebx
  struct tagMONITOR *v10; // rax
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v14; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-18h] BYREF

  v14 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v13, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  v8 = (struct tagWND *)ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = (struct tagMONITOR *)ValidateHmonitor(a2);
    if ( v10 && a4 )
    {
      _GetOwnerTransformedMonitorRect(v8, v10, a3, &v14);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (struct tagRECT *)MmUserProbeAddress;
      *a4 = v14;
      v9 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
