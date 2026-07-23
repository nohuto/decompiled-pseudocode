/*
 * XREFs of MinAsn1SignedDataGetContent @ 0x140828E60
 * Callers:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     MinAsn1DecodeInteger @ 0x140828730 (MinAsn1DecodeInteger.c)
 *     MinAsn1ExtractContent @ 0x140828A80 (MinAsn1ExtractContent.c)
 */

__int64 __fastcall MinAsn1SignedDataGetContent(__int64 a1, unsigned int *a2)
{
  int v4; // edx
  _OWORD *v5; // rax
  _BYTE *v6; // rcx
  int Content; // ecx
  char v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0;
  if ( (int)MinAsn1DecodeInteger(*(char **)(a1 + 56), *(_DWORD *)(a1 + 48), (__int64 *)&v10, &v9) <= 0 || v9 || v10 < 3 )
  {
    v5 = (_OWORD *)(a1 + 96);
LABEL_10:
    *(_OWORD *)a2 = *v5;
    return *a2;
  }
  v4 = *(_DWORD *)(a1 + 96);
  v5 = (_OWORD *)(a1 + 96);
  if ( !v4 )
    goto LABEL_10;
  v6 = *(_BYTE **)(a1 + 104);
  if ( *v6 != 4 )
    goto LABEL_10;
  Content = MinAsn1ExtractContent(v6, v4, a2, (_QWORD *)a2 + 1);
  v5 = (_OWORD *)(a1 + 96);
  if ( Content <= 0 )
    goto LABEL_10;
  if ( !*a2 )
  {
    *((_QWORD *)a2 + 1) = 0LL;
    return 0;
  }
  return (unsigned int)Content;
}
