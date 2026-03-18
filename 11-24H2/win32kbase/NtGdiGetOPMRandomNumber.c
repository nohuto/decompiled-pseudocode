/*
 * XREFs of NtGdiGetOPMRandomNumber @ 0x140158DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x14008AAD4 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_ @ 0x1401C5F28 (SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetOPMRandomNumber(void *a1, __int64 a2)
{
  __int64 SessionState; // rax
  __int64 result; // rax
  _DXGKMDT_OPM_RANDOM_NUMBER v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  SessionState = W32GetSessionState(a1);
  result = COPM::GetRandomNumber(*(COPM **)(*(_QWORD *)(SessionState + 88) + 3648LL), a1, &v6);
  if ( (int)result >= 0 )
  {
    result = SafelyCopyKernelModeDataToUserModeData__DXGKMDT_OPM_RANDOM_NUMBER_(a2, &v6);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
