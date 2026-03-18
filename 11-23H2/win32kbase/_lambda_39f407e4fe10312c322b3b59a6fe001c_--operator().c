/*
 * XREFs of _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1C00B7DBC
 * Callers:
 *     ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C01E5440 (-ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1C0036EC0 (FastGetProfileDwordEx.c)
 */

__int64 __fastcall lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // r9d
  const WCHAR *v5; // r8
  __int64 result; // rax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  v3 = **a1;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(const WCHAR **)a2;
  v7 = 0;
  FastGetProfileDwordEx(v3, 0xCu, v5, v4, 0, &v7, 0LL);
  result = v7;
  if ( v7 >= *(_DWORD *)(a2 + 12) && v7 <= *(_DWORD *)(a2 + 16) )
    *(_DWORD *)(a2 + 8) = v7;
  return result;
}
