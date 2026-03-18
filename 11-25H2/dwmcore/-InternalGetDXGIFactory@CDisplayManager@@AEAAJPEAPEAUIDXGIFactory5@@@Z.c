/*
 * XREFs of ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x18003E134
 * Callers:
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x18003EBE0 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1800C2040 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800FFCE0 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x1801B3214 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x18020A3C0 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1802C1224 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?RecentDisplayChange@CDisplayManager@@IEAA_NXZ @ 0x1802C134C (-RecentDisplayChange@CDisplayManager@@IEAA_NXZ.c)
 * Callees:
 *     ?IsCompositionThread@@YA_NXZ @ 0x18003E260 (-IsCompositionThread@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800C5BD8 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x18022CD24 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayManager::InternalGetDXGIFactory(CDisplayManager *this, struct IDXGIFactory5 **a2)
{
  CDisplayManager *v3; // rcx
  CDisplayManager *v4; // rcx
  struct IDXGIFactory5 *v6; // rbx
  int updated; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IsCompositionThread() )
  {
    v6 = 0LL;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_180406B88 )
    {
      v6 = (struct IDXGIFactory5 *)qword_180406B88;
      (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_180406B88 + 8LL))(qword_180406B88);
    }
    LeaveCriticalSection(&g_DisplayManager);
    if ( !v6 )
    {
      LOBYTE(word_180406BB0) = 1;
      ScheduleCompositionPass(0LL, 0x80000LL);
      return 2291663005LL;
    }
    if ( !((unsigned int (__fastcall *)(struct IDXGIFactory5 *))v6->lpVtbl->IsCurrent)(v6) )
    {
      LOBYTE(word_180406BB0) = 1;
      ScheduleCompositionPass(0LL, 0x80000LL);
    }
    *a2 = v6;
    return 0LL;
  }
  v3 = qword_180406B88;
  if ( qword_180406B88
    && (*(unsigned int (__fastcall **)(CDisplayManager *))(*(_QWORD *)qword_180406B88 + 104LL))(qword_180406B88)
    || (updated = CDisplayManager::UpdateDXGIFactory(v3), v8 = updated, updated >= 0) )
  {
    v4 = qword_180406B88;
    *a2 = (struct IDXGIFactory5 *)qword_180406B88;
    (*(void (__fastcall **)(CDisplayManager *))(*(_QWORD *)v4 + 8LL))(v4);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x145,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\displaymanager.cpp",
    (const char *)(unsigned int)updated,
    v9);
  return v8;
}
