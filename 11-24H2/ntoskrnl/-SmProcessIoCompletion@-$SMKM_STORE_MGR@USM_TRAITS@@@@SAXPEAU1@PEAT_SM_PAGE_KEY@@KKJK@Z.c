/*
 * XREFs of ?SmProcessIoCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKJK@Z @ 0x14037BA40
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14037A2F0 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
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
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14060E40C (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

struct _KTHREAD *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmProcessIoCompletion(
        __int64 a1,
        unsigned int *a2,
        int a3,
        __int64 a4,
        int a5,
        int a6)
{
  unsigned int v7; // ebx
  int v9; // r12d
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  char *v21; // r11
  __int64 v22; // r10
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _KTHREAD *result; // rax
  char *v31; // rcx
  __int64 v32; // rax
  _OWORD *v33; // rcx
  char *v34; // rax
  __int128 v35; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-D0h] BYREF
  char *v37; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v40[136]; // [rsp+70h] [rbp-98h] BYREF

  v7 = *a2;
  v36 = *a2;
  if ( !a6 )
    return (struct _KTHREAD *)SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreEvictKeys(a1, &v36);
  memset_0(v40, 0, 0x80uLL);
  v38[0] = 0LL;
  v38[1] = 0LL;
  v39[1] = 0LL;
  v9 = 0;
  v39[0] = 0x800000000LL;
  v10 = 1;
  v37 = v40;
  CurrentThread = KeGetCurrentThread();
  v35 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v12 = KeAbPreAcquire(a1 + 440, 0LL);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 440), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 440), (__int64)v12, a1 + 440);
  if ( v14 )
    *((_BYTE *)v14 + 10) = 1;
  v15 = *((_QWORD *)&v35 + 1);
  v16 = v35;
  while ( 1 )
  {
    if ( !v10 )
      goto LABEL_30;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      v13,
      &v37);
    if ( LODWORD(v39[0]) == -1 )
    {
      v20 = 0;
      v21 = (char *)v38;
LABEL_12:
      v22 = *(_QWORD *)(a1 + 448);
      if ( v22 )
      {
        while ( 1 )
        {
          v23 = -1;
          v24 = (unsigned __int16)*(_DWORD *)v22;
          v18 = HIBYTE(*(_DWORD *)v22);
          if ( HIBYTE(*(_DWORD *)v22) )
            break;
          if ( (unsigned __int16)*(_DWORD *)v22 )
          {
            do
            {
              if ( *(_DWORD *)(v22 + 16LL * ((v23 + (unsigned int)v24) >> 1) + 16) > v7 )
                LODWORD(v24) = (v23 + (unsigned int)v24) >> 1;
              else
                v23 = (v23 + (unsigned int)v24) >> 1;
            }
            while ( v23 + 1 != (_DWORD)v24 );
          }
          if ( v20 )
          {
            *(_QWORD *)v21 = v22;
            *((_QWORD *)v21 + 1) = v22 + 16 * ((unsigned int)v24 + 1LL);
            v21 += 16;
          }
          if ( (_DWORD)v24 )
            v22 = *(_QWORD *)(v22 + 16LL * (unsigned int)(v24 - 1) + 24);
          else
            v22 = *(_QWORD *)(v22 + 8);
        }
        if ( (unsigned __int16)*(_DWORD *)v22 )
        {
          do
          {
            if ( *(_DWORD *)(v22 + 8LL * ((v23 + (unsigned int)v24) >> 1) + 16) < v7 )
              v23 = (v23 + (unsigned int)v24) >> 1;
            else
              v24 = (v23 + (unsigned int)v24) >> 1;
            v18 = v23 + 1;
          }
          while ( (_DWORD)v18 != (_DWORD)v24 );
        }
        *(_QWORD *)v21 = v22;
        *((_QWORD *)v21 + 1) = v22 + 8 * (v24 + 2);
        if ( v20 )
          LODWORD(v39[0]) = ((v21 - v37) >> 4) + 1;
      }
      else if ( !v20 )
      {
        *(_QWORD *)v21 = 0LL;
        *((_QWORD *)v21 + 1) = 0LL;
      }
      goto LABEL_29;
    }
    v19 = *(_QWORD *)(a1 + 448);
    v20 = 1;
    if ( !v19
      || (v18 = *(unsigned __int8 *)(v19 + 2), HIDWORD(v39[0]) >= (unsigned int)v18)
      || (unsigned int)SmArrayGrow(v18, v17, (char *)v39 + 4, &v37) )
    {
      v21 = v37;
      goto LABEL_12;
    }
LABEL_29:
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v18,
      &v35,
      &v37);
    v15 = *((_QWORD *)&v35 + 1);
    v10 = 0;
    v16 = v35;
LABEL_30:
    if ( v16 )
    {
      v15 += 8LL;
      v25 = v15;
      v26 = (unsigned __int16)*(_DWORD *)v16 + 2LL;
      *((_QWORD *)&v35 + 1) = v15;
      if ( v15 >= v16 + 8 * v26 )
      {
        v32 = *(_QWORD *)(v16 + 8);
        v13 = v32 + 16;
        if ( v32 )
        {
          v16 = *(_QWORD *)(v16 + 8);
          *(_QWORD *)&v35 = v32;
          v15 = v32 + 16;
          *((_QWORD *)&v35 + 1) = v32 + 16;
        }
        v25 = 0LL;
        if ( v32 )
          v25 = v32 + 16;
      }
    }
    else
    {
      v25 = 0LL;
    }
    if ( (*(_BYTE *)(v25 + 7) & 1) != 0 )
    {
      if ( a5 >= 0 )
        goto LABEL_36;
    }
    else
    {
      if ( *(_BYTE *)(v25 + 6) != 1 )
        goto LABEL_36;
      if ( a5 >= 0 )
      {
        *(_BYTE *)(v25 + 6) = 3;
        goto LABEL_36;
      }
    }
    *(_BYTE *)(v25 + 6) = 0;
    if ( LODWORD(v39[0]) == -1 || !LODWORD(v39[0]) )
      v31 = (char *)v38;
    else
      v31 = &v37[16 * (LODWORD(v39[0]) - 1)];
    if ( *(_QWORD *)v31 == v16 )
    {
      *((_QWORD *)v31 + 1) = v15;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        v31,
        &v37);
      if ( LODWORD(v39[0]) == -1 )
      {
        *v33 = v35;
      }
      else
      {
        B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (__int64 *)(a1 + 448),
          *(unsigned int *)(v16 + 16),
          (__int64)&v37);
        if ( LODWORD(v39[0]) == -1 || !LODWORD(v39[0]) )
          v34 = (char *)v38;
        else
          v34 = &v37[16 * (LODWORD(v39[0]) - 1)];
        *((_QWORD *)v34 + 1) = v15;
      }
    }
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
      (unsigned int **)(a1 + 448),
      (__int64)&v37);
    v10 = 1;
LABEL_36:
    if ( ++v9 == a3 )
      break;
    ++v7;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 440), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  KeAbPostRelease(a1 + 440);
  result = KeGetCurrentThread();
  if ( result->SpecialApcDisable++ == -1 )
  {
    result = (struct _KTHREAD *)((char *)result + 152);
    if ( *(struct _KTHREAD **)&result->Header.Lock != result )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery(v28, v27);
  }
  return result;
}
