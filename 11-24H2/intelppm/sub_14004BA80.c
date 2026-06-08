/*
 * XREFs of sub_14004BA80 @ 0x14004BA80
 * Callers:
 *     sub_14004B714 @ 0x14004B714 (sub_14004B714.c)
 * Callees:
 *     sub_140006448 @ 0x140006448 (sub_140006448.c)
 *     sub_1400067D0 @ 0x1400067D0 (sub_1400067D0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140047594 @ 0x140047594 (sub_140047594.c)
 */

__int64 __fastcall sub_14004BA80(unsigned __int8 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // r8
  unsigned int v6; // esi
  _BYTE *v7; // rdi
  __int64 v8; // [rsp+20h] [rbp-E0h]
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v12[192]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v13[192]; // [rsp+1C0h] [rbp+C0h] BYREF

  v10 = 0;
  v9 = 0;
  v11 = 0;
  v3 = sub_140006448(
         v12,
         192LL,
         L"%s\\EfficiencyClass\\%d\\PowerCurve",
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
         a1);
  if ( v3 < 0 )
    goto LABEL_5;
  v3 = sub_140047594((__int64)v12, (__int64)L"PointCount", (__int64)&v9);
  if ( v3 < 0 )
    goto LABEL_5;
  if ( !v9 )
  {
    v3 = -1073741807;
LABEL_5:
    *(_DWORD *)(a2 + 4) &= 0xFFFFFF01;
    *(_OWORD *)(a2 + 8) = 0LL;
    *(_OWORD *)(a2 + 24) = 0LL;
    return (unsigned int)v3;
  }
  if ( v9 > 8 )
  {
    v3 = -2147483643;
    goto LABEL_5;
  }
  v3 = sub_1400067D0(v13, 192LL, v4, (__int64)v12);
  if ( v3 < 0 )
    goto LABEL_5;
  v6 = 0;
  v7 = (_BYTE *)(a2 + 8);
  while ( v6 < v9 )
  {
    LODWORD(v8) = v6;
    v3 = sub_140006448(v12, 192LL, L"%s\\%d", v13, v8);
    if ( v3 < 0 )
      goto LABEL_5;
    v3 = sub_140047594((__int64)v12, (__int64)L"FrequencyPercent", (__int64)&v10);
    if ( v3 < 0 )
      goto LABEL_5;
    *v7 = v10;
    v3 = sub_140047594((__int64)v12, (__int64)L"PowerEnvelope", (__int64)&v11);
    if ( v3 < 0 )
      goto LABEL_5;
    ++v6;
    *(_DWORD *)v7 = (v11 << 8) | (unsigned __int8)*(_DWORD *)v7;
    v7 += 4;
  }
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a2 + 4) & 0xFFFFFF01 | (2 * (v9 & 0x7F));
  return (unsigned int)v3;
}
