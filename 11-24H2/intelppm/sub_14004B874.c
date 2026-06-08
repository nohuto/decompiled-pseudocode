/*
 * XREFs of sub_14004B874 @ 0x14004B874
 * Callers:
 *     sub_14004B714 @ 0x14004B714 (sub_14004B714.c)
 * Callees:
 *     sub_140006448 @ 0x140006448 (sub_140006448.c)
 *     sub_1400067D0 @ 0x1400067D0 (sub_1400067D0.c)
 *     sub_14000EE18 @ 0x14000EE18 (sub_14000EE18.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140047594 @ 0x140047594 (sub_140047594.c)
 */

__int64 __fastcall sub_14004B874(unsigned __int8 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // r8
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // [rsp+20h] [rbp-E0h]
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t v13[20]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v14[192]; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v15[192]; // [rsp+1E0h] [rbp+E0h] BYREF

  v12 = 0;
  v11 = 0;
  v3 = sub_140006448(
         v14,
         192LL,
         L"%s\\EfficiencyClass\\%d\\EnergyEquation",
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
         a1);
  if ( v3 < 0 )
    goto LABEL_8;
  v3 = sub_140047594((__int64)v14, (__int64)L"EquationIndex", (__int64)&v12);
  if ( v3 < 0 )
    goto LABEL_8;
  v3 = sub_140006448(v13, 16LL, L"\\%d", v12);
  if ( v3 < 0 )
    goto LABEL_8;
  v3 = sub_14000EE18(v14, v4, (__int64)v13);
  if ( v3 < 0 )
    goto LABEL_8;
  v3 = sub_140047594((__int64)v14, (__int64)L"NumberOfCounters", (__int64)&v11);
  if ( v3 < 0 )
    goto LABEL_8;
  if ( !v11 )
  {
    v3 = -1073741807;
LABEL_8:
    *(_DWORD *)(a2 + 40) = 0;
    sub_140010680((char *)(a2 + 44), 0, 0xC0uLL);
    return (unsigned int)v3;
  }
  if ( v11 > 0x10 )
  {
    v3 = -2147483643;
    goto LABEL_8;
  }
  v3 = sub_14000EE18(v14, v5, (__int64)L"\\EnergyCounter");
  if ( v3 < 0 )
    goto LABEL_8;
  v3 = sub_1400067D0(v15, 192LL, v7, (__int64)v14);
  if ( v3 < 0 )
    goto LABEL_8;
  v8 = 0;
  v9 = a2 + 44;
  while ( v8 < v11 )
  {
    LODWORD(v10) = v8;
    v3 = sub_140006448(v14, 192LL, L"%s\\%d", v15, v10);
    if ( v3 < 0 )
      goto LABEL_8;
    v3 = sub_140047594((__int64)v14, (__int64)L"CounterId", v9);
    if ( v3 < 0 )
      goto LABEL_8;
    v3 = sub_140047594((__int64)v14, (__int64)L"CounterType", v9 + 4);
    if ( v3 < 0 )
      goto LABEL_8;
    v3 = sub_140047594((__int64)v14, (__int64)L"Factor", v9 + 8);
    if ( v3 < 0 )
      goto LABEL_8;
    ++v8;
    v9 += 12LL;
  }
  *(_DWORD *)(a2 + 40) = v11;
  return (unsigned int)v3;
}
