/*
 * XREFs of I_MinCryptVerifySignerAuthenticatedAttributes @ 0x140826F00
 * Callers:
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826B54 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1406A01F4 (MinCryptHashMemory.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408274E0 (I_MinAsn1ParseSingleAttribute.c)
 *     MinAsn1ExtractContent @ 0x140828A80 (MinAsn1ExtractContent.c)
 */

__int64 __fastcall I_MinCryptVerifySignerAuthenticatedAttributes(
        unsigned int a1,
        const void *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v8; // rbx
  char v10; // [rsp+30h] [rbp-38h] BYREF
  _DWORD Length[3]; // [rsp+34h] [rbp-34h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+50h] [rbp-18h]
  __int64 v14; // [rsp+58h] [rbp-10h]

  v12 = 0LL;
  memset(Length, 0, sizeof(Length));
  v10 = 49;
  if ( !(unsigned __int8)I_MinAsn1ParseSingleAttribute(&qword_140B3DBE8, a4, a3, &v12) )
    return 3221226536LL;
  if ( (int)MinAsn1ExtractContent(*((_QWORD *)&v12 + 1), (unsigned int)v12, Length, &Length[1]) < 0 )
    return 3221226536LL;
  if ( *a3 != Length[0] )
    return 3221226536LL;
  v8 = Length[0];
  if ( RtlCompareMemory(a2, *(const void **)&Length[1], Length[0]) != v8 )
    return 3221226536LL;
  *((_QWORD *)&v12 + 1) = &v10;
  LODWORD(v12) = 1;
  v14 = *(_QWORD *)(a4 + 8) + 1LL;
  v13 = *(_DWORD *)a4 - 1;
  return MinCryptHashMemory(a1);
}
