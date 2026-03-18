/*
 * XREFs of NtUserInteractiveControlQueryUsage @ 0x1C01D51E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C0240294 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 */

__int64 __fastcall NtUserInteractiveControlQueryUsage(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int *a5)
{
  unsigned __int16 v6; // r15
  unsigned __int16 v7; // r12
  unsigned int v8; // esi
  int v9; // ebx
  _DWORD *v10; // rcx
  InteractiveControlManager *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17[12]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  v17[0] = 0;
  EnterSharedCrit(a1, a2, a3);
  v10 = a5;
  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v10 = *v10;
  v11 = InteractiveControlManager::Instance((__int64)v10);
  if ( (int)InteractiveControlManager::GetReportExtendedUsage(v11, (unsigned __int16)v8, HIWORD(v8), v6, v7, a4, v17) >= 0 )
  {
    *a5 = v17[0];
    v9 = 1;
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v9;
}
