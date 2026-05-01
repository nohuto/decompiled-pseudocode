/*
 * XREFs of ?v_OnViewVisibilityChanged@UwpWindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18001B5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18001B704 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManag.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18001BA4C (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801CDBA4 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowWrapper::v_OnViewVisibilityChanged(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  int *v5; // r8
  char v6; // di
  char v7; // si
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  UwpWindowReadyState *v11; // rcx
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1 + 360;
  v5 = (int *)(a1 + 368);
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 360) && !*v5;
  if ( a3 == 1 )
  {
    if ( a2 )
    {
      v12 = *v5;
      *v5 = v12 & 0xFFFFFFFE;
      ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
        a1 + 360,
        &v12,
        v5);
      if ( WindowReadyState::IsReadyForPresentation((WindowReadyState *)v4) )
        UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v11);
    }
    else if ( *(_BYTE *)(a1 + 372) )
    {
      v10 = *v5;
      if ( (*v5 & 1) != 0 )
      {
        v12 = *v5;
        v8 = v10 | 2;
        goto LABEL_7;
      }
    }
  }
  else if ( a2 )
  {
    v12 = *v5;
    v8 = v12 | 1;
LABEL_7:
    *v5 = v8;
    ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
      a1 + 360,
      &v12,
      v5);
  }
  if ( !*(_QWORD *)v4 || *(_DWORD *)(v4 + 8) )
    v6 = 0;
  if ( v7 != v6 )
  {
    LOBYTE(v12) = v6;
    v9 = *(_QWORD *)(v4 + 80);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18001B699LL);
    }
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 16LL))(v9, &v12);
  }
}
