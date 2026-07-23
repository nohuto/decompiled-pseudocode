/*
 * XREFs of ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x140609768
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7AB0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StDmFinishPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@J@Z @ 0x1402F8440 (-StDmFinishPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@P.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     SmStoreCompletePendingDecompress @ 0x1404C6F24 (SmStoreCompletePendingDecompress.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmCompletePendingReads(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int64 v7; // rdi
  struct VLOCK *v9; // rcx
  __int64 v10; // r12
  _DWORD *v12; // r14
  __int64 v13; // rsi
  int v14; // r12d
  unsigned __int64 v15; // rbx
  int v16; // r9d
  int v17; // eax
  __int64 *v18; // rax
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rbx
  unsigned __int64 i; // rbx
  int v23; // eax
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h]

  v26 = a4;
  v7 = a3 + 24;
  v9 = (struct VLOCK *)(*(_QWORD *)(a1 + 800) + 6840LL);
  v10 = a4;
  if ( a3 == -448 )
    StLockAcquireShared(v9);
  else
    StLockReleaseShared(v9);
  v12 = a6;
  v13 = 0LL;
  v25 = 0LL;
  *a6 = 0;
  if ( v7 <= a2 )
  {
    v14 = a5;
    v15 = v7 + 8;
    do
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x200000) != 0 )
        v16 = -1;
      else
        v16 = *(_DWORD *)(v15 + 8);
      v17 = SmStoreCompletePendingDecompress(*(_QWORD *)(a1 + 800), *(_QWORD *)v15, v13, v16);
      if ( v17 == 258 )
        break;
      *(_QWORD *)v15 = 0LL;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741248 )
          *(_QWORD *)v15 = 2LL;
        else
          *(_DWORD *)(v15 + 12) = *(_DWORD *)(v15 + 12) & 0xFFFFFFF3 | 4;
        v13 = 0LL;
        v14 = 1;
      }
      ++*v12;
      v18 = &v25;
      if ( v14 )
        v18 = (__int64 *)v13;
      v15 += 24LL;
      v13 = (__int64)v18;
    }
    while ( v15 - 8 <= a2 );
    v10 = v26;
  }
  v19 = StLockAcquireShared((struct VLOCK *)(*(_QWORD *)(a1 + 800) + 6840LL));
  v20 = 0;
  v21 = (unsigned int)*v12 - 1LL;
  *(_DWORD *)(a3 + 448) = v19;
  for ( i = v7 + 24 * v21; i >= v7; i -= 24LL )
  {
    *(_DWORD *)(*(_QWORD *)(a3 + 416) + 16LL) = *(_DWORD *)(v10 + 24);
    *(_DWORD *)(*(_QWORD *)(a3 + 416) + 16LL) += *(unsigned __int16 *)(i + 6);
    v23 = ST_STORE<SM_TRAITS>::StDmFinishPageRetrieve(a1, i, a3, v10, 0);
    if ( v23 < 0 )
    {
      v20 = v23;
      **(_BYTE **)(a3 + 416) = *(_BYTE *)(i + 6);
    }
  }
  return v20;
}
