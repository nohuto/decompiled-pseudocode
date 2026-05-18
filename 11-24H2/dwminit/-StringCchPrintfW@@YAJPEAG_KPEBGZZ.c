/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008FE8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180005184 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800055E8 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000AC58 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x18000C608 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     DllMain @ 0x18000DA84 (DllMain.c)
 *     DwmpSignalSessionShutdown @ 0x18000F44C (DwmpSignalSessionShutdown.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F66C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     _vsnwprintf @ 0x18000316C (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147024774;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    a1[v5] = 0;
    return v4;
  }
  v4 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v4;
}
