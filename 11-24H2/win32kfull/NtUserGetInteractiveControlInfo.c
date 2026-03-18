/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x140296490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1402DEBD8 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(unsigned int a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  InteractiveControlManager *v11; // rax
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 Src; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]

  Src = 0LL;
  v16 = 0LL;
  v17 = 0;
  v4 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v14, 1LL);
  if ( a1 && a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
    ProbeForWrite(a2, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = InteractiveControlManager::Instance(v10, v9);
    if ( (int)InteractiveControlManager::GetReportInfo(
                v11,
                (unsigned __int16)a1,
                HIWORD(a1),
                (struct tagINTERACTIVECTRL_INFO *)&Src) < 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (volatile void *)MmUserProbeAddress;
      RtlCopyVolatileMemory((void *)a2, &Src, 0x1CuLL);
    }
  }
  else
  {
    v4 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v12);
  return v4;
}
