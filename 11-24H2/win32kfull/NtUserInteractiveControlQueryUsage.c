/*
 * XREFs of NtUserInteractiveControlQueryUsage @ 0x1402994D0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1402DE9F4 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 */

__int64 __fastcall NtUserInteractiveControlQueryUsage(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        int *a5)
{
  int v9; // ebx
  _DWORD *v10; // rdx
  InteractiveControlManager *v11; // rax
  int *v12; // rcx
  int v14[6]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15[3]; // [rsp+58h] [rbp-20h] BYREF

  v14[0] = 0;
  v9 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(v15, 1LL);
  v10 = a5;
  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  v11 = InteractiveControlManager::Instance(MmUserProbeAddress, (__int64)v10);
  if ( (int)InteractiveControlManager::GetReportExtendedUsage(v11, (unsigned __int16)a1, HIWORD(a1), a3, a2, a4, v14) < 0 )
  {
    v9 = 0;
  }
  else
  {
    v12 = a5;
    *a5 = v14[0];
  }
  UserSessionSwitchLeaveCrit(v12);
  return v9;
}
