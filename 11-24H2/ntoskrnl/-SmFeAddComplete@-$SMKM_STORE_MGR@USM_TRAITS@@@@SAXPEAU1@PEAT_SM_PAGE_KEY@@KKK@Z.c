/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14037B600
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14037A3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037B210 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14037B420 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14037BE80 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14037BEA0 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     SmArrayGrow @ 0x140380C70 (SmArrayGrow.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  char *v29; // rcx
  __m128i *v30; // rcx
  char *v31; // rax
  __m128i v32; // [rsp+20h] [rbp-C1h] BYREF
  int v33; // [rsp+30h] [rbp-B1h]
  int v34; // [rsp+34h] [rbp-ADh]
  char *v35; // [rsp+40h] [rbp-A1h] BYREF
  _QWORD v36[2]; // [rsp+48h] [rbp-99h] BYREF
  int v37; // [rsp+58h] [rbp-89h]
  unsigned int v38; // [rsp+5Ch] [rbp-85h] BYREF
  __int64 v39; // [rsp+60h] [rbp-81h]
  _BYTE v40[136]; // [rsp+68h] [rbp-79h] BYREF

  v5 = *a2;
  v34 = a3;
  memset_0(v40, 0, 0x80uLL);
  v35 = v40;
  v8 = 0;
  v36[0] = 0LL;
  result = a5 & 1;
  v36[1] = 0LL;
  v39 = 0LL;
  v37 = 0;
  v10 = 1;
  v38 = 8;
  v33 = a5 & 1;
  v32 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = (unsigned __int64)KeAbPreAcquire(a1 + 440, 0LL);
    v12 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 440), 0LL) )
      result = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 440), result, a1 + 440);
    if ( v12 )
      *(_BYTE *)(v12 + 10) = 1;
  }
  v13 = v33;
  v14 = v32.m128i_i64[0];
  v15 = _mm_srli_si128(v32, 8).m128i_u64[0];
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_30;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v7,
      &v35);
    if ( v37 == -1 )
    {
      v19 = 0;
      v20 = (char *)v36;
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
          v37 = ((v20 - v35) >> 4) + 1;
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
      || (v17 = *(unsigned __int8 *)(v18 + 2), v38 >= (unsigned int)v17)
      || (unsigned int)SmArrayGrow(v17, v16, &v38, &v35) )
    {
      v20 = v35;
      goto LABEL_12;
    }
LABEL_29:
    result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
               v17,
               &v32,
               &v35);
    v15 = v32.m128i_u64[1];
    v10 = 0;
    v14 = v32.m128i_i64[0];
LABEL_30:
    if ( v14 )
    {
      v15 += 8LL;
      v24 = v15;
      v25 = (unsigned __int16)*(_DWORD *)v14 + 2LL;
      v32.m128i_i64[1] = v15;
      result = v14 + 8 * v25;
      if ( v15 >= result )
      {
        result = *(_QWORD *)(v14 + 8);
        v7 = result + 16;
        if ( result )
        {
          v14 = *(_QWORD *)(v14 + 8);
          v32.m128i_i64[0] = result;
          v15 = result + 16;
          v32.m128i_i64[1] = result + 16;
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
    if ( v37 == -1 || !v37 )
      v29 = (char *)v36;
    else
      v29 = &v35[16 * (v37 - 1)];
    if ( *(_QWORD *)v29 == v14 )
    {
      *((_QWORD *)v29 + 1) = v15;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        v29,
        &v35);
      if ( v37 == -1 )
      {
        *v30 = v32;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (__int64 *)(a1 + 448),
          *(unsigned int *)(v14 + 16),
          (__int64)&v35);
        if ( v37 == -1 || !v37 )
          v31 = (char *)v36;
        else
          v31 = &v35[16 * (v37 - 1)];
        *((_QWORD *)v31 + 1) = v15;
      }
    }
    result = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
               (unsigned int **)(a1 + 448),
               (__int64)&v35);
    v10 = 1;
LABEL_36:
    if ( ++v8 == v34 )
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
        return KiCheckForKernelApcDelivery(v27, v26);
    }
  }
  return result;
}
