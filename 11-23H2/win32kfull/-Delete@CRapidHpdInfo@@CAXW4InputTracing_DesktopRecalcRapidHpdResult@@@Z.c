/*
 * XREFs of ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1C00A0448
 * Callers:
 *     EditionBaseDriverUnloadUninitialize @ 0x1C00598D0 (EditionBaseDriverUnloadUninitialize.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1C005A14C (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1C005AEC4 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnTimer@RapidHPD@@YAXXZ @ 0x1C0086CC0 (-OnTimer@RapidHPD@@YAXXZ.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1C005E700 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x1C020191C (-TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z.c)
 *     ?RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult@@IIIIU_GUID@@I@Z @ 0x1C022D14C (-RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult.c)
 */

void __fastcall CRapidHpdInfo::Delete(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // r10d
  unsigned int v4; // r10d
  struct _GUID *v5; // rbx
  void *v6; // rcx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  struct _GUID v8; // [rsp+50h] [rbp-18h] BYREF

  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    v2 = CMonitorTopology::CompareToCurrent(*(CMonitorTopology **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4, 0);
    v3 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo->Data4;
    v7 = *(_OWORD *)CRapidHpdInfo::s_pRapidHpdInfo[1].Data4;
    InputTraceLogging::DesktopRecalc::RapidHpdComplete(
      a1,
      *(unsigned int *)&CRapidHpdInfo::s_pRapidHpdInfo[1].Data2,
      (unsigned int)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - CRapidHpdInfo::s_pRapidHpdInfo->Data1,
      CRapidHpdInfo::s_pRapidHpdInfo[1].Data1,
      v3,
      &v7,
      v2);
    v4 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo->Data4;
    v8 = *(struct _GUID *)CRapidHpdInfo::s_pRapidHpdInfo[1].Data4;
    TraceLoggingRapidHpdComplete(
      a1,
      *(_DWORD *)&CRapidHpdInfo::s_pRapidHpdInfo[1].Data2,
      ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - CRapidHpdInfo::s_pRapidHpdInfo->Data1,
      CRapidHpdInfo::s_pRapidHpdInfo[1].Data1,
      v4,
      &v8,
      v2);
    v5 = CRapidHpdInfo::s_pRapidHpdInfo;
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      v6 = *(void **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        Win32FreePool(v6);
      Win32FreePool(v5);
    }
    CRapidHpdInfo::s_pRapidHpdInfo = 0LL;
  }
}
