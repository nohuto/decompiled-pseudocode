/*
 * XREFs of ?MonitorEnumProc@GamingOverlayExperienceManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18022DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$_Emplace_reallocate@AEAY0CA@G@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEAY0CA@G@Z @ 0x180343254 (--$_Emplace_reallocate@AEAY0CA@G@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::MonitorEnumProc(HMONITOR a1, HDC a2, LPRECT a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  LONG v10; // ecx
  LONG v11; // ecx
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v13[72]; // [rsp+58h] [rbp-41h] BYREF
  _WORD v14[32]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  memset_0(&mi.rcMonitor, 0, 0x64uLL);
  mi.cbSize = 104;
  if ( !GetMonitorInfoW(a1, &mi) )
  {
    v6 = -2147467259;
    v7 = 2879LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v6);
    return v6;
  }
  memset_0(v14, 0, sizeof(v14));
  if ( (unsigned int)_o_wcscpy_s(v14, 32LL, v13) )
  {
    v6 = -2147024809;
    v7 = 2882LL;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a4 + 1504) == *(_QWORD *)(a4 + 1512) )
  {
    std::vector<std::wstring>::_Emplace_reallocate<unsigned short (&)[32]>(a4 + 1496, *(_QWORD *)(a4 + 1504), v14);
  }
  else
  {
    std::wstring::wstring(*(char ***)(a4 + 1504), v14);
    *(_QWORD *)(a4 + 1504) += 32LL;
  }
  v9 = *(_DWORD *)(a4 + 1520);
  if ( v9 == -1 )
  {
    *(_DWORD *)(a4 + 1520) = 0;
    v9 = 0;
  }
  else if ( v9 )
  {
    goto LABEL_16;
  }
  v10 = *(_DWORD *)(a4 + 1540);
  if ( v10 < mi.rcMonitor.right && v10 >= mi.rcMonitor.left )
  {
    v11 = *(_DWORD *)(a4 + 1544);
    if ( v11 < mi.rcMonitor.bottom && v11 >= mi.rcMonitor.top )
      goto LABEL_17;
  }
LABEL_16:
  if ( v9 == (unsigned int)((__int64)(*(_QWORD *)(a4 + 1504) - *(_QWORD *)(a4 + 1496)) >> 5) - 1 )
LABEL_17:
    *(RECT *)(a4 + 1524) = mi.rcMonitor;
  return 1LL;
}
