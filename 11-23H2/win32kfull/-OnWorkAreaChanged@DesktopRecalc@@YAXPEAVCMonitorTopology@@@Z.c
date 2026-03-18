/*
 * XREFs of ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C005A14C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C005AA48 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C005B6E8 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00A0448 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall DesktopRecalc::OnWorkAreaChanged(DesktopRecalc *this, struct CMonitorTopology *a2)
{
  int v3; // edx
  int v4; // r8d
  const struct _GUID *v5; // r9
  volatile signed __int32 *v6; // rbx
  char v7; // [rsp+68h] [rbp+10h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v7);
  v5 = CRapidHpdInfo::s_pRapidHpdInfo;
  v6 = 0LL;
  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        (_DWORD)gFullLog,
        3,
        7,
        12,
        (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
        *(_DWORD *)(*(_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4 + 4LL));
    }
    v6 = *(volatile signed __int32 **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4;
    _InterlockedIncrement(v6);
    CRapidHpdInfo::Delete(2LL);
    if ( v6 )
      this = (DesktopRecalc *)v6;
  }
  DesktopRecalc::StartRecalc(0LL, this, 0LL, v5);
  if ( v6 && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    Win32FreePool((void *)v6);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v7);
}
