/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x140A7C304
 * Callers:
 *     EtwpApplyTransientFilters @ 0x140897D84 (EtwpApplyTransientFilters.c)
 *     EtwpApplyScopeFilters @ 0x14089E4C0 (EtwpApplyScopeFilters.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x1402928E0 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsQueryProcessAttributesByToken @ 0x1409CCE30 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  char v6; // bl
  void *v8; // r13
  unsigned __int16 v9; // r14
  unsigned int v10; // esi
  char v11; // r15
  unsigned __int16 v12; // r14
  unsigned int v13; // esi
  char v14; // al
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  ULONG_PTR PackageSize; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR AppIdSize[2]; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR AppId[196]; // [rsp+158h] [rbp+58h] BYREF

  v17 = a1;
  memset_0(&PackageSize, 0, 0x2A0uLL);
  v6 = 0;
  v15 = 0;
  if ( !a2 && !a3 )
    return 1;
  v8 = (void *)PsReferencePrimaryTokenWithTag(*(_QWORD *)(a1 + 80), 0x746C6644u);
  PsQueryProcessAttributesByToken((__int64)v8, &v15, v16);
  if ( v15 )
  {
    PackageSize = 256LL;
    AppIdSize[0] = 130LL;
    if ( RtlQueryPackageIdentity(v8, PackageFullName, &PackageSize, AppId, AppIdSize, 0LL) >= 0 )
    {
      if ( a2 )
      {
        v9 = 0;
        v10 = (PackageSize >> 1) - 1;
        while ( v9 < *a2 )
        {
          if ( a2[8 * v9 + 4] == v10 && !wcsnicmp(*(const wchar_t **)&a2[8 * v9 + 8], PackageFullName, v10) )
            goto LABEL_13;
          ++v9;
        }
        v11 = 0;
      }
      else
      {
LABEL_13:
        v11 = 1;
      }
      if ( a3 )
      {
        v12 = 0;
        v13 = (AppIdSize[0] >> 1) - 1;
        while ( v12 < *a3 )
        {
          if ( a3[8 * v12 + 4] == v13 && !wcsnicmp(*(const wchar_t **)&a3[8 * v12 + 8], AppId, v13) )
            goto LABEL_21;
          ++v12;
        }
        v14 = 0;
      }
      else
      {
LABEL_21:
        v14 = 1;
      }
      if ( v11 )
      {
        if ( v14 )
          v6 = 1;
      }
    }
  }
  ObFastDereferenceObject((__int64 *)(*(_QWORD *)(v17 + 80) + 584LL), (ULONG_PTR)v8, 1953261124LL);
  return v6;
}
