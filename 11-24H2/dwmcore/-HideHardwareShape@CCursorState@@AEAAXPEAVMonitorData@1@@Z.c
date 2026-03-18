/*
 * XREFs of ?HideHardwareShape@CCursorState@@AEAAXPEAVMonitorData@1@@Z @ 0x1802B2FFC
 * Callers:
 *     ?RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z @ 0x18026C7A4 (-RemoveMonitorData@CCursorVisual@@QEAAXU_LUID@@I@Z.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802B2398 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 *     ?ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z @ 0x1802B2E80 (-ForceSoftwareShape@CCursorState@@AEAA_NPEAVMonitorData@1@@Z.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x1802B41A0 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 *     ?UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z @ 0x1802B49CC (-UpdateHardwareCursor@CCursorState@@AEAA_NPEAVMonitorData@1@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CCursorState::HideHardwareShape(CCursorState *this, struct CCursorState::MonitorData *a2)
{
  __int64 v3; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  if ( *((_DWORD *)a2 + 38) == 1 )
  {
    v3 = *(_QWORD *)a2;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v4 = v3;
    v5 = *((_DWORD *)a2 + 2);
    NtHWCursorUpdatePointer(&v4, 0LL);
    *((_DWORD *)a2 + 38) = 0;
  }
}
