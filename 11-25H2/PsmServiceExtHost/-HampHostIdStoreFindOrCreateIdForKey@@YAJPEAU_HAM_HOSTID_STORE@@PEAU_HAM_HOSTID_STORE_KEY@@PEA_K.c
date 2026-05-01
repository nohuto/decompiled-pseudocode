/*
 * XREFs of ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180042948
 * Callers:
 *     ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180041B44 (-HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CemRcTableFindOrInsertEx @ 0x180040C80 (CemRcTableFindOrInsertEx.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x180042930 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180043020 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180043040 (-HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z @ 0x1800430B0 (-HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043110 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043168 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043254 (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800432B0 (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreApplicationInitialize@@YAXPEAU_HAM_HOSTID_STORE_USER_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@@Z @ 0x180043320 (-HampHostIdStoreApplicationInitialize@@YAXPEAU_HAM_HOSTID_STORE_USER_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     ?HampHostIdStoreSessionInitialize@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@@Z @ 0x180043570 (-HampHostIdStoreSessionInitialize@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM.c)
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x180043B94 (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     ?HampHostIdStoreUserInitialize@@YAXPEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_USER_ENTRY@@@Z @ 0x18006E9E4 (-HampHostIdStoreUserInitialize@@YAXPEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@PEAU_HAM_HOSTID_STORE_KE.c)
 */

__int64 __fastcall HampHostIdStoreFindOrCreateIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  void *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // r12d
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbx
  int v17; // r14d
  struct _HAM_HOSTID_STORE_KEY *v18; // r12
  int v19; // eax
  unsigned __int64 v20; // rax
  struct _HAM_HOSTID_STORE_KEY *v21; // rbx
  __int64 v22; // rsi
  char IsDynamicKey; // r12
  unsigned __int64 v24; // rbx
  int v25; // r15d
  struct _HAM_HOSTID_STORE_KEY *v26; // rsi
  int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 *v29; // rsi
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rbx
  int v32; // edi
  struct _HAM_HOSTID_STORE_KEY *v33; // r12
  int v34; // eax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned int v37; // ebx
  __int64 v38; // rcx
  struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *v40; // rax
  unsigned __int64 v41; // rbx
  struct _HAM_HOSTID_ENTRY *v42; // rax
  struct _HAM_HOSTID_STORE_KEY *v43; // rbx
  struct _HAM_HOSTID_STORE_KEY *v44; // rbx
  struct _HAM_HOSTID_STORE_SESSION_ENTRY *Heap; // rax
  struct _HAM_HOSTID_STORE_KEY *v46; // rbx
  __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  unsigned __int64 *v49; // rax
  struct _HAM_HOSTID_STORE_USER_ENTRY *v50; // rax
  struct _HAM_HOSTID_STORE_KEY *v51; // rbx
  unsigned __int64 v52; // rbx
  __int64 v53; // [rsp+20h] [rbp-28h]
  unsigned __int64 v54; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-10h] BYREF
  struct _HAM_HOSTID_STORE_KEY *v57; // [rsp+98h] [rbp+50h] BYREF
  unsigned __int64 *v58; // [rsp+A0h] [rbp+58h]
  unsigned __int64 v59; // [rsp+A8h] [rbp+60h] BYREF

  v58 = a3;
  v57 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  HampHostIdStoreAcquireLockShared(a1);
  v8 = (void *)*((unsigned int *)a2 + 133);
  v9 = (__int64)a1 + 56;
  RtlAcquireSRWLockShared(v9 + 16);
  v10 = *(_QWORD *)v9;
  v11 = *(_BYTE *)(v9 + 8) & 1;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
  {
    if ( v10 )
    {
      v10 ^= v9;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    while ( v10 )
    {
      v12 = HampHostIdStoreCompareSessionByKey(v8, (void *)v10);
      if ( v12 < 0 )
      {
        v13 = *(_QWORD *)v10;
      }
      else
      {
        if ( v12 <= 0 )
          break;
        v13 = *(_QWORD *)(v10 + 8);
      }
      if ( v11 && v13 )
        v10 ^= v13;
      else
        v10 = v13;
    }
  }
  v14 = v10;
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v14 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v9 + 16);
  if ( !v14 )
  {
    Heap = (struct _HAM_HOSTID_STORE_SESSION_ENTRY *)HampAllocateHeap(0x60uLL);
    v14 = (unsigned __int64)Heap;
    if ( !Heap )
      goto LABEL_107;
    v46 = v57;
    HampHostIdStoreSessionInitialize(a1, v57, Heap);
    v47 = *((unsigned int *)v46 + 133);
    v59 = 0LL;
    CemRcTableFindOrInsertEx(
      v9,
      v47,
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareSessionByKey,
      v14,
      v53,
      &v59);
    v48 = v59;
    if ( v59 )
    {
      if ( v59 == v14 )
        goto LABEL_14;
    }
    else
    {
      v48 = 0LL;
    }
    CemRcObjectDereference((_QWORD *)v14);
    v14 = v48;
  }
LABEL_14:
  v15 = v14 + 56;
  RtlAcquireSRWLockShared(v14 + 56);
  v16 = *(_QWORD *)(v14 + 40);
  v17 = *(_BYTE *)(v14 + 48) & 1;
  if ( (*(_BYTE *)(v14 + 48) & 1) == 0 )
    goto LABEL_15;
  if ( v16 )
  {
    v16 ^= v14 + 40;
LABEL_15:
    if ( v16 )
    {
      v18 = v57;
      do
      {
        v19 = HampHostIdStoreCompareUserByKey((char *)v18 + 464, (void *)v16);
        if ( v19 < 0 )
        {
          v20 = *(_QWORD *)v16;
        }
        else
        {
          if ( v19 <= 0 )
            break;
          v20 = *(_QWORD *)(v16 + 8);
        }
        if ( v17 && v20 )
          v16 ^= v20;
        else
          v16 = v20;
      }
      while ( v16 );
      v15 = v14 + 56;
    }
  }
  v7 = v16;
  if ( v16 )
  {
    if ( *(_QWORD *)(v16 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v7 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v15);
  if ( v7 )
  {
LABEL_28:
    v21 = v57;
    v22 = v7 + 40;
    IsDynamicKey = PsmIsDynamicKey(v57);
    if ( IsDynamicKey )
      goto LABEL_85;
    RtlAcquireSRWLockShared(v7 + 56);
    v24 = *(_QWORD *)v22;
    v25 = *(_BYTE *)(v7 + 48) & 1;
    if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
    {
      if ( !v24 )
      {
LABEL_39:
        v5 = v24;
        if ( v24 )
        {
          if ( *(_QWORD *)(v24 + 24) )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24)) <= 1 )
              __fastfail(0xEu);
          }
          else
          {
            v5 = 0LL;
          }
        }
        RtlReleaseSRWLockShared(v22 + 16);
        if ( v5 )
          goto LABEL_43;
        v21 = v57;
LABEL_85:
        v40 = (struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *)HampAllocateHeap(0x228uLL);
        v5 = (unsigned __int64)v40;
        if ( !v40 )
        {
          v37 = -1073741801;
          goto LABEL_60;
        }
        HampHostIdStoreApplicationInitialize((struct _HAM_HOSTID_STORE_USER_ENTRY *)v7, v21, v40);
        v55 = 0LL;
        CemRcTableFindOrInsertEx(
          v22,
          (__int64)v21,
          (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareApplicationByKey,
          v5,
          v53,
          &v55);
        v41 = v55;
        if ( !v55 || v55 != v5 )
        {
          CemRcObjectDereference((_QWORD *)v5);
          v5 = v41;
        }
LABEL_43:
        v29 = (unsigned __int64 *)(v5 + 40);
        if ( IsDynamicKey )
        {
LABEL_89:
          v42 = (struct _HAM_HOSTID_ENTRY *)HampAllocateHeap(0x270uLL);
          v6 = (unsigned __int64)v42;
          if ( v42 )
          {
            v43 = v57;
            HampHostIdStoreLeafInitialize((struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *)v5, v57, v42);
            v57 = 0LL;
            CemRcTableFindOrInsertEx(
              v5 + 40,
              (__int64)v43,
              (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareLeafByKey,
              v6,
              v53,
              (unsigned __int64 *)&v57);
            v44 = v57;
            if ( v57 )
            {
              if ( v57 == (struct _HAM_HOSTID_STORE_KEY *)v6 )
              {
                v49 = (unsigned __int64 *)(v6 + 88);
                v6 = 0LL;
                v36 = *v49;
                goto LABEL_59;
              }
            }
            else
            {
              v44 = 0LL;
            }
            CemRcObjectDereference((_QWORD *)v6);
            v36 = *((_QWORD *)v44 + 11);
            v6 = (unsigned __int64)v44;
LABEL_59:
            v37 = 0;
            *v58 = v36;
            goto LABEL_60;
          }
          goto LABEL_107;
        }
        v30 = v5 + 56;
        RtlAcquireSRWLockShared(v5 + 56);
        v31 = *v29;
        v32 = *(_BYTE *)(v5 + 48) & 1;
        if ( (*(_BYTE *)(v5 + 48) & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_54;
          v31 ^= (unsigned __int64)v29;
        }
        if ( v31 )
        {
          v33 = v57;
          do
          {
            v34 = HampHostIdStoreCompareLeafByKey(v33, (void *)v31);
            if ( v34 < 0 )
            {
              v35 = *(_QWORD *)v31;
            }
            else
            {
              if ( v34 <= 0 )
                break;
              v35 = *(_QWORD *)(v31 + 8);
            }
            if ( v32 && v35 )
              v31 ^= v35;
            else
              v31 = v35;
          }
          while ( v31 );
          v30 = v5 + 56;
        }
LABEL_54:
        v6 = v31;
        if ( v31 )
        {
          if ( *(_QWORD *)(v31 + 24) )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v31 + 24)) <= 1 )
              __fastfail(0xEu);
          }
          else
          {
            v6 = 0LL;
          }
        }
        RtlReleaseSRWLockShared(v30);
        if ( v6 )
        {
          v36 = *(_QWORD *)(v6 + 88);
          goto LABEL_59;
        }
        goto LABEL_89;
      }
      v24 ^= v22;
    }
    if ( v24 )
    {
      v26 = v57;
      do
      {
        v27 = HampHostIdStoreCompareApplicationByKey((const wchar_t *)v26, (const wchar_t *)v24);
        if ( v27 < 0 )
        {
          v28 = *(_QWORD *)v24;
        }
        else
        {
          if ( v27 <= 0 )
            break;
          v28 = *(_QWORD *)(v24 + 8);
        }
        if ( v25 && v28 )
          v24 ^= v28;
        else
          v24 = v28;
      }
      while ( v24 );
      v22 = v7 + 40;
    }
    goto LABEL_39;
  }
  v50 = (struct _HAM_HOSTID_STORE_USER_ENTRY *)HampAllocateHeap(0xA0uLL);
  v7 = (unsigned __int64)v50;
  if ( v50 )
  {
    v51 = v57;
    HampHostIdStoreUserInitialize((struct _HAM_HOSTID_STORE_SESSION_ENTRY *)v14, v57, v50);
    v54 = 0LL;
    CemRcTableFindOrInsertEx(
      v14 + 40,
      (__int64)v51 + 464,
      (__int64 (__fastcall *)(__int64, unsigned __int64))HampHostIdStoreCompareUserByKey,
      v7,
      v53,
      &v54);
    v52 = v54;
    if ( v54 )
    {
      if ( v54 == v7 )
        goto LABEL_28;
    }
    else
    {
      v52 = 0LL;
    }
    CemRcObjectDereference((_QWORD *)v7);
    v7 = v52;
    goto LABEL_28;
  }
LABEL_107:
  v37 = -1073741801;
LABEL_60:
  HampHostIdStoreReleaseLockShared(a1);
  if ( v6 )
  {
    HampHostIdStoreAcquireLockExclusive(a1);
    v38 = *(_QWORD *)(v6 + 616);
    if ( v38 )
    {
      TpWaitForTimer(v38, 1LL);
      TpReleaseTimer(*(_QWORD *)(v6 + 616));
      *(_QWORD *)(v6 + 616) = 0LL;
    }
    if ( *(_WORD *)(v6 + 608) )
    {
      *(_WORD *)(v6 + 608) = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    HampHostIdStoreReleaseLockExclusive(a1);
    CemRcObjectDereference((_QWORD *)v6);
  }
  if ( v5 )
    CemRcObjectDereference((_QWORD *)v5);
  if ( v7 )
    CemRcObjectDereference((_QWORD *)v7);
  if ( v14 )
    CemRcObjectDereference((_QWORD *)v14);
  return v37;
}
