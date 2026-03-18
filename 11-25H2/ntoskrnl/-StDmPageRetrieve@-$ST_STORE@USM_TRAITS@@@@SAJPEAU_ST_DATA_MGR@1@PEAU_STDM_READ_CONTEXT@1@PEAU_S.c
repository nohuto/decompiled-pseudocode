/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020B100
 * Callers:
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1403489C4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14034A720 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14020B450 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     MmAreMdlPagesCached @ 0x14020C7B0 (MmAreMdlPagesCached.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404B0744 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x1405FF0B0 (-StDmCompletePendingReads@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // eax
  _QWORD *v7; // r13
  __int64 v8; // r10
  __int64 v9; // xmm1_8
  struct _KTHREAD *CurrentThread; // rdi
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // rcx
  int Queue; // eax
  unsigned int v15; // eax
  bool v16; // zf
  _QWORD *v17; // rsi
  int v18; // eax
  __int64 v19; // r9
  unsigned __int8 v20; // r8
  int v21; // edx
  int v22; // r12d
  _QWORD *v23; // rax
  _QWORD *v24; // r14
  __int64 v25; // r8
  __int64 *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 *v30; // r8
  int v31; // eax
  int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // edx
  __int64 v35; // rax
  _QWORD *v37; // [rsp+38h] [rbp-40h]
  __int64 *v38; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v39; // [rsp+48h] [rbp-30h]
  __int128 v40; // [rsp+50h] [rbp-28h] BYREF
  __int64 v41; // [rsp+60h] [rbp-18h]
  int v42; // [rsp+C0h] [rbp+48h]
  int v43; // [rsp+C8h] [rbp+50h]
  unsigned int v44; // [rsp+D0h] [rbp+58h]
  unsigned int v45; // [rsp+D8h] [rbp+60h] BYREF

  v45 = 0;
  v39 = (__int64 *)&v38;
  v4 = 0;
  v5 = *(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v7 = a2;
  v8 = a1;
  v9 = *(_QWORD *)(a3 + 24);
  CurrentThread = 0LL;
  v11 = *(_OWORD *)(a3 + 8);
  v43 = (unsigned __int8)v5;
  v37 = a2 + 51;
  v38 = 0LL;
  v44 = 8;
  v40 = v11;
  v41 = v9;
  if ( a2[51] )
  {
    v12 = MmAreMdlPagesCached(*(_QWORD *)(a3 + 16));
    v8 = a1;
    if ( !v12 )
      *(_DWORD *)(a3 + 8) |= 0x8000000u;
  }
  if ( (*(_DWORD *)(v8 + 776) & 0x20000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v13 = BYTE1(CurrentThread[1].Queue);
    Queue = (int)CurrentThread[1].Queue;
    if ( (v13 & 1) != 0 )
    {
      a2 = (_QWORD *)(((unsigned int)v13 >> 1) & 7);
      v44 = ((unsigned int)v13 >> 1) & 7;
      v15 = Queue & 0xFFFFF1FF;
    }
    else
    {
      v44 = -1;
      v15 = Queue | 0x100;
    }
    LODWORD(CurrentThread[1].Queue) = v15;
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v13, a2, a3, a4);
      v8 = a1;
    }
  }
  v42 = 0;
  v7[52] = &v40;
  v17 = v7 + 3;
  while ( 1 )
  {
    while ( 1 )
    {
      *(_OWORD *)v17 = 0LL;
      v17[2] = 0LL;
      if ( (v4 & 2) != 0 )
        v17[1] = 1LL;
      v18 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(v8, v7, a3, v17);
      if ( v18 == -1073741552 )
        goto LABEL_19;
      if ( v18 == -2147483634 )
        break;
      if ( v18 < 0 )
        goto LABEL_42;
      v20 = v40 + 1;
      LODWORD(v40) = v40 & 0xFFFFFF00 | (unsigned __int8)(v40 + 1);
      if ( v18 == 259 )
      {
        if ( v17[1] )
          v4 |= 2u;
        v23 = v37;
        v17 += 3;
        if ( v17 == v37 )
        {
          v22 = v42;
          goto LABEL_54;
        }
      }
      v21 = v43;
      v8 = a1;
      if ( v20 == v43 )
      {
        v22 = v42;
        v23 = v37;
        goto LABEL_21;
      }
      LODWORD(v41) = v41 + 1;
    }
    if ( (v4 & 2) == 0 )
    {
LABEL_42:
      v22 = v18;
      v42 = v18;
      v23 = v37;
LABEL_54:
      v8 = a1;
      goto LABEL_20;
    }
LABEL_19:
    v8 = a1;
    v22 = v42;
    v23 = v37;
    v7[55] = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6856LL) - 1LL;
LABEL_20:
    v21 = v43;
LABEL_21:
    v24 = v7 + 3;
    if ( v17 != v7 + 3 && v23 )
    {
      if ( (unsigned __int8)v40 == v21 || v22 < 0 )
        v4 |= 1u;
      v31 = ST_STORE<SM_TRAITS>::StDmCompletePendingReads(v8, (int)v17 - 24, (_DWORD)v7, a3, v4 & 1, (__int64)&v45);
      if ( v31 < 0 )
        v22 = v31;
      v32 = -1431655765 * (v17 - v24);
      v42 = v22;
      v33 = 3LL * v45;
      v17 = (_QWORD *)((char *)v17 - v33 * 8);
      v34 = v32 - v45;
      if ( v34 )
        memmove(v7 + 3, &v24[v33], 24LL * v34);
      else
        v4 &= ~2u;
      v8 = a1;
    }
    v25 = (unsigned __int8)v40;
    if ( (unsigned __int8)v40 == v43 )
      break;
    if ( v22 < 0 )
      goto LABEL_24;
    LODWORD(v41) = (unsigned __int8)v40 + *(_DWORD *)(a3 + 24);
  }
  v22 = 0;
LABEL_24:
  if ( (unsigned __int8)*(_DWORD *)(a3 + 8) != (unsigned __int8)v40 )
    *(_BYTE *)(a3 + 8) = v40;
  v26 = v39;
  if ( v39 != (__int64 *)&v38 )
  {
    while ( v26 != (__int64 *)&v38 )
    {
      v30 = v38;
      v38 = (__int64 *)(*v38 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v30 == v26 )
      {
        v38 = 0LL;
        v39 = (__int64 *)&v38;
      }
      else
      {
        *v26 = *v26 & 7 | (8 * ((unsigned __int64)*v26 >> 3) - 8);
      }
      if ( (*((_DWORD *)v30 + 7) & 1) == 0 )
      {
        *((_DWORD *)v30 + 7) |= 1u;
        v35 = v30[2];
        if ( v35 )
          *(_DWORD *)(v35 + 4) = v22;
        else
          *((_DWORD *)v30 + 2) = v22;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(v8);
      v26 = v39;
      LODWORD(v8) = a1;
    }
    v22 = 259;
  }
  v27 = v44;
  if ( v44 != 8 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( v44 == -1 )
    {
      v28 = (__int64)CurrentThread[1].Queue & 0xFFFFF0FF;
    }
    else
    {
      v27 = v44 << 9;
      v28 = v27 | (__int64)CurrentThread[1].Queue & 0xFFFFF1FF;
    }
    LODWORD(CurrentThread[1].Queue) = v28;
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v27, v26, v25, v19);
  }
  return (unsigned int)v22;
}
