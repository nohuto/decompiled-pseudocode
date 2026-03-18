/*
 * XREFs of ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C005D750
 * Callers:
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C0015D98 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C005D5F4 (-xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ.c)
 *     ?xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z @ 0x1C0226574 (-xxxProcessRecalcForWindow@DesktopRecalc@@YAXPEAUHWND__@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z @ 0x1C005BDFC (-RemoveRecalcProperty@CRecalcProp@@CAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext@@@Z @ 0x1C005CDD8 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAUtagWND@@PEAVCRecalcState@@PEAVCRecalcContext.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C005D45C (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C005D910 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x1C005D940 (-ShouldDeferRecalc@CRecalcState@@SA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ?IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z @ 0x1C005E6C8 (-IsPendingAndEquivalentMonitorSet@CRecalcState@@QEAA_NPEBUtagWND@@@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C0060238 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ?FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ @ 0x1C013525C (-FindRestorableRecalcState@CRecalcProp@@AEAAPEAVCRecalcState@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C01AE2C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 */

void __fastcall CRecalcProp::s_xxxProcessTopologyChange(HWND a1, struct CRecalcContext *a2)
{
  struct CRecalcContext *v2; // r14
  char v3; // di
  __int64 v4; // rax
  unsigned int v5; // r12d
  const struct tagWND *v6; // rsi
  struct CRecalcProp *RecalcProperty; // rax
  const struct tagWND **v8; // rbx
  bool IsPendingAndEquivalentMonitorSet; // al
  bool v10; // r13
  struct CRecalcState *RestorableRecalcState; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // dl
  __int64 v17; // r9
  int v18; // r10d
  int v19; // r11d
  __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a2;
  v3 = 1;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2);
  v5 = 0;
  v6 = (const struct tagWND *)v4;
  if ( v4 )
  {
    if ( !*(_BYTE *)v2 && *(_QWORD *)(v4 + 16) != gptiCurrent )
    {
      LODWORD(v24) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2214LL);
    }
    RecalcProperty = CRecalcProp::GetRecalcProperty(v6);
    v8 = (const struct tagWND **)RecalcProperty;
    if ( RecalcProperty )
    {
      if ( *((_QWORD *)RecalcProperty + 4) )
      {
        if ( *((_DWORD *)RecalcProperty + 6) != 1 )
        {
          LODWORD(v24) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2224LL);
        }
        IsPendingAndEquivalentMonitorSet = CRecalcState::IsPendingAndEquivalentMonitorSet(v8[4], v8[2]);
        v10 = IsPendingAndEquivalentMonitorSet;
        RestorableRecalcState = 0LL;
        if ( *(_BYTE *)v2 )
        {
          v5 = 1;
        }
        else if ( !IsPendingAndEquivalentMonitorSet )
        {
          RestorableRecalcState = CRecalcProp::FindRestorableRecalcState((CRecalcProp *)v8);
          if ( RestorableRecalcState )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x20) != 0 )
              v5 = 1;
          }
        }
        if ( (unsigned __int8)CRecalcState::ShouldDeferRecalc(v6, v5) )
        {
          *((_DWORD *)v2 + 1) = 1;
LABEL_18:
          if ( (unsigned int)dword_1C0359080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0359080, 32LL) )
          {
            v21 = *(_QWORD *)v6;
            LODWORD(v24) = v18;
            LODWORD(v25) = v19;
            v20 = v17;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (int)&dword_1C0359080,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v25,
              (__int64)&v24);
          }
          if ( !CRecalcProp::IsWindowEligibleForRecalc(v6) || !v8[4] && !v8[5] )
            CRecalcProp::RemoveRecalcProperty(v6);
          return;
        }
        v22 = 0LL;
        v23 = 0LL;
        ThreadLock(v6, &v22);
        CRecalcProp::xxxProcessPendingRecalcState((CRecalcProp *)v8, v6, RestorableRecalcState, v2);
        if ( v10 )
        {
          if ( RestorableRecalcState )
          {
            LODWORD(v24) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2336LL);
          }
          RestorableRecalcState = v8[5];
        }
        CRecalcProp::PruneRecalcStateList((CRecalcProp *)v8, RestorableRecalcState);
        if ( ThreadUnlock1(v13, v12, v14) )
          goto LABEL_18;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          v16 = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v3 = 0;
        }
        if ( v16 || v3 )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v3,
            v15,
            5u,
            7u,
            0x4Bu,
            (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
            *(_QWORD *)v6);
      }
    }
  }
}
