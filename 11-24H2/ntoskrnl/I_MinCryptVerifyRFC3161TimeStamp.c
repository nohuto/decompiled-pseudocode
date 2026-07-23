/*
 * XREFs of I_MinCryptVerifyRFC3161TimeStamp @ 0x140826D68
 * Callers:
 *     I_MinCryptGetSigningTime @ 0x1408269F0 (I_MinCryptGetSigningTime.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1406A01F4 (MinCryptHashMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140824FB0 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 *     MinAsn1DecodeGeneralizedTime @ 0x140828358 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1ExtractValues @ 0x140828BE4 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall I_MinCryptVerifyRFC3161TimeStamp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        unsigned int *a7)
{
  int Values; // eax
  unsigned int v8; // esi
  int v9; // edi
  SIZE_T Length; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  void *Source2; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  _BYTE v16[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v17; // [rsp+C0h] [rbp-40h]
  _BYTE v18[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v19; // [rsp+F0h] [rbp-10h]
  void *v20; // [rsp+F8h] [rbp-8h]
  _BYTE v21[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE Source1[64]; // [rsp+110h] [rbp+10h] BYREF

  if ( (int)MinCrypK_VerifySignedDataKModeEx(
              *(_QWORD *)(a1 + 8),
              *(_DWORD *)a1,
              0,
              0,
              (__int64)&qword_140B3F5D0,
              a4,
              &v12) < 0 )
  {
    *a5 |= 0x40000u;
    return (unsigned int)-1073740760;
  }
  if ( v12 != 11 || RtlCompareMemory(qword_140B3D7E0, Source2, 0xBuLL) != 11 )
    goto LABEL_15;
  HIDWORD(Length) = 14;
  Values = MinAsn1ExtractValues(v15, v14, (unsigned int)&Length + 4, (unsigned int)&qword_14000D1D0, 6, (__int64)v16);
  if ( Values > 0 )
    Values = v17;
  if ( Values < 0 )
  {
LABEL_15:
    *a5 |= 0x50000u;
    return (unsigned int)-1073740760;
  }
  v8 = MinCryptDecodeHashAlgorithmIdentifier((__int64)v18);
  if ( !v8 )
    return (unsigned int)-1073740760;
  v9 = MinCryptHashMemory(v8);
  if ( v9 >= 0 )
  {
    if ( v19 || RtlCompareMemory(Source1, v20, 0LL) )
      return (unsigned int)-1073740760;
    if ( !(unsigned __int8)MinAsn1DecodeGeneralizedTime(v21, a6) )
      *a6 = 0LL;
    *a7 = v8;
  }
  return (unsigned int)v9;
}
