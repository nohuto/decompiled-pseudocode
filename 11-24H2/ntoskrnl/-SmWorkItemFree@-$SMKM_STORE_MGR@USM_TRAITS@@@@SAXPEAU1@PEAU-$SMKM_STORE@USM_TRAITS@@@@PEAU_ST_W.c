/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14022FA80
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x140230604 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@E@Z @ 0x1402E6EC4 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmpFpReleaseResource @ 0x1404F7000 (SmpFpReleaseResource.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, _SLIST_ENTRY *a3, unsigned int *a4)
{
  int Next; // ecx
  _SLIST_ENTRY *v7; // rdx
  unsigned int v8; // esi
  int v9; // r12d
  _SLIST_ENTRY v12; // xmm1
  struct _EX_RUNDOWN_REF *v13; // rdi
  BOOL v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  int v18; // eax
  int v19; // ecx
  __int64 v20; // r13
  _SLIST_ENTRY v21; // [rsp+20h] [rbp-58h] BYREF
  _SLIST_ENTRY v22; // [rsp+30h] [rbp-48h]
  _SLIST_ENTRY *v23; // [rsp+40h] [rbp-38h]
  _SLIST_ENTRY *P; // [rsp+90h] [rbp+18h]

  v23 = 0LL;
  Next = (int)a3->Next;
  v7 = a3[2].Next;
  v8 = (__int64)a3->Next & 7;
  P = v7;
  v9 = 1;
  v21 = 0LL;
  v22 = 0LL;
  if ( a4 )
  {
    v12 = a3[1];
    v21 = *a3;
    v23 = a3[2].Next;
    v22 = v12;
  }
  v13 = 0LL;
  if ( v8 < 4 )
  {
    if ( v8 == 2 && (*(_DWORD *)(&a3->Next + 1) & 0x4000000) != 0 )
    {
      if ( *(_WORD *)(a1 + 1248) < 0x1000u )
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1248), a3);
        goto LABEL_8;
      }
      goto LABEL_25;
    }
    if ( !v8 && (*(_DWORD *)(&a3->Next + 1) & 0x40000000) != 0 )
    {
      v22.Next = a3[1].Next->Next;
      RtlpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(a1 + 1296) + 16LL * (*((_DWORD *)&a3->Next + 3) & 0x3F)),
        a3);
LABEL_8:
      v14 = v8 == 1;
      goto LABEL_9;
    }
    v19 = (Next & 7) - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v20 = a1 + 1704;
        if ( *(_SLIST_ENTRY **)(a1 + 1816) == v7 )
        {
          if ( (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a1 + 1704)) )
          {
            if ( *(_BYTE *)(a1 + 1798) )
              goto LABEL_8;
LABEL_34:
            _InterlockedExchange64((volatile __int64 *)(v20 + 112), 0LL);
            KeSetEvent((PRKEVENT)(v20 + 8), 0, 0);
            goto LABEL_8;
          }
        }
      }
    }
    else
    {
      v20 = a1 + 1584;
      if ( *(_SLIST_ENTRY **)(a1 + 1696) == v7 && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a1 + 1584)) )
      {
        if ( *(_BYTE *)(a1 + 1678) )
          goto LABEL_8;
        goto LABEL_34;
      }
    }
LABEL_25:
    ExFreePoolWithTag(a3, 0);
    goto LABEL_8;
  }
  v18 = *(_DWORD *)(&a3->Next + 1) & 7;
  if ( v8 == 5 )
  {
    if ( v18 )
    {
      v14 = 0;
      ExFreePoolWithTag(a3, 0);
      goto LABEL_9;
    }
LABEL_26:
    ExFreePoolWithTag(a3, 0);
LABEL_15:
    v15 = *(_DWORD *)(a2 + 6832) & 0x3FF;
    v16 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v15 >> 5));
    if ( v16 )
      v13 = (struct _EX_RUNDOWN_REF *)(v16 + 40LL * (v15 & 0x1F));
    _m_prefetchw(&v13[1]);
    v17 = v13[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)&v13[1], v17 - 2, v17) )
      ExfReleaseRundownProtection(v13 + 1);
    return;
  }
  v14 = 0;
  if ( v18 )
  {
    if ( v18 == 3 )
      goto LABEL_26;
    if ( (unsigned int)(v18 - 1) <= 1 )
      v9 = 0;
  }
  else
  {
    a3[2].Next = 0LL;
  }
LABEL_9:
  if ( (!a4
     || (unsigned int)((__int64 (__fastcall *)(_SLIST_ENTRY *, _QWORD, __int64, _QWORD))SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete)(
                        &v21,
                        *(_QWORD *)(a2 + 7576),
                        a2,
                        *a4))
    && v14 )
  {
    if ( *(_SLIST_ENTRY **)(a1 + 1696) == P && (unsigned int)SmpFpReleaseResource((PEX_SPIN_LOCK)(a1 + 1584)) )
    {
      if ( !*(_BYTE *)(a1 + 1678) )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 1696), 0LL);
        KeSetEvent((PRKEVENT)(a1 + 1592), 0, 0);
      }
    }
    else
    {
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( v9 )
    goto LABEL_15;
}
