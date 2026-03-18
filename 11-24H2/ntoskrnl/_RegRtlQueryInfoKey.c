/*
 * XREFs of _RegRtlQueryInfoKey @ 0x140993F98
 * Callers:
 *     _RegRtlCopyTreeInternal @ 0x140820BA0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeleteTreeInternal @ 0x140991230 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140992760 (_RegRtlEnumKeyWithCallback.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140993BAC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpCtxRegQueryInfoKey @ 0x140993F58 (_PnpCtxRegQueryInfoKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140995624 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AD38 (_RegRtlDeletePathInternal.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A80898 (_CmGetDeviceCompoundFiltersWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1406A66D0 (ZwQueryKey.c)
 */

__int64 __fastcall RegRtlQueryInfoKey(void *a1, _DWORD *a2, unsigned int *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  NTSTATUS v9; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  __int128 KeyInformation; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  ResultLength = 0;
  v14 = 0LL;
  KeyInformation = 0LL;
  v13 = 0LL;
  v9 = ZwQueryKey(a1, KeyCachedInformation, &KeyInformation, 0x28u, &ResultLength);
  if ( v9 >= 0 )
  {
    if ( a2 )
      *a2 = HIDWORD(KeyInformation);
    if ( a3 )
      *a3 = (unsigned int)v13 >> 1;
    if ( a4 )
      *a4 = DWORD1(v13);
    if ( a5 )
      *a5 = DWORD2(v13) >> 1;
    if ( a6 )
      *a6 = HIDWORD(v13);
  }
  return (unsigned int)v9;
}
