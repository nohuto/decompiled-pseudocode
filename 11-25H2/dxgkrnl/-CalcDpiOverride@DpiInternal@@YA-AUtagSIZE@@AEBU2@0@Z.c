/*
 * XREFs of ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x140055F34
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x140055D18 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YAIII@Z @ 0x14005602C (-CalcDpi@DpiInternal@@YAIII@Z.c)
 */

struct tagSIZE __fastcall DpiInternal::CalcDpiOverride(
        DpiInternal *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3)
{
  LONG cx; // edi
  unsigned int cy; // esi
  unsigned int v6; // r8d
  unsigned int v7; // eax
  DpiInternal *v8; // rcx
  unsigned int v9; // r8d
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+38h] [rbp-31h]
  const wchar_t *v13; // [rsp+40h] [rbp-29h]
  __int64 *v14; // [rsp+48h] [rbp-21h]
  int v15; // [rsp+50h] [rbp-19h]
  int *v16; // [rsp+58h] [rbp-11h]
  int v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  __int128 v21; // [rsp+80h] [rbp+17h]
  __int128 v22; // [rsp+90h] [rbp+27h]
  __int64 v23; // [rsp+D8h] [rbp+6Fh] BYREF
  int v24; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v25; // [rsp+E8h] [rbp+7Fh]

  cx = a2->cx;
  cy = a2->cy;
  LODWORD(v23) = 0;
  v24 = 0;
  v11 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v20 = 0LL;
  v13 = L"UserPreferenceWidth";
  v14 = &v23;
  v16 = &v24;
  v12 = 292;
  v15 = 0x4000000;
  v17 = 4;
  v21 = 0LL;
  v22 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Theme",
              &v11,
              0LL,
              0LL) >= 0 )
  {
    cx = v23;
    cy = (unsigned int)(*((_DWORD *)this + 1) * v23) / *(_DWORD *)this;
  }
  if ( !cx || !cy )
    return 0LL;
  v7 = DpiInternal::CalcDpi((DpiInternal *)*(unsigned int *)this, cx, v6);
  v8 = (DpiInternal *)*((unsigned int *)this + 1);
  LODWORD(v25) = v7;
  HIDWORD(v25) = DpiInternal::CalcDpi(v8, cy, v9);
  return (struct tagSIZE)v25;
}
