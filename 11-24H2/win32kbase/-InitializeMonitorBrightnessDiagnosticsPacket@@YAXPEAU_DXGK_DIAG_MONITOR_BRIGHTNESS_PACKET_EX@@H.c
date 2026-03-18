/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140142130
 * Callers:
 *     PowerUnDimMonitor @ 0x140090E48 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1400920B8 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x140141F74 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        unsigned __int8 a2)
{
  __int64 UserSessionState; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  int v10; // ecx

  UserSessionState = W32GetUserSessionState(a1);
  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  v5 = (_DWORD *)UserSessionState;
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  v6 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v6 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = v5[732];
  *((_DWORD *)a1 + 15) = v5[727];
  *((_DWORD *)a1 + 16) = v5[726];
  *((_DWORD *)a1 + 17) = v5[729];
  v7 = v5[728];
  *((_DWORD *)a1 + 19) = -1;
  *((_DWORD *)a1 + 18) = v7;
  *((_DWORD *)a1 + 20) = v5[731];
  v8 = *((_DWORD *)a1 + 21) & 0xFFFFFFFD;
  *((_DWORD *)a1 + 21) = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(4 * v5[701])) & 4;
  *((_DWORD *)a1 + 21) = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8 * v5[700])) & 8;
  *((_DWORD *)a1 + 21) = v10 ^ (a2 ^ (unsigned __int8)v10) & 1;
}
