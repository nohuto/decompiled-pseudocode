/*
 * XREFs of I_MinCryptGetSigningTime @ 0x1408269F0
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826B54 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x140826D68 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinAsn1ParseSingleAttribute @ 0x1408274E0 (I_MinAsn1ParseSingleAttribute.c)
 *     I_MinCryptBuildErrorPolicy @ 0x140827CB4 (I_MinCryptBuildErrorPolicy.c)
 */

__int64 __fastcall I_MinCryptGetSigningTime(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v10; // ebx
  __int64 v11; // r14
  int v12; // edx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v17; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v18[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 *v19; // [rsp+60h] [rbp-38h]
  __int128 v20; // [rsp+68h] [rbp-30h] BYREF

  v10 = -1073741275;
  v20 = 0LL;
  v18[1] = 0;
  v17 = 0;
  v18[0] = 9;
  v19 = qword_140B3D628;
  v11 = a1 + 288;
  if ( (unsigned __int8)I_MinAsn1ParseSingleAttribute(v18, a1 + 288, a3, &v20) )
  {
    v14 = I_MinCryptVerifyAuthenticodeTimeStamp((unsigned int)&v20, v12, a1, a2, a3, a4, (__int64)&v17, a5, a6);
LABEL_5:
    v10 = v14;
    goto LABEL_7;
  }
  v18[0] = 10;
  v19 = qword_140B3D750;
  if ( (unsigned __int8)I_MinAsn1ParseSingleAttribute(v18, v11, v13, &v20) )
  {
    v14 = I_MinCryptVerifyRFC3161TimeStamp(&v20, v15, a1, a4, &v17, a5, a6);
    goto LABEL_5;
  }
  v17 = 0x4000000;
LABEL_7:
  if ( v10 < 0 )
    return (unsigned int)I_MinCryptBuildErrorPolicy((unsigned int)v10, a4, v17);
  return (unsigned int)v10;
}
