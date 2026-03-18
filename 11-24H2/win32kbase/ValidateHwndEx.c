/*
 * XREFs of ValidateHwndEx @ 0x1400B7530
 * Callers:
 *     UserGetDesktopDC @ 0x14000EDE0 (UserGetDesktopDC.c)
 *     ValidateHwnd @ 0x1400B7510 (ValidateHwnd.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA038 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     EtwTraceInputProcessDelay @ 0x1401693E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x140169CA0 (EtwTraceMessageCheckDelay.c)
 *     NtUserGetDC @ 0x14016C9E0 (NtUserGetDC.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401709B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140184DFC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ValidateHwndStrict @ 0x1401A93F0 (ValidateHwndStrict.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F359C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F36F0 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1400CA27C (EtwTraceUIPIHandleValidationError.c)
 *     IsHandleEntrySecure @ 0x140162894 (IsHandleEntrySecure.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401A3340 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401A922C (Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, int a2, int a3)
{
  int v4; // edi
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int16 v14; // ax
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const struct tagUIPI_INFO *v18; // r8
  bool v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  __int64 UserGdiSessionState; // rax
  _QWORD *v30; // rdx
  int v31; // ecx
  unsigned int v32; // eax
  bool HasUILimit; // al

  v4 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 8LL) )
    goto LABEL_39;
  UserSessionState = W32GetUserSessionState(v7);
  v10 = *(_QWORD *)(UserSessionState + 19944) + (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v9) + 19952) * v4);
  v12 = W32GetUserSessionState(v11);
  v13 = (__int64 *)(*(_QWORD *)(v12 + 19888) + 40LL * (unsigned int)((v10 - *(_QWORD *)(v12 + 19944)) >> 5));
  v14 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v10 + 26) && v14 != 0x7FFF && (v14 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_39;
  if ( *(_BYTE *)(v10 + 24) != 1 )
    goto LABEL_39;
  CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread();
  v20 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
  v21 = *v13;
  if ( !v21
    || (v22 = *(_QWORD *)(v21 + 16), (*(_BYTE *)(v10 + 25) & 1) != 0)
    || a2
    && v22 != v20
    && *(_QWORD *)(v21 + 24) != *(_QWORD *)(v20 + 496)
    && (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) & 4) == 0
    && ((v23 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 472LL)) == 0LL
     || v23() < 0
     || (v26 = *(_QWORD *)(v21 + 24),
         v27 = *(_QWORD *)(v20 + 464),
         (v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48)
                                                           + 480LL)) == 0LL)
     || !v28(v27, v26)) )
  {
LABEL_39:
    v31 = 1400;
    goto LABEL_40;
  }
  if ( a3 && *(_DWORD *)(*(_QWORD *)(v22 + 464) + 884LL) != 1 )
    a3 = 0;
  if ( *(_BYTE *)(v20 + 1708) != 1
    || !v22
    || (LOBYTE(v18) = a3 != 0,
        UIPrivilegeIsolation::CheckAccessEx(
          (UIPrivilegeIsolation *)(*(_QWORD *)(v20 + 464) + 872LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v22 + 464) + 872LL),
          v18,
          v19))
    || (UserGdiSessionState = W32GetUserGdiSessionState(),
        v30 = *(_QWORD **)(v22 + 464),
        *v30 == *(_QWORD *)(UserGdiSessionState + 40)) )
  {
    if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !(unsigned int)Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline() )
      {
        HasUILimit = tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v20 + 464), 1u);
        goto LABEL_35;
      }
      v32 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) >> 29;
    }
    else
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v20 + 528), 0, 0) & 0x20000000) == 0 )
        return v21;
      LOBYTE(v32) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 464) + 760LL) + 32LL);
    }
    HasUILimit = v32 & 1;
LABEL_35:
    if ( HasUILimit && !(unsigned int)IsHandleEntrySecure(a1, v10) )
    {
      UserSetLastError(1400);
      return 0LL;
    }
    return v21;
  }
  EtwTraceUIPIHandleValidationError(*(_QWORD *)(v20 + 464), v30, a1, *(unsigned __int8 *)(v10 + 24));
  v31 = 5;
LABEL_40:
  UserSetLastError(v31);
  return 0LL;
}
