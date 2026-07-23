/*
 * XREFs of I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408268A8
 * Callers:
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826B54 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 */

__int64 __fastcall I_MinCryptFindSignerCertificateByIssuerAndSerialNumber(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  SIZE_T v4; // r12
  int v5; // esi
  const void *v6; // rax
  const void *v8; // r13
  SIZE_T v9; // rbp
  __int64 i; // rdi
  const void *v12; // [rsp+50h] [rbp+8h]

  v4 = *a1;
  v5 = 0;
  v6 = (const void *)*((_QWORD *)a2 + 1);
  v8 = (const void *)*((_QWORD *)a1 + 1);
  v12 = v6;
  if ( !(_DWORD)v4 )
    return 0LL;
  v9 = *a2;
  if ( !(_DWORD)v9 || !a3 )
    return 0LL;
  for ( i = a4 + 96; ; i += 240LL )
  {
    if ( (_DWORD)v4 != *(_DWORD *)(i + 16) || (_DWORD)v9 != *(_DWORD *)i )
      goto LABEL_10;
    if ( RtlCompareMemory(v6, *(const void **)(i + 8), v9) == v9
      && RtlCompareMemory(v8, *(const void **)(i + 24), v4) == v4 )
    {
      break;
    }
    v6 = v12;
LABEL_10:
    if ( ++v5 >= a3 )
      return 0LL;
  }
  return i - 96;
}
