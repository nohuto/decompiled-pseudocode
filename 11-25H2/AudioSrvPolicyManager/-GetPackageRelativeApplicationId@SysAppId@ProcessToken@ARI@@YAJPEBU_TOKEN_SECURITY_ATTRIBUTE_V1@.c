/*
 * XREFs of ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18004A338
 * Callers:
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18004A1A4 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18004B3CC (memcpy_0.c)
 */

__int64 __fastcall ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(
        ARI::ProcessToken::SysAppId *this,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rbx

  v4 = *((_QWORD *)this + 4);
  v6 = *(unsigned __int16 *)(v4 + 16) >> 1;
  *a3 = v6 + 1;
  if ( (unsigned int)a2 < (int)v6 + 1 )
    return 122LL;
  v8 = 2 * v6;
  memcpy_0(a4, *(const void **)(v4 + 24), 2 * v6);
  result = 0LL;
  *(_WORD *)((char *)a4 + v8) = 0;
  return result;
}
