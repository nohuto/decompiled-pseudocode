/*
 * XREFs of ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F2F30
 * Callers:
 *     ?OnTimer@CRapidHpdInfo@@SAXXZ @ 0x1401AA4D8 (-OnTimer@CRapidHpdInfo@@SAXXZ.c)
 *     ?Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ @ 0x1401CB108 (-Cancel@CRapidHpdInfo@@SAPEAVCMonitorTopology@@XZ.c)
 *     EditionDriverUninitialize @ 0x1401F2C60 (EditionDriverUninitialize.c)
 * Callees:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x1400681E8 (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ?TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z @ 0x1401F32E8 (-TraceLoggingRapidHpdComplete@@YAXIIIIIU_GUID@@I@Z.c)
 *     ?RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult@@IIIIU_GUID@@I@Z @ 0x14026B6B0 (-RapidHpdComplete@DesktopRecalc@InputTraceLogging@@SAXW4InputTracing_DesktopRecalcRapidHpdResult.c)
 */

void __fastcall CRapidHpdInfo::Delete(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _DWORD *v5; // r10
  int v6; // r11d
  __int64 v7; // r9
  _DWORD *v8; // r10
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  CMonitorTopology **v11; // rbx
  struct _GUID v12; // [rsp+40h] [rbp-18h] BYREF

  v2 = a1;
  v3 = W32GetUserSessionState(a1, a2) + 71504;
  if ( *(_QWORD *)v3 )
  {
    v4 = CMonitorTopology::CompareToCurrent(*(_QWORD *)(*(_QWORD *)v3 + 40LL), 0LL);
    v5 = *(_DWORD **)v3;
    v6 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_DWORD *)(*(_QWORD *)v3 + 8LL);
    v7 = *(unsigned int *)(*(_QWORD *)v3 + 16LL);
    v12 = *(struct _GUID *)(*(_QWORD *)v3 + 24LL);
    InputTraceLogging::DesktopRecalc::RapidHpdComplete(
      v2,
      *(unsigned int *)(*(_QWORD *)v3 + 20LL),
      (unsigned int)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *v5,
      v7,
      v6,
      &v12,
      v4);
    v8 = *(_DWORD **)v3;
    v9 = *(_DWORD *)(*(_QWORD *)v3 + 16LL);
    v10 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *(_DWORD *)(*(_QWORD *)v3 + 8LL);
    v12 = *(struct _GUID *)(*(_QWORD *)v3 + 24LL);
    TraceLoggingRapidHpdComplete(
      v2,
      *(_DWORD *)(*(_QWORD *)v3 + 20LL),
      ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - *v8,
      v9,
      v10,
      &v12,
      v4);
    v11 = *(CMonitorTopology ***)v3;
    if ( *(_QWORD *)v3 )
    {
      CMonitorTopology::Release(v11[5]);
      Win32FreePool(v11);
    }
    *(_QWORD *)v3 = 0LL;
  }
}
