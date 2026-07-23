/*
 * XREFs of LdrpQueryCurrentPatch @ 0x1800AE798
 * Callers:
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     LdrpLoadPatchedNtdll @ 0x1800AE630 (LdrpLoadPatchedNtdll.c)
 * Callees:
 *     LdrpIsImageAddress @ 0x18015DD60 (LdrpIsImageAddress.c)
 *     ZwManageHotPatch @ 0x180162380 (ZwManageHotPatch.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpQueryCurrentPatch(__int64 a1, char *a2)
{
  char v2; // bl
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+24h] [rbp-3Ch] BYREF
  _DWORD v8[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  v7 = 0;
  v8[1] = 0;
  v2 = 1;
  v12 = 0LL;
  v9 = -1LL;
  v10 = a1;
  v8[0] = 1;
  v11 = 0LL;
  result = ZwManageHotPatch(8LL, v8, 48LL, &v7);
  if ( (_DWORD)result == -1073741800 )
  {
    v6 = 0;
    if ( (int)LdrpIsImageAddress(a1, &v6) >= 0 && !v6 )
    {
      result = 0LL;
LABEL_9:
      v2 = 0;
      goto LABEL_10;
    }
LABEL_8:
    result = 3221226668LL;
    goto LABEL_9;
  }
  if ( (_DWORD)result != -1073741789 )
  {
    if ( !(_DWORD)result )
      goto LABEL_9;
    goto LABEL_8;
  }
  result = 0LL;
LABEL_10:
  *a2 = v2;
  return result;
}
