/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x1C01D15A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00892D4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0240478 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(__int64 a1, _OWORD *a2, __int64 a3)
{
  _OWORD *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v10; // rcx
  InteractiveControlManager *v11; // rax
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v17; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+60h] [rbp-18h]

  v3 = a2;
  v4 = a1;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  EnterSharedCrit(a1, a2, a3);
  v8 = 0;
  if ( v4 && v3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
    ProbeForWrite(v3, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v11 = InteractiveControlManager::Instance(v10);
    if ( (int)InteractiveControlManager::GetReportInfo(
                v11,
                (unsigned __int16)v4,
                HIWORD(v4),
                (struct tagINTERACTIVECTRL_INFO *)&v17) >= 0 )
    {
      v13 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_OWORD *)MmUserProbeAddress;
      *v3 = v17;
      *((_QWORD *)v3 + 2) = v18;
      *((_DWORD *)v3 + 6) = v19;
      v8 = 1;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v8;
}
