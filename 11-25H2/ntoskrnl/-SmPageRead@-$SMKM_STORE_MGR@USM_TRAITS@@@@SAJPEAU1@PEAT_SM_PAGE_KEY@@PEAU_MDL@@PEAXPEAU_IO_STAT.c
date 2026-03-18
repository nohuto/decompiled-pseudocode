/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140209BA8
 * Callers:
 *     MiIssueHardFaultIo @ 0x1402096C0 (MiIssueHardFaultIo.c)
 *     SmPageRead @ 0x140209B78 (SmPageRead.c)
 * Callees:
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140209EB0 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14022B7C4 (SmAcquireReleaseResAvailForRead.c)
 *     SmFpAllocate @ 0x140327D80 (SmFpAllocate.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14032801C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1403280A0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        _SLIST_ENTRY *a4,
        _SLIST_ENTRY *a5)
{
  _SLIST_ENTRY *v5; // r14
  unsigned __int64 v6; // r13
  unsigned int v8; // ebx
  unsigned int v9; // esi
  _SLIST_ENTRY *v10; // r12
  int PickStore; // eax
  __int64 v12; // r15
  unsigned int v13; // edi
  char v14; // di
  PSLIST_ENTRY Pool2; // rsi
  bool v16; // zf
  __int64 v18; // rax
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
  *((_QWORD *)&a5->Next + 1) = 0LL;
  v5->Next = a4;
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
    *((_QWORD *)&v5->Next + 1) = v21;
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
        Pool2 = (PSLIST_ENTRY)ExAllocatePool2(0x40uLL);
        if ( Pool2 )
          goto LABEL_7;
        LOBYTE(v8) = v8 & 0xFE;
      }
      Pool2 = (PSLIST_ENTRY)SmFpAllocate((PEX_SPIN_LOCK)(a1 + 1704), *(_DWORD *)(a1 + 2000) & 1);
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
      *((_DWORD *)&Pool2[1].Next + 2) = *a2;
      LODWORD(Pool2->Next) = 2;
      Pool2[1].Next = (_SLIST_ENTRY *)v6;
      *((_BYTE *)&Pool2->Next + 8) = v14;
      Pool2[2].Next = v5;
      if ( !v16 )
        *((_DWORD *)&Pool2->Next + 2) |= 0x1000000u;
      if ( (v8 & 1) != 0 )
        *((_DWORD *)&Pool2->Next + 2) |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v5, a1, *(_DWORD *)(v12 + 6832) & 0x3FF, Pool2) >= 0 )
      {
        v10 = 0LL;
        LOBYTE(v8) = -5;
        v12 = 0LL;
        v13 = 259;
      }
      else
      {
        v13 = -1073741670;
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, Pool2, v5);
      }
      goto LABEL_14;
    }
    v18 = SmAcquireReleaseResAvailForRead(a1, v5, v9, 0LL) & 1;
    LOBYTE(v8) = (8 * v18) | v8;
    if ( (_DWORD)v18 )
    {
      LOBYTE(v8) = v8 | 4;
      goto LABEL_5;
    }
    v13 = -1073741670;
  }
LABEL_15:
  if ( v12 )
    SmKmStoreDereference(a1, *(unsigned int *)(v12 + 6832));
  if ( (v8 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(a1, v10, v9, 1LL);
  if ( v10 )
  {
    *v5 = 0LL;
    LODWORD(v5->Next) = v13;
  }
  return v13;
}
