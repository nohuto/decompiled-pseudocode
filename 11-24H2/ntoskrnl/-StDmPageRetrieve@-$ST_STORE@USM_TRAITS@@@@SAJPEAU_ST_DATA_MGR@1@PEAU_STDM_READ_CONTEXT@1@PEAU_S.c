/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14039A7B0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140279D00 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14027B810 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14039AB00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     MmAreMdlPagesCached @ 0x14039BE60 (MmAreMdlPagesCached.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B1744 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x14060B1A8 (-StDmCompletePendingReads@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // eax
  _QWORD *v6; // r13
  __int64 v7; // r10
  __int64 v8; // xmm1_8
  struct _KTHREAD *CurrentThread; // rdi
  __int128 v10; // xmm0
  int v11; // eax
  __int64 v12; // rcx
  int Queue; // eax
  unsigned int v14; // eax
  bool v15; // zf
  _QWORD *v16; // rsi
  int v17; // eax
  unsigned __int8 v18; // r8
  int v19; // edx
  int v20; // r12d
  __int64 v21; // rax
  _QWORD *v22; // r14
  __int64 *v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 *v27; // r8
  int v28; // eax
  int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v34; // [rsp+38h] [rbp-40h]
  __int64 *v35; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-30h]
  __int128 v37; // [rsp+50h] [rbp-28h] BYREF
  __int64 v38; // [rsp+60h] [rbp-18h]
  int v39; // [rsp+C0h] [rbp+48h]
  int v40; // [rsp+C8h] [rbp+50h]
  unsigned int v41; // [rsp+D0h] [rbp+58h]
  unsigned int v42; // [rsp+D8h] [rbp+60h] BYREF

  v42 = 0;
  v36 = (__int64 *)&v35;
  v3 = 0;
  v4 = *(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v6 = (_QWORD *)a2;
  v7 = a1;
  v8 = *(_QWORD *)(a3 + 24);
  CurrentThread = 0LL;
  v10 = *(_OWORD *)(a3 + 8);
  v40 = (unsigned __int8)v4;
  v34 = a2 + 408;
  v35 = 0LL;
  v41 = 8;
  v37 = v10;
  v38 = v8;
  if ( *(_QWORD *)(a2 + 408) )
  {
    v11 = MmAreMdlPagesCached(*(_QWORD *)(a3 + 16));
    v7 = a1;
    if ( !v11 )
      *(_DWORD *)(a3 + 8) |= 0x8000000u;
  }
  if ( (*(_DWORD *)(v7 + 776) & 0x20000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = BYTE1(CurrentThread[1].Queue);
    Queue = (int)CurrentThread[1].Queue;
    if ( (v12 & 1) != 0 )
    {
      a2 = ((unsigned int)v12 >> 1) & 7;
      v41 = ((unsigned int)v12 >> 1) & 7;
      v14 = Queue & 0xFFFFF1FF;
    }
    else
    {
      v41 = -1;
      v14 = Queue | 0x100;
    }
    LODWORD(CurrentThread[1].Queue) = v14;
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v12, a2);
      v7 = a1;
    }
  }
  v39 = 0;
  v6[52] = &v37;
  v16 = v6 + 3;
  while ( 1 )
  {
    while ( 1 )
    {
      *(_OWORD *)v16 = 0LL;
      v16[2] = 0LL;
      if ( (v3 & 2) != 0 )
        v16[1] = 1LL;
      v17 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(v7, v6, a3, v16);
      if ( v17 == -1073741552 )
        goto LABEL_19;
      if ( v17 == -2147483634 )
        break;
      if ( v17 < 0 )
        goto LABEL_42;
      v18 = v37 + 1;
      LODWORD(v37) = v37 & 0xFFFFFF00 | (unsigned __int8)(v37 + 1);
      if ( v17 == 259 )
      {
        if ( v16[1] )
          v3 |= 2u;
        v21 = v34;
        v16 += 3;
        if ( v16 == (_QWORD *)v34 )
        {
          v20 = v39;
          goto LABEL_54;
        }
      }
      v19 = v40;
      v7 = a1;
      if ( v18 == v40 )
      {
        v20 = v39;
        v21 = v34;
        goto LABEL_21;
      }
      LODWORD(v38) = v38 + 1;
    }
    if ( (v3 & 2) == 0 )
    {
LABEL_42:
      v20 = v17;
      v39 = v17;
      v21 = v34;
LABEL_54:
      v7 = a1;
      goto LABEL_20;
    }
LABEL_19:
    v7 = a1;
    v20 = v39;
    v21 = v34;
    v6[55] = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6856LL) - 1LL;
LABEL_20:
    v19 = v40;
LABEL_21:
    v22 = v6 + 3;
    if ( v16 != v6 + 3 && v21 )
    {
      if ( (unsigned __int8)v37 == v19 || v20 < 0 )
        v3 |= 1u;
      v28 = ST_STORE<SM_TRAITS>::StDmCompletePendingReads(v7, (int)v16 - 24, (_DWORD)v6, a3, v3 & 1, (__int64)&v42);
      if ( v28 < 0 )
        v20 = v28;
      v29 = -1431655765 * (v16 - v22);
      v39 = v20;
      v30 = 3LL * v42;
      v16 = (_QWORD *)((char *)v16 - v30 * 8);
      v31 = v29 - v42;
      if ( v31 )
        memmove(v6 + 3, &v22[v30], 24LL * v31);
      else
        v3 &= ~2u;
      v7 = a1;
    }
    if ( (unsigned __int8)v37 == v40 )
      break;
    if ( v20 < 0 )
      goto LABEL_24;
    LODWORD(v38) = (unsigned __int8)v37 + *(_DWORD *)(a3 + 24);
  }
  v20 = 0;
LABEL_24:
  if ( (unsigned __int8)*(_DWORD *)(a3 + 8) != (unsigned __int8)v37 )
    *(_BYTE *)(a3 + 8) = v37;
  v23 = v36;
  if ( v36 != (__int64 *)&v35 )
  {
    while ( v23 != (__int64 *)&v35 )
    {
      v27 = v35;
      v35 = (__int64 *)(*v35 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v27 == v23 )
      {
        v35 = 0LL;
        v36 = (__int64 *)&v35;
      }
      else
      {
        *v23 = *v23 & 7 | (8 * ((unsigned __int64)*v23 >> 3) - 8);
      }
      if ( (*((_DWORD *)v27 + 7) & 1) == 0 )
      {
        *((_DWORD *)v27 + 7) |= 1u;
        v32 = v27[2];
        if ( v32 )
          *(_DWORD *)(v32 + 4) = v20;
        else
          *((_DWORD *)v27 + 2) = v20;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(v7);
      v23 = v36;
      LODWORD(v7) = a1;
    }
    v20 = 259;
  }
  v24 = v41;
  if ( v41 != 8 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( v41 == -1 )
    {
      v25 = (__int64)CurrentThread[1].Queue & 0xFFFFF0FF;
    }
    else
    {
      v24 = v41 << 9;
      v25 = v24 | (__int64)CurrentThread[1].Queue & 0xFFFFF1FF;
    }
    LODWORD(CurrentThread[1].Queue) = v25;
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v24, (__int64)v23);
  }
  return (unsigned int)v20;
}
