/*
 * XREFs of InternalRtlGetLicenseData @ 0x140096E10
 * Callers:
 *     WindowsQueryLicenseDWORD @ 0x140096EFC (WindowsQueryLicenseDWORD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InternalRtlGetLicenseData(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // r9
  __int64 Pool2; // rax
  int v9; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v10[2]; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF

  v11 = 0;
  v9 = 4;
  v10[0] = 0LL;
  if ( !a4 || !a3 )
    return 3221225485LL;
  RtlInitUnicodeString(v10, L"Microsoft-Windows-Core-AllowMultiMon");
  result = ZwQueryLicenseValue(v10, &v11, 0LL, 0LL, a3);
  if ( (_DWORD)result != -1073741789 )
    return result;
  if ( v11 != v9 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(256LL, *a3, 541282891LL, v7);
  *a4 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  result = ZwQueryLicenseValue(v10, &v9, Pool2, *a3, a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
