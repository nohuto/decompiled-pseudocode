/*
 * XREFs of ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1C005AEC4
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C005A1D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z @ 0x1C005A478 (-ProcessModeChange@RapidHPD@@YA_NW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAVCMonitorTopology@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C005B6E8 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00A0448 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall DesktopRecalc::OnMonitorRectsChanged(
        DesktopRecalc *this,
        struct tagWINDOWSTATION *a2,
        struct CMonitorTopology *a3,
        struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *a4)
{
  CRapidHpdInfo *v7; // rcx
  struct CMonitorTopology *v8; // r15
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  const struct _GUID *v12; // r9
  volatile signed __int32 *v13; // rbx
  bool v14; // di
  int v15; // edx
  char v16; // dl
  char v17; // [rsp+90h] [rbp+18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  v7 = 0LL;
  if ( a3 )
    v7 = (CRapidHpdInfo *)*(unsigned int *)a3;
  v8 = (struct CMonitorTopology *)(((unsigned __int64)a3 + 4) & -(__int64)(a3 != 0LL));
  if ( RapidHPD::ProcessModeChange(v7, (const struct _GUID *)v8, a2) )
  {
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = 97;
      LOBYTE(v15) = v14;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v10,
        v11,
        4,
        7,
        97,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
  }
  else
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        98,
        4,
        7,
        98,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
    v12 = CRapidHpdInfo::s_pRapidHpdInfo;
    v13 = 0LL;
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v16,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          3u,
          7u,
          0xCu,
          (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
          *(_DWORD *)(*(_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4 + 4LL));
      v13 = *(volatile signed __int32 **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4;
      _InterlockedAdd(v13, 1u);
      CRapidHpdInfo::Delete(2LL);
      if ( v13 )
        a2 = (struct tagWINDOWSTATION *)v13;
    }
    DesktopRecalc::StartRecalc(this, a2, v8, v12);
    if ( v13 && _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
      Win32FreePool((void *)v13);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17);
}
