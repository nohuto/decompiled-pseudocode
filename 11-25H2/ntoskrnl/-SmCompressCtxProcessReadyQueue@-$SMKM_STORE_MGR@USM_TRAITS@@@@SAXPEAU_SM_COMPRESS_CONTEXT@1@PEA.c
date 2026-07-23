/*
 * XREFs of ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x1403D4210
 * Callers:
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403A0C80 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x1403A142C (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     SmKmStoreGet @ 0x140324324 (SmKmStoreGet.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14034AF20 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1403D44FC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

KIRQL __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(__int64 a1, __int64 a2, KIRQL a3)
{
  unsigned int v4; // ebx
  KIRQL result; // al
  __int128 *v7; // rdi
  __int128 v8; // xmm0
  __int128 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  _WORD *v13; // r14
  _QWORD *v14; // rbx
  __int16 v15; // dx
  __int64 v16; // rax
  __int64 v17; // rcx
  _SLIST_ENTRY *v18; // r10
  __int128 v19; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v20[4]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[32]; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&v19 = 0LL;
  v4 = 0;
  result = a3;
  *((_QWORD *)&v19 + 1) = &v19;
  v7 = (__int128 *)(a1 + 120);
LABEL_2:
  if ( *(_QWORD *)(a1 + 128) != a1 + 120 )
  {
    v8 = *v7;
    *(_QWORD *)(a1 + 128) = a1 + 120;
    v19 = v8;
    *(_QWORD *)v7 = 0LL;
  }
  if ( *((__int128 **)&v19 + 1) != &v19 || v4 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 136), result);
LABEL_6:
    v9 = (__int128 *)*((_QWORD *)&v19 + 1);
    while ( 1 )
    {
      if ( v9 == &v19 )
      {
        v10 = 0LL;
        if ( !v4 || *(_QWORD *)(a1 + 128) != a1 + 120 )
        {
          result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 136));
          goto LABEL_2;
        }
      }
      else
      {
        v10 = v19;
        *(_QWORD *)&v19 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF8uLL;
        if ( (__int128 *)v10 == v9 )
        {
          *(_QWORD *)&v19 = 0LL;
          v9 = &v19;
          *((_QWORD *)&v19 + 1) = &v19;
        }
        else
        {
          *(_QWORD *)v9 = *(_QWORD *)v9 & 7LL | (8LL * (*(_QWORD *)v9 >> 3) - 8);
          v9 = (__int128 *)*((_QWORD *)&v19 + 1);
        }
        v11 = 2LL * v4;
        LODWORD(v21[v11 + 1]) = *(_DWORD *)(v10 + 24);
        v12 = *(_QWORD *)(v10 + 104);
        v21[v11] = v10;
        WORD2(v21[v11 + 1]) = 1;
        HIWORD(v21[v11 + 1]) = *(_WORD *)(v12 + 6832) & 0x3FF;
        ++v4;
      }
      if ( v4 == 16 || !v10 )
      {
        v20[0] = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a2, v21, v4);
        if ( (v20[0] & 0x80000000) != 0 )
        {
          v13 = v21;
          v14 = &v21[2 * v4];
          if ( v21 < v14 )
          {
            do
            {
              v15 = v13[7];
              *(_DWORD *)(*(_QWORD *)v13 + 12LL) |= 0x40u;
              v16 = SmKmStoreGet(a2, v15);
              SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(v17, v16, v18, v20);
              v13 += 8;
            }
            while ( v13 < (_WORD *)v14 );
          }
        }
        v4 = 0;
        goto LABEL_6;
      }
    }
  }
  --*(_DWORD *)(a1 + 140);
  return result;
}
