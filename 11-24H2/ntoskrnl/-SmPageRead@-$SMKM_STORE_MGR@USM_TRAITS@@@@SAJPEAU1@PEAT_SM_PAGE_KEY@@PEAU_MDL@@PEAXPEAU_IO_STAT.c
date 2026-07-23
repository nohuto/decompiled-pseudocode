/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8
 * Callers:
 *     SmPageRead @ 0x1402F6388 (SmPageRead.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14029F070 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1402A1234 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpAllocate @ 0x1402E96E0 (SmFpAllocate.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1402F6680 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14033E9F0 (SmAcquireReleaseResAvailForRead.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // r14
  unsigned __int64 v6; // r13
  unsigned int v8; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // r12
  int PickStore; // eax
  __int64 v12; // r15
  unsigned int v13; // edi
  char v14; // di
  _OWORD *Pool2; // rsi
  bool v16; // zf
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v5 = a5;
  v22 = 0;
  v6 = a3;
  v19 = 0LL;
  v8 = 0;
  if ( (a3 & 3) != 0 )
  {
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = a3 & 1 | 2;
    if ( (a3 & 2) == 0 )
      v8 = a3 & 1;
  }
  a5[1] = 0LL;
  *v5 = a4;
  v9 = *(_DWORD *)(v6 + 40) >> 12;
  LODWORD(a5) = v9;
  v10 = v5;
  v21 = v9;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                a1,
                (_DWORD)a2,
                (unsigned int)&v21,
                (unsigned int)&v19,
                (__int64)&v22);
  v12 = v19;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = v21;
    v5[1] = v21;
    if ( v8 >= 2 && !*(_BYTE *)(v12 + 6836) )
    {
      v13 = -1073741791;
      goto LABEL_15;
    }
    if ( (*(_DWORD *)(a1 + 2000) & 0x10) == 0 )
    {
LABEL_5:
      if ( (v8 & 1) != 0 )
      {
        Pool2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1248));
        if ( Pool2 )
          goto LABEL_7;
        Pool2 = (_OWORD *)ExAllocatePool2(0x40uLL, 0x58uLL, 0x61576D73u);
        if ( Pool2 )
          goto LABEL_7;
        LOBYTE(v8) = v8 & 0xFE;
      }
      Pool2 = SmFpAllocate((volatile LONG *)(a1 + 1704), 1, (__int64)v5, 0LL, *(_DWORD *)(a1 + 2000) & 1);
      if ( !Pool2 )
      {
        v13 = -1073741670;
LABEL_14:
        v9 = (unsigned int)a5;
        goto LABEL_15;
      }
LABEL_7:
      v16 = (v22 & 1) == 0;
      *Pool2 = 0LL;
      Pool2[1] = 0LL;
      *((_DWORD *)Pool2 + 6) = *a2;
      *(_DWORD *)Pool2 = 2;
      *((_QWORD *)Pool2 + 2) = v6;
      *((_BYTE *)Pool2 + 8) = v14;
      *((_QWORD *)Pool2 + 4) = v5;
      if ( !v16 )
        *((_DWORD *)Pool2 + 2) |= 0x1000000u;
      if ( (v8 & 1) != 0 )
        *((_DWORD *)Pool2 + 2) |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v5, a1, *(_WORD *)(v12 + 6832) & 0x3FF, (__int64)Pool2) >= 0 )
      {
        v10 = 0LL;
        LOBYTE(v8) = -5;
        v12 = 0LL;
        v13 = 259;
      }
      else
      {
        v13 = -1073741670;
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, Pool2, (__int64)v5);
      }
      goto LABEL_14;
    }
    v18 = SmAcquireReleaseResAvailForRead(a1, v5, v9, 0LL) & 1;
    LOBYTE(v8) = (8 * v18) | v8;
    if ( v18 )
    {
      LOBYTE(v8) = v8 | 4;
      goto LABEL_5;
    }
    v13 = -1073741670;
  }
LABEL_15:
  if ( v12 )
    SmKmStoreDereference(a1, *(_DWORD *)(v12 + 6832));
  if ( (v8 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(a1, v10, v9, 1LL);
  if ( v10 )
  {
    *(_OWORD *)v5 = 0LL;
    *(_DWORD *)v5 = v13;
  }
  return v13;
}
