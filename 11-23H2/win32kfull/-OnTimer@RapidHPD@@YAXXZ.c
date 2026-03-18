/*
 * XREFs of ?OnTimer@RapidHPD@@YAXXZ @ 0x1C0086CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C005AE1C (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C005E700 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00A0448 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z @ 0x1C0225804 (-OnRapidHpdComparisonFailed@DesktopRecalc@@YAXPEAVCMonitorTopology@@AEBU_GUID@@@Z.c)
 */

void __fastcall RapidHPD::OnTimer(RapidHPD *this)
{
  unsigned int v1; // ebx
  unsigned int v2; // esi
  char v3; // di
  char v4; // dl
  int v5; // eax
  int v6; // edx
  const struct _GUID *v7; // r8
  char v8; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    v2 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - CRapidHpdInfo::s_pRapidHpdInfo->Data1;
    if ( v2 >= CRapidHpdInfo::s_timeoutMs )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v8);
      v3 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v4 = 0;
      }
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v4,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          7u,
          0xEu,
          (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
          v2,
          *(_DWORD *)&CRapidHpdInfo::s_pRapidHpdInfo[1].Data2);
      v5 = CMonitorTopology::CompareToCurrent(*(CMonitorTopology **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4, 0);
      if ( v5 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v6) = 0;
        }
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v6,
            (_DWORD)v7,
            (_DWORD)gFullLog,
            4,
            7,
            16,
            (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
            v5);
        DesktopRecalc::OnRapidHpdComparisonFailed(
          *(DesktopRecalc **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4,
          (struct CMonitorTopology *)CRapidHpdInfo::s_pRapidHpdInfo[1].Data4,
          v7);
        v1 = 1;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v3 = 0;
        }
        if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = v3;
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v6,
            (_DWORD)v7,
            (unsigned int)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids,
            4,
            7,
            15,
            (__int64)&WPP_cdd13d021a4138299c50903c2e0608fa_Traceguids);
        }
      }
      CRapidHpdInfo::Delete(v1);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v8);
    }
  }
}
