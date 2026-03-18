/*
 * XREFs of ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1402FBE78
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1402FB5E4 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     <none>
 */

bool OutputDuplIsAllowedByMdmPolicy(void)
{
  __int64 v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h]
  const wchar_t *v3; // [rsp+40h] [rbp-9h]
  int *v4; // [rsp+48h] [rbp-1h]
  int v5; // [rsp+50h] [rbp+7h]
  int *v6; // [rsp+58h] [rbp+Fh]
  int v7; // [rsp+60h] [rbp+17h]
  __int64 v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+70h] [rbp+27h]
  __int64 v10; // [rsp+78h] [rbp+2Fh]
  __int128 v11; // [rsp+80h] [rbp+37h]
  __int128 v12; // [rsp+90h] [rbp+47h]
  int v13; // [rsp+B0h] [rbp+67h] BYREF
  int v14; // [rsp+B8h] [rbp+6Fh] BYREF

  v1 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v14 = 1;
  v13 = 1;
  v3 = L"AllowScreenCapture";
  v4 = &v13;
  v6 = &v14;
  v2 = 288;
  v5 = 67108868;
  v7 = 4;
  v11 = 0LL;
  v12 = 0LL;
  RtlQueryRegistryValuesEx(
    0LL,
    L"\\Registry\\Machine\\Software\\Microsoft\\PolicyManager\\current\\Experience",
    &v1,
    0LL,
    0LL);
  return v13 != 0;
}
