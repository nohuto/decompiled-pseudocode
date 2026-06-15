/*
 * XREFs of ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180047984
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180014C90 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180047A48 (-GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@.c)
 *     ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180047B18 (-GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@.c)
 */

int __fastcall ARI::ProcessToken::SysAppId::GetAppUserModelId(
        ARI::ProcessToken::SysAppId *this,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v6; // edi
  int result; // eax
  int v9; // esi
  int v10; // ecx
  __int64 v11; // rbx
  unsigned __int16 *v12[5]; // [rsp+20h] [rbp-28h] BYREF

  LODWORD(v12[0]) = 0;
  v6 = (unsigned int)a2;
  result = ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(this, 0LL, (unsigned int)v12, 0LL, v12[0]);
  if ( result == 122 )
  {
    result = ARI::ProcessToken::SysAppId::GetPackageFamilyName(
               this,
               (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)v6,
               (unsigned int)v12 + 4,
               a4,
               (unsigned __int16 *)LODWORD(v12[0]));
    v9 = (int)v12[0];
    v10 = HIDWORD(v12[0]);
    if ( result == 122 )
      goto LABEL_6;
    if ( result )
      return result;
    if ( v6 < HIDWORD(v12[0]) + LODWORD(v12[0]) )
    {
LABEL_6:
      result = 122;
      *a3 = LODWORD(v12[0]) + HIDWORD(v12[0]);
    }
    else
    {
      v11 = (unsigned int)(HIDWORD(v12[0]) - 1);
      *((_WORD *)a4 + v11) = 33;
      ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(
        this,
        (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(v6 - v10),
        (unsigned int)v12 + 4,
        (unsigned int *)((char *)a4 + 2 * (unsigned int)(v10 - 1) + 2),
        v12[0]);
      *a3 = v11 + v9 + 1;
      return 0;
    }
  }
  return result;
}
