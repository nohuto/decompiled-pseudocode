/*
 * XREFs of DxgkCheckDisplayState @ 0x1401BF1B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?reset@?$unique_ptr@VDISPLAYSTATECHECKER@@U?$default_delete@VDISPLAYSTATECHECKER@@@wistd@@@wistd@@QEAAXPEAVDISPLAYSTATECHECKER@@@Z @ 0x14006D5B8 (-reset@-$unique_ptr@VDISPLAYSTATECHECKER@@U-$default_delete@VDISPLAYSTATECHECKER@@@wistd@@@wistd.c)
 *     ?CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ @ 0x1401BC65C (-CheckPrimaryContentState@DISPLAYSTATECHECKER@@QEAAJXZ.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401BE088 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401BE5E0 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ @ 0x1401BF110 (-TryRecovery@DISPLAYSTATECHECKER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkCheckDisplayState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  DISPLAYSTATECHECKER *v6; // rbx
  int v7; // esi
  const char *v8; // r9
  int v9; // r8d
  int v10; // edx
  DISPLAYSTATECHECKER *v12[2]; // [rsp+50h] [rbp-28h] BYREF
  __int128 v13; // [rsp+60h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v5 = operator new(0x3710uLL, 0x4B677844u, 256LL, a4);
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *(_DWORD *)(v5 + 16) = 0;
    *(_OWORD *)(v5 + 20) = 0LL;
    `vector constructor iterator'(
      (char *)(v5 + 40),
      3512LL,
      4LL,
      (void (__fastcall *)(char *))DISPLAYDIAGNOSTICADAPTERDATA::DISPLAYDIAGNOSTICADAPTERDATA);
    *(_DWORD *)(v5 + 14088) = 0;
    *(_DWORD *)(v5 + 14092) = 65792;
  }
  else
  {
    v5 = 0LL;
  }
  wistd::unique_ptr<DISPLAYSTATECHECKER,wistd::default_delete<DISPLAYSTATECHECKER>>::reset((char **)v12, (char *)v5);
  v6 = v12[0];
  if ( v12[0] )
  {
    v8 = *(const char **)(a1 + 8);
    v9 = *(_DWORD *)(a1 + 4);
    v10 = *(_DWORD *)a1;
    v13 = *(_OWORD *)(a1 + 24);
    v7 = DISPLAYSTATECHECKER::Initialize((__int64)v12[0], v10, v9, v8, &v13);
    if ( v7 >= 0 )
    {
      DISPLAYSTATECHECKER::CheckPrimaryContentState(v6);
      DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(v6, *(struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)(a1 + 16));
      if ( *(_DWORD *)(a1 + 4) )
        DISPLAYSTATECHECKER::TryRecovery(v6);
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 59;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"No memory available for DISPLAYSTATECHECKER",
      59LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = -1073741801;
  }
  wistd::unique_ptr<DISPLAYSTATECHECKER,wistd::default_delete<DISPLAYSTATECHECKER>>::reset((char **)v12, 0LL);
  return (unsigned int)v7;
}
