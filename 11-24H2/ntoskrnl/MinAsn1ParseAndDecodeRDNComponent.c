/*
 * XREFs of MinAsn1ParseAndDecodeRDNComponent @ 0x1408276AC
 * Callers:
 *     I_MinCryptGetCommonName @ 0x140825654 (I_MinCryptGetCommonName.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MinAsn1ExtractContent @ 0x140828A80 (MinAsn1ExtractContent.c)
 *     MinAsn1ExtractValues @ 0x140828BE4 (MinAsn1ExtractValues.c)
 */

char __fastcall MinAsn1ParseAndDecodeRDNComponent(unsigned int *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // ecx
  _BYTE *v11; // rbx
  int v13; // [rsp+30h] [rbp-39h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  int v15; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+70h] [rbp+7h]
  unsigned __int16 *v19; // [rsp+78h] [rbp+Fh]
  unsigned int v20; // [rsp+80h] [rbp+17h]
  _BYTE *v21; // [rsp+88h] [rbp+1Fh]

  v4 = *a1;
  v6 = *((_QWORD *)a1 + 1);
  v14 = 0LL;
  v13 = 0;
  v15 = 4;
  if ( (int)MinAsn1ExtractContent(v6, v4, &v13, &v14) > 0 )
  {
    v8 = v14;
    v9 = v13;
    while ( v9
         && (int)MinAsn1ExtractValues(v8, v9, (unsigned int)&v15, (unsigned int)&qword_14000D320, 4, (__int64)v16) > 0 )
    {
      if ( v18 == 3 )
      {
        v10 = *v19 - 1109;
        if ( *v19 == 1109 )
          v10 = *((unsigned __int8 *)v19 + 2) - BYTE2(dword_140B3CEB4);
        if ( !v10 )
        {
          v11 = v21;
          if ( (int)MinAsn1ExtractContent(v21, v20, &v13, &v14) <= 0 )
            return 0;
          *a3 = *v11;
          *(_QWORD *)(a4 + 8) = v14;
          *(_DWORD *)a4 = v13;
          return 1;
        }
      }
      v8 += v17;
      v9 -= v17;
      v13 = v9;
      v14 = v8;
    }
  }
  return 0;
}
