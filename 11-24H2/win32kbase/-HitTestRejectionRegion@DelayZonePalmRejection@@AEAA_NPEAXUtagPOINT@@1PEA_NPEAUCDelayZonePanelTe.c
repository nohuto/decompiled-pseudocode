/*
 * XREFs of ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x140211704
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1400C2FA8 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     GetUserHandedness @ 0x140152738 (GetUserHandedness.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021158C (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x140211F1C (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     ApiSetIsProcessForeground @ 0x1402224D8 (ApiSetIsProcessForeground.c)
 */

bool __fastcall DelayZonePalmRejection::HitTestRejectionRegion(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        bool *a5,
        struct CDelayZonePanelTelemetryData *a6)
{
  char *v6; // r15
  bool v7; // bp
  char *v8; // rsi
  char v13; // r14
  bool v14; // r15
  int v15; // edi
  char v16; // bl
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // r9
  const char *v21; // rax

  v6 = (char *)this + 72;
  v7 = 0;
  v8 = (char *)*((_QWORD *)this + 9);
  if ( v8 == (char *)this + 72 )
    return 0;
  v13 = 1;
  while ( v8 != v6 )
  {
    LODWORD(this) = ((unsigned int)GetUserHandedness((__int64)this, (__int64)a2) != 0) + 1;
    if ( ((unsigned int)this & *((_DWORD *)v8 + 23)) == 0 )
      goto LABEL_13;
    if ( v8[60] )
    {
      if ( *((void **)v8 + 12) != a2 )
        goto LABEL_13;
      v7 = PtInRect((_DWORD *)v8 + 6, *(_QWORD *)&a4);
    }
    else
    {
      if ( *((_DWORD *)v8 + 16) && !(unsigned int)ApiSetIsProcessForeground() )
        goto LABEL_13;
      v7 = CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion((CPalmRejectZoneInfo *)v8, a3, (struct tagRECT *)a6);
    }
    if ( v7 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *((_DWORD *)v8 + 14);
        v16 = v8[60];
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v18) = v14;
        LOBYTE(v19) = v13;
        v20 = *(_QWORD *)(UserSessionState + 69400);
        v21 = "true";
        if ( !v16 )
          v21 = "false";
        WPP_RECORDER_AND_TRACE_SF_sd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v18,
          v20,
          4,
          4,
          30,
          (__int64)&WPP_75a6a4f1645a3c8ead19a08cf6b1534d_Traceguids,
          (__int64)v21,
          v15);
      }
      *a5 = v8[60];
      return v7;
    }
LABEL_13:
    v8 = *(char **)v8;
  }
  return v7;
}
