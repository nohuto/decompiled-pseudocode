/*
 * XREFs of ?StDmFixSingleBitCorruption@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEADKK@Z @ 0x140609D94
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14060A0A8 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     ?StDmpHashBytes@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADKPEAK@Z @ 0x1404F34C0 (-StDmpHashBytes@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADKPEAK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmFixSingleBitCorruption(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _BYTE *v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v11; // r10
  _BYTE *v12; // rax
  char v13; // cl
  char v14; // r12
  __int64 result; // rax
  int v17; // [rsp+70h] [rbp+18h] BYREF
  int v18; // [rsp+78h] [rbp+20h]

  v18 = a4;
  v17 = 0;
  v4 = (_BYTE *)(a2 - 1);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 8 * a3;
  v8 = 0LL;
  v11 = a1;
  if ( !(8 * a3) )
    return 0LL;
  do
  {
    v12 = v4 + 1;
    v13 = v8 & 7;
    if ( (v8 & 7) != 0 )
      v12 = v4;
    v14 = 1 << v13;
    v4 = v12;
    *v12 ^= 1 << v13;
    if ( (int)ST_STORE<SM_TRAITS>::StDmpHashBytes(v11, a2, a3, &v17) >= 0 && v17 == v18 )
    {
      ++v5;
      v6 = v8;
    }
    *v4 ^= v14;
    ++v8;
    v11 = a1;
  }
  while ( v8 < v7 );
  if ( v5 != 1 )
    return 0LL;
  result = 1LL;
  *(_BYTE *)((v6 >> 3) + a2) ^= 1 << (v6 & 7);
  return result;
}
