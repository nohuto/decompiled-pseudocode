/*
 * XREFs of sub_14004B714 @ 0x14004B714
 * Callers:
 *     sub_14004A99C @ 0x14004A99C (sub_14004A99C.c)
 * Callees:
 *     sub_140006448 @ 0x140006448 (sub_140006448.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140047594 @ 0x140047594 (sub_140047594.c)
 *     sub_1400494D4 @ 0x1400494D4 (sub_1400494D4.c)
 *     sub_14004B874 @ 0x14004B874 (sub_14004B874.c)
 *     sub_14004BA80 @ 0x14004BA80 (sub_14004BA80.c)
 */

__int64 __fastcall sub_14004B714(unsigned __int8 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // r11
  unsigned int v7; // edx
  unsigned int i; // r8d
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  int v12; // edx
  __int64 result; // rax
  int v14; // ecx
  int v15; // [rsp+20h] [rbp-1B8h]
  int v16[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t v17[192]; // [rsp+40h] [rbp-198h] BYREF

  v16[0] = 0;
  v3 = a1;
  sub_140010680((char *)a2, 0, 0x100uLL);
  LOBYTE(v4) = v3;
  sub_14004B874(v4, a2);
  LOBYTE(v5) = v3;
  if ( (int)sub_14004BA80(v5, a2) >= 0 )
  {
    v6 = 0;
    v7 = (*(_DWORD *)(a2 + 4) >> 1) & 0x7F;
    if ( v7 >= 2
      && (unsigned __int8)*(_DWORD *)(a2 + 4LL * (v7 - 1) + 8) <= 0x64u
      && (*(_DWORD *)(a2 + 8) & 0xFFFFFF00) <= 0x3E8000 )
    {
      for ( i = 1; i < v7; ++i )
      {
        v9 = *(_DWORD *)(a2 + 4LL * (i - 1) + 8);
        v10 = *(_DWORD *)(a2 + 4LL * i + 8);
        if ( (unsigned __int8)v10 <= (unsigned __int8)v9 )
          goto LABEL_12;
        v11 = v10 >> 8;
        if ( v11 < v9 >> 8 || v11 > 0x3E80 )
          goto LABEL_12;
      }
      v6 = 1;
    }
LABEL_12:
    v12 = *(_DWORD *)(a2 + 4);
    if ( v6 )
      *(_DWORD *)(a2 + 4) = v12 | 1;
    else
      sub_1400494D4(v3, (unsigned __int8)v12 >> 1, (char *)(a2 + 8));
  }
  v15 = v3;
  result = sub_140006448(
             v17,
             192LL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v15);
  if ( (int)result < 0
    || (result = sub_140047594((__int64)v17, (__int64)L"PowerEnvelope", (__int64)v16), (int)result < 0)
    || (v14 = v16[0], result = (unsigned int)(v16[0] - 1), (unsigned int)result > 0x3E7F) )
  {
    v14 = 750;
  }
  *(_DWORD *)a2 = v14;
  return result;
}
