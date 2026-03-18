/*
 * XREFs of MinCrypK_ParseRevocationList @ 0x140693E78
 * Callers:
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     MinCryptParseRevocationList @ 0x140815CCC (MinCryptParseRevocationList.c)
 *     MinCrypK_VerifySignedDataKMode @ 0x140816A30 (MinCrypK_VerifySignedDataKMode.c)
 *     MinAsn1ParseCTL @ 0x140817204 (MinAsn1ParseCTL.c)
 *     MinAsn1DecodeTime @ 0x1408181F0 (MinAsn1DecodeTime.c)
 */

__int64 __fastcall MinCrypK_ParseRevocationList(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // [rsp+40h] [rbp-118h] BYREF
  void *Source2; // [rsp+48h] [rbp-110h]
  _BYTE v11[64]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v12[48]; // [rsp+90h] [rbp-C8h] BYREF
  int v13; // [rsp+C0h] [rbp-98h]
  __int64 v14; // [rsp+C8h] [rbp-90h]
  _BYTE v15[64]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v16[16]; // [rsp+130h] [rbp-28h] BYREF

  result = MinCrypK_VerifySignedDataKMode(a1, a2, (unsigned int)&v9, a4, 0LL, a5, &v9);
  if ( (int)result >= 0 )
  {
    if ( v9 == 9
      && RtlCompareMemory(qword_140B2C5C0, Source2, 9uLL) == 9
      && (int)MinAsn1ParseCTL(v11, v12) >= 0
      && v13 == 14
      && *(_QWORD *)v14 == 0x401062B0A060C30LL
      && *(_DWORD *)(v14 + 8) == 1027047937
      && *(_WORD *)(v14 + 12) == 259
      && (unsigned __int8)MinAsn1DecodeTime(v15, a6) )
    {
      return MinCryptParseRevocationList(v16, v8, a4);
    }
    else
    {
      return 3221226536LL;
    }
  }
  return result;
}
