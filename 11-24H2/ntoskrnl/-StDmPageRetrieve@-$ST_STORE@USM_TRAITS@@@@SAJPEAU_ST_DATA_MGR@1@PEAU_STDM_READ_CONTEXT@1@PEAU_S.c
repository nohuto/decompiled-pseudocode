/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7AB0
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14022F290 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x140230DA0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 * Callees:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1402F7E00 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     MmAreMdlPagesCached @ 0x1402F9160 (MmAreMdlPagesCached.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1404ABFD4 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x140609768 (-StDmCompletePendingReads@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // ebx
  int v4; // eax
  __int64 v7; // r10
  __int64 v8; // xmm1_8
  struct _KTHREAD *CurrentThread; // rdi
  __int128 v10; // xmm0
  int v11; // eax
  unsigned int v12; // ecx
  int Queue; // eax
  unsigned int v14; // eax
  bool v15; // zf
  _QWORD *v16; // rsi
  int v17; // eax
  unsigned __int8 v18; // r8
  int v19; // edx
  int v20; // r12d
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  __int64 *v23; // rdx
  unsigned int v24; // eax
  __int64 *v26; // r8
  int v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rax
  _QWORD *v33; // [rsp+38h] [rbp-40h]
  __int64 *v34; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-30h]
  __int128 v36; // [rsp+50h] [rbp-28h] BYREF
  __int64 v37; // [rsp+60h] [rbp-18h]
  int v38; // [rsp+C0h] [rbp+48h]
  int v39; // [rsp+C8h] [rbp+50h]
  int v40; // [rsp+D0h] [rbp+58h]
  unsigned int v41; // [rsp+D8h] [rbp+60h] BYREF

  v41 = 0;
  v35 = (__int64 *)&v34;
  v3 = 0;
  v4 = *(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v7 = a1;
  v8 = *(_QWORD *)(a3 + 24);
  CurrentThread = 0LL;
  v10 = *(_OWORD *)(a3 + 8);
  v39 = (unsigned __int8)v4;
  v33 = a2 + 51;
  v34 = 0LL;
  v40 = 8;
  v36 = v10;
  v37 = v8;
  if ( a2[51] )
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
      v40 = (v12 >> 1) & 7;
      v14 = Queue & 0xFFFFF1FF;
    }
    else
    {
      v40 = -1;
      v14 = Queue | 0x100;
    }
    LODWORD(CurrentThread[1].Queue) = v14;
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
      v7 = a1;
    }
  }
  v38 = 0;
  a2[52] = &v36;
  v16 = a2 + 3;
  while ( 1 )
  {
    while ( 1 )
    {
      *(_OWORD *)v16 = 0LL;
      v16[2] = 0LL;
      if ( (v3 & 2) != 0 )
        v16[1] = 1LL;
      v17 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(v7, a2, a3, v16);
      if ( v17 == -1073741552 )
        goto LABEL_19;
      if ( v17 == -2147483634 )
        break;
      if ( v17 < 0 )
        goto LABEL_42;
      v18 = v36 + 1;
      LODWORD(v36) = v36 & 0xFFFFFF00 | (unsigned __int8)(v36 + 1);
      if ( v17 == 259 )
      {
        if ( v16[1] )
          v3 |= 2u;
        v21 = v33;
        v16 += 3;
        if ( v16 == v33 )
        {
          v20 = v38;
          goto LABEL_54;
        }
      }
      v19 = v39;
      v7 = a1;
      if ( v18 == v39 )
      {
        v20 = v38;
        v21 = v33;
        goto LABEL_21;
      }
      LODWORD(v37) = v37 + 1;
    }
    if ( (v3 & 2) == 0 )
    {
LABEL_42:
      v20 = v17;
      v38 = v17;
      v21 = v33;
LABEL_54:
      v7 = a1;
      goto LABEL_20;
    }
LABEL_19:
    v7 = a1;
    v20 = v38;
    v21 = v33;
    a2[55] = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6856LL) - 1LL;
LABEL_20:
    v19 = v39;
LABEL_21:
    v22 = a2 + 3;
    if ( v16 != a2 + 3 && v21 )
    {
      if ( (unsigned __int8)v36 == v19 || v20 < 0 )
        v3 |= 1u;
      v27 = ST_STORE<SM_TRAITS>::StDmCompletePendingReads(v7, (int)v16 - 24, (_DWORD)a2, a3, v3 & 1, (__int64)&v41);
      if ( v27 < 0 )
        v20 = v27;
      v28 = -1431655765 * (v16 - v22);
      v38 = v20;
      v29 = 3LL * v41;
      v16 = (_QWORD *)((char *)v16 - v29 * 8);
      v30 = v28 - v41;
      if ( v30 )
        memmove(a2 + 3, &v22[v29], 24LL * v30);
      else
        v3 &= ~2u;
      v7 = a1;
    }
    if ( (unsigned __int8)v36 == v39 )
      break;
    if ( v20 < 0 )
      goto LABEL_24;
    LODWORD(v37) = (unsigned __int8)v36 + *(_DWORD *)(a3 + 24);
  }
  v20 = 0;
LABEL_24:
  if ( (unsigned __int8)*(_DWORD *)(a3 + 8) != (unsigned __int8)v36 )
    *(_BYTE *)(a3 + 8) = v36;
  v23 = v35;
  if ( v35 != (__int64 *)&v34 )
  {
    while ( v23 != (__int64 *)&v34 )
    {
      v26 = v34;
      v34 = (__int64 *)(*v34 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v26 == v23 )
      {
        v34 = 0LL;
        v35 = (__int64 *)&v34;
      }
      else
      {
        *v23 = *v23 & 7 | (8 * ((unsigned __int64)*v23 >> 3) - 8);
      }
      if ( (*((_DWORD *)v26 + 7) & 1) == 0 )
      {
        *((_DWORD *)v26 + 7) |= 1u;
        v31 = v26[2];
        if ( v31 )
          *(_DWORD *)(v31 + 4) = v20;
        else
          *((_DWORD *)v26 + 2) = v20;
      }
      ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(v7);
      v23 = v35;
      LODWORD(v7) = a1;
    }
    v20 = 259;
  }
  if ( v40 != 8 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( v40 == -1 )
      v24 = (__int64)CurrentThread[1].Queue & 0xFFFFF0FF;
    else
      v24 = (v40 << 9) | (__int64)CurrentThread[1].Queue & 0xFFFFF1FF;
    LODWORD(CurrentThread[1].Queue) = v24;
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v20;
}
