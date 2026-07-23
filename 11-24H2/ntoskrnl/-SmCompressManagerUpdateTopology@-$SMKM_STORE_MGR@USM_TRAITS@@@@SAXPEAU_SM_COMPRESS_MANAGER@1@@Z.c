/*
 * XREFs of ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x1406089B4
 * Callers:
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140608798 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 * Callees:
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140330080 (KeQueryNodeActiveAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     MmGetNextNode @ 0x140421790 (MmGetNextNode.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned int __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateTopology(__int64 a1)
{
  struct _KAFFINITY_EX *v1; // rsi
  unsigned int v3; // r12d
  unsigned int result; // eax
  unsigned int v5; // ebp
  __int64 v6; // r15
  struct _KAFFINITY_EX *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rsi
  unsigned int NextNode; // eax
  __int64 v13; // rbp
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = (struct _KAFFINITY_EX *)(a1 + 48);
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 2004LL);
  *(_DWORD *)(a1 + 312) = 0;
  result = (unsigned int)memset_0((void *)(a1 + 56), 0, 8LL * *(unsigned __int16 *)(a1 + 48));
  v5 = 0;
  v1->Count = 1;
  if ( v3 )
  {
    v6 = 0LL;
    do
    {
      v7 = (struct _KAFFINITY_EX *)(v6 + *(_QWORD *)(a1 + 24));
      KeQueryNodeActiveAffinityEx(v5, &v7->Count, &v7[1].Count);
      *(_DWORD *)(a1 + 312) += *(_DWORD *)&v7[1].Count;
      result = KeOrAffinityEx2(v1, v7, v1);
      ++v5;
      v6 += 272LL;
    }
    while ( v5 < v3 );
    v8 = 0;
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(a1 + 24);
      v11 = v9 + v10;
      if ( !*(_DWORD *)(v9 + v10 + 264) )
      {
        v14 = 0;
        do
        {
          NextNode = MmGetNextNode(v8, &v14);
          v13 = v10 + 272LL * NextNode;
        }
        while ( !*(_DWORD *)(v13 + 264) );
        KiCopyAffinityEx(
          (struct _KAFFINITY_EX *)(v9 + v10),
          *(_WORD *)(v11 + 2),
          (struct _KAFFINITY_EX *)(v10 + 272LL * NextNode));
        result = *(_DWORD *)(v13 + 264);
        *(_DWORD *)(v11 + 264) = result;
      }
      ++v8;
      v9 += 272LL;
    }
    while ( v8 < v3 );
  }
  return result;
}
