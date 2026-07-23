/*
 * XREFs of MinAsn1ParseSignedDataCertificatesEx @ 0x140827A40
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 *     MinAsn1ExtractParsedCertificatesFromSignedData @ 0x140828B68 (MinAsn1ExtractParsedCertificatesFromSignedData.c)
 * Callees:
 *     MinAsn1ParseCertificate @ 0x140827810 (MinAsn1ParseCertificate.c)
 *     MinAsn1ExtractContent @ 0x140828A80 (MinAsn1ExtractContent.c)
 */

__int64 MinAsn1ParseSignedDataCertificatesEx(unsigned int *a1, unsigned int *a2, __int64 a3, ...)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v6; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r12d
  _BYTE *v10; // rdi
  unsigned int v11; // r14d
  int v12; // ecx
  __int64 result; // rax
  _BYTE *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  v14 = 0LL;
  v6 = *a1;
  LODWORD(v15) = 0;
  v8 = 0;
  v9 = *a2;
  if ( !(_DWORD)v6 )
    goto LABEL_16;
  if ( (int)MinAsn1ExtractContent(v3, v6, (__int64 *)va, &v14) <= 0 )
  {
    v4 = -1;
    goto LABEL_16;
  }
  v10 = v14;
  v11 = v15;
  while ( 1 )
  {
    if ( !v11 || v8 >= v9 )
    {
      v4 = (_DWORD)v10 - v3;
      goto LABEL_16;
    }
    if ( *v10 == 48 )
      break;
    LODWORD(v15) = 0;
    v12 = MinAsn1ExtractContent(v10, v11, (__int64 *)va, &v14);
    if ( v12 <= 0 )
      goto LABEL_12;
    v12 += v15;
    --v8;
LABEL_11:
    v11 -= v12;
    v10 += v12;
    ++v8;
  }
  v12 = MinAsn1ParseCertificate((int)v10, v11, a3 + 240LL * v8);
  if ( v12 > 0 )
    goto LABEL_11;
LABEL_12:
  if ( !v12 )
    v12 = -1;
  v4 = v12 + v3 - (_DWORD)v10;
LABEL_16:
  result = v4;
  *a2 = v8;
  return result;
}
