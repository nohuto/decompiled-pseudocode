/*
 * XREFs of ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014FD10
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x14014F1B4 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     ndisBlowStringListIntoAtoms @ 0x1401507C8 (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x140150CD8 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ndisLoadNamedFilterAltitudes @ 0x14015115C (ndisLoadNamedFilterAltitudes.c)
 *     ndisReplaceBindTokens @ 0x140151778 (ndisReplaceBindTokens.c)
 *     ndisBindBuilderLoadSettings @ 0x140198EB4 (ndisBindBuilderLoadSettings.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x14014FC80 (-AllocateBuckets@-$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z.c)
 *     ?AtomCompare@?$KStringAtomTableBase@$00@Rtl@@CAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x14014FCB8 (-AtomCompare@-$KStringAtomTableBase@$00@Rtl@@CAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 *     ?FreeBuckets@?$KHashTableBase@$00@Rtl@@CAXPEAX0@Z @ 0x14014FCE4 (-FreeBuckets@-$KHashTableBase@$00@Rtl@@CAXPEAX0@Z.c)
 *     ?Hash@?$KStringAtomTableBase@$00@Rtl@@CA_KPEB_W_K@Z @ 0x140150080 (-Hash@-$KStringAtomTableBase@$00@Rtl@@CA_KPEB_W_K@Z.c)
 */

char *__fastcall Rtl::KStringAtomTableBase<1>::GetAtom(__int64 a1, _WORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r9
  int v8; // r8d
  size_t v9; // rdi
  char *result; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  char *Buckets; // r8
  char v16; // cl
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edi
  __int64 v20; // rbp
  __int64 v21; // r11
  _QWORD *v22; // r9
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 v25; // [rsp+50h] [rbp+8h]
  __int64 v26; // [rsp+50h] [rbp+8h]

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  v5 = Rtl::KStringAtomTableBase<1>::Hash(a2, v3);
  v6 = 0LL;
LABEL_4:
  v7 = v5 & (-1LL << (*(_BYTE *)(a1 + 4) & 0x1F));
  if ( v6 )
    goto LABEL_7;
  v8 = *(_DWORD *)(a1 + 4) >> 5;
  if ( v8 )
  {
    v6 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v7)
          + 37
          * (BYTE5(v7)
           + 37
           * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
         + HIBYTE(v7)) & (unsigned int)(v8 - 1));
LABEL_7:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v7 == ((-1LL << (*(_BYTE *)(a1 + 4) & 0x1F)) & *(_QWORD *)(v6 + 8)) )
      {
        if ( !v6 )
          break;
        if ( !Rtl::KStringAtomTableBase<1>::AtomCompare(v6, (__int64)a2) )
          goto LABEL_4;
        return (char *)v6;
      }
    }
  }
  v9 = 2 * v3 + 2;
  result = (char *)ExAllocatePoolWithTag(PagedPool, v9 + 16, 0x6D74414Bu);
  v6 = (__int64)result;
  if ( result )
  {
    memmove(result + 16, a2, v9);
    *(_QWORD *)(v6 + 8) = v5;
    v11 = *(_DWORD *)(a1 + 4);
    v25 = v5 & (-1LL << (v11 & 0x1F));
    v12 = *(_QWORD *)(a1 + 8);
    v13 = (37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
         + HIBYTE(v25)) & ((v11 >> 5) - 1);
    *(_QWORD *)v6 = *(_QWORD *)(v12 + 8 * v13);
    *(_QWORD *)(v12 + 8 * v13) = v6;
    ++*(_DWORD *)a1;
    v14 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
    if ( *(_DWORD *)a1 >= (unsigned int)v14 )
    {
      if ( (unsigned int)v14 < 4 )
        v14 = 4LL;
      Buckets = (char *)Rtl::KHashTableBase<1>::AllocateBuckets(8LL * (unsigned int)v14, a1);
      if ( Buckets )
      {
        if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
        {
          v16 = -1;
          do
          {
            ++v16;
            LODWORD(v14) = (unsigned int)v14 >> 1;
          }
          while ( (_DWORD)v14 );
          v14 = (unsigned int)(1 << v16);
        }
        if ( (unsigned int)v14 > 0x4000000 )
          v14 = 0x4000000LL;
        v17 = (unsigned int)v14;
        if ( Buckets > &Buckets[8 * v14] )
          v17 = 0LL;
        if ( v17 )
          memset64(Buckets, a1 | 1, v17);
        v18 = *(_DWORD *)(a1 + 4);
        v19 = 0;
        v20 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (v18 & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v21 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v22 = *(_QWORD **)(v21 + 8LL * v19);
              if ( ((unsigned __int8)v22 & 1) != 0 )
                break;
              *(_QWORD *)(v21 + 8LL * v19) = *v22;
              v26 = v20 & v22[1];
              v23 = (37
                   * (BYTE6(v26)
                    + 37
                    * (BYTE5(v26)
                     + 37
                     * (BYTE4(v26)
                      + 37
                      * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
                   + HIBYTE(v26)) & (unsigned int)(v14 - 1);
              *v22 = *(_QWORD *)&Buckets[8 * v23];
              *(_QWORD *)&Buckets[8 * v23] = v22;
            }
            v18 = *(_DWORD *)(a1 + 4);
            ++v19;
          }
          while ( v19 < v18 >> 5 );
        }
        v24 = *(void **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = Buckets;
        *(_DWORD *)(a1 + 4) = (32 * v14) | v18 & 0x1F;
        if ( v24 )
          Rtl::KHashTableBase<1>::FreeBuckets(v24, a1);
      }
    }
    return (char *)v6;
  }
  return result;
}
