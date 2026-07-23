/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402E8680
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1402E7434 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8290 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402E84A0 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8F00 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E8F20 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     SmArrayGrow @ 0x14037A5B0 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(
        __int64 a1,
        unsigned int *a2,
        int a3,
        __int64 a4,
        char a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v7; // rcx
  int v8; // r12d
  unsigned __int64 result; // rax
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rsi
  int v13; // r13d
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  char *v20; // r11
  __int64 v21; // r10
  unsigned int v22; // r8d
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char *v27; // rcx
  __m128i *v28; // rcx
  char *v29; // rax
  __m128i v30; // [rsp+20h] [rbp-C1h] BYREF
  int v31; // [rsp+30h] [rbp-B1h]
  int v32; // [rsp+34h] [rbp-ADh]
  char *v33; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v34[2]; // [rsp+48h] [rbp-99h] BYREF
  int v35; // [rsp+58h] [rbp-89h]
  unsigned int v36; // [rsp+5Ch] [rbp-85h] BYREF
  __int64 v37; // [rsp+60h] [rbp-81h]
  _BYTE v38[136]; // [rsp+68h] [rbp-79h] BYREF

  v5 = *a2;
  v32 = a3;
  memset_0(v38, 0, 0x80uLL);
  v33 = v38;
  v8 = 0;
  v34[0] = 0LL;
  result = a5 & 1;
  v34[1] = 0LL;
  v37 = 0LL;
  v35 = 0;
  v10 = 1;
  v36 = 8;
  v31 = a5 & 1;
  v30 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = KeAbPreAcquire(a1 + 440, 0LL, 0LL);
    v12 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 440), 0LL) )
      result = ExfAcquirePushLockExclusiveEx(a1 + 440, result, a1 + 440);
    if ( v12 )
      *(_BYTE *)(v12 + 10) = 1;
  }
  v13 = v31;
  v14 = v30.m128i_i64[0];
  v15 = _mm_srli_si128(v30, 8).m128i_u64[0];
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_30;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v7,
      &v33);
    if ( v35 == -1 )
    {
      v19 = 0;
      v20 = (char *)v34;
LABEL_12:
      v21 = *(_QWORD *)(a1 + 448);
      if ( v21 )
      {
        while ( 1 )
        {
          v22 = -1;
          v23 = (unsigned __int16)*(_DWORD *)v21;
          v17 = HIBYTE(*(_DWORD *)v21);
          if ( HIBYTE(*(_DWORD *)v21) )
            break;
          if ( (unsigned __int16)*(_DWORD *)v21 )
          {
            do
            {
              if ( *(_DWORD *)(v21 + 16LL * ((v22 + (unsigned int)v23) >> 1) + 16) > v5 )
                LODWORD(v23) = (v22 + (unsigned int)v23) >> 1;
              else
                v22 = (v22 + (unsigned int)v23) >> 1;
            }
            while ( v22 + 1 != (_DWORD)v23 );
          }
          if ( v19 )
          {
            *(_QWORD *)v20 = v21;
            *((_QWORD *)v20 + 1) = v21 + 16 * ((unsigned int)v23 + 1LL);
            v20 += 16;
          }
          if ( (_DWORD)v23 )
            v21 = *(_QWORD *)(v21 + 16LL * (unsigned int)(v23 - 1) + 24);
          else
            v21 = *(_QWORD *)(v21 + 8);
        }
        if ( (unsigned __int16)*(_DWORD *)v21 )
        {
          do
          {
            if ( *(_DWORD *)(v21 + 8LL * ((v22 + (unsigned int)v23) >> 1) + 16) < v5 )
              v22 = (v22 + (unsigned int)v23) >> 1;
            else
              v23 = (v22 + (unsigned int)v23) >> 1;
            v17 = v22 + 1;
          }
          while ( (_DWORD)v17 != (_DWORD)v23 );
        }
        *(_QWORD *)v20 = v21;
        *((_QWORD *)v20 + 1) = v21 + 8 * (v23 + 2);
        if ( v19 )
          v35 = ((v20 - v33) >> 4) + 1;
      }
      else if ( !v19 )
      {
        *(_QWORD *)v20 = 0LL;
        *((_QWORD *)v20 + 1) = 0LL;
      }
      goto LABEL_29;
    }
    v18 = *(_QWORD *)(a1 + 448);
    v19 = 1;
    if ( !v18
      || (v17 = *(unsigned __int8 *)(v18 + 2), v36 >= (unsigned int)v17)
      || (unsigned int)SmArrayGrow(v17, v16, &v36, &v33) )
    {
      v20 = v33;
      goto LABEL_12;
    }
LABEL_29:
    result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
               v17,
               &v30,
               &v33);
    v15 = v30.m128i_u64[1];
    v10 = 0;
    v14 = v30.m128i_i64[0];
LABEL_30:
    if ( v14 )
    {
      v15 += 8LL;
      v24 = v15;
      v25 = (unsigned __int16)*(_DWORD *)v14 + 2LL;
      v30.m128i_i64[1] = v15;
      result = v14 + 8 * v25;
      if ( v15 >= result )
      {
        result = *(_QWORD *)(v14 + 8);
        v7 = result + 16;
        if ( result )
        {
          v14 = *(_QWORD *)(v14 + 8);
          v30.m128i_i64[0] = result;
          v15 = result + 16;
          v30.m128i_i64[1] = result + 16;
        }
        v24 = 0LL;
        if ( result )
          v24 = result + 16;
      }
    }
    else
    {
      v24 = 0LL;
    }
    if ( (*(_BYTE *)(v24 + 7) & 1) != 0 )
    {
      if ( v13 )
        goto LABEL_36;
    }
    else
    {
      if ( *(_BYTE *)(v24 + 6) != 1 )
        goto LABEL_36;
      if ( v13 )
      {
        *(_BYTE *)(v24 + 6) = 3;
        goto LABEL_36;
      }
    }
    *(_BYTE *)(v24 + 6) = 0;
    if ( v35 == -1 || !v35 )
      v27 = (char *)v34;
    else
      v27 = &v33[16 * (v35 - 1)];
    if ( *(_QWORD *)v27 == v14 )
    {
      *((_QWORD *)v27 + 1) = v15;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        v27,
        &v33);
      if ( v35 == -1 )
      {
        *v28 = v30;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (__int64 *)(a1 + 448),
          *(unsigned int *)(v14 + 16),
          (__int64)&v33);
        if ( v35 == -1 || !v35 )
          v29 = (char *)v34;
        else
          v29 = &v33[16 * (v35 - 1)];
        *((_QWORD *)v29 + 1) = v15;
      }
    }
    result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
               (unsigned int **)(a1 + 448),
               (__int64)&v33);
    v10 = 1;
LABEL_36:
    if ( ++v8 == v32 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
    KeAbPostRelease(a1 + 440);
    result = (unsigned __int64)KeGetCurrentThread();
    if ( (*(_WORD *)(result + 486))++ == 0xFFFF )
    {
      result += 152LL;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
