/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x140246820
 * Callers:
 *     SmPageWrite @ 0x140246630 (SmPageWrite.c)
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140246C10 (SmKmStoreReferenceEx.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140247234 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreDereference @ 0x14027A498 (SmKmStoreDereference.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x14037A3BC (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x140496F20 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        int *a2,
        unsigned __int64 a3,
        __int64 a4,
        _SLIST_ENTRY *a5,
        _SLIST_ENTRY *a6,
        __int64 a7)
{
  PSLIST_ENTRY v8; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  _DWORD *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // ecx
  unsigned int v27; // eax
  PSLIST_ENTRY v28; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+28h] [rbp-40h]
  __int16 v30; // [rsp+2Ch] [rbp-3Ch]
  __int16 v31; // [rsp+2Eh] [rbp-3Ah]
  int v34; // [rsp+98h] [rbp+30h]

  v8 = 0LL;
  *((_QWORD *)&a6->Next + 1) = 0LL;
  a6->Next = a5;
  v34 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (a3 & 0x7FF) != 0x400 )
  {
    v11 = (_DWORD *)SmKmStoreReferenceEx();
    v12 = v11;
    if ( v11 )
    {
      v13 = v11 + 572;
      LODWORD(v14) = 0;
      v15 = (unsigned __int16)a3 >> 13;
      v16 = (-(__int64)((unsigned __int8)v11[214] != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
      do
      {
        v14 = (unsigned int)(*v13 + v14);
        v13 += 2;
        --v16;
      }
      while ( v16 );
      if ( v11[234] <= (unsigned int)v14 )
      {
        v14 = (unsigned int)v11[2 * v15 + 573];
        v26 = v11[2 * v15 + 572];
        v27 = v26 * (v11[216] >> 4);
        if ( v27 >= (unsigned int)v14 && v27 - (unsigned int)v14 < v26 << 8 )
        {
          v21 = -1073741110;
          goto LABEL_21;
        }
      }
      if ( (a3 & 0x20000) != 0 && (unsigned int)(v15 - 5) <= 1 )
      {
        LODWORD(v15) = 6;
      }
      else if ( (_DWORD)v15 != 6 )
      {
LABEL_8:
        if ( (*(_DWORD *)(a1 + 2000) & 0x20) == 0 || (*v12 & 0x400) != 0 )
        {
          v22 = 1767337331LL;
          v24 = 0xFFFFFFFFLL;
          v23 = 40LL;
        }
        else
        {
          v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1296) + 16 * ((a3 >> 18) & 0x3F)));
          if ( v8 )
            goto LABEL_11;
          v22 = 2002218355LL;
          v23 = 4096LL;
          v24 = ((unsigned int)a3 >> 18) & 0x3F;
          LODWORD(v24) = v24 | 0x80000000;
        }
        v8 = (PSLIST_ENTRY)SmAllocEx(v23, v22, v24);
        if ( !v8 )
        {
          v21 = -1073741670;
          goto LABEL_21;
        }
LABEL_11:
        *(_SLIST_ENTRY **)((char *)&v8->Next + 4) = 0LL;
        *((_DWORD *)&v8->Next + 3) = 0;
        *((_DWORD *)&v8[1].Next + 3) = 0;
        v17 = *(_DWORD *)(&v8->Next + 1) & 0xFFFFFFF8;
        LODWORD(v8->Next) = 0;
        v18 = v15 | v17;
        v8[1].Next = (_SLIST_ENTRY *)a4;
        v19 = *a2;
        v20 = *((_DWORD *)&v8->Next + 3);
        *((_DWORD *)&v8[1].Next + 2) = *a2;
        *((_DWORD *)&v8->Next + 2) = v18;
        *((_DWORD *)&v8->Next + 3) = v20 ^ ((unsigned __int8)((unsigned int)a3 >> 18) ^ (unsigned __int8)v20) & 0x3F;
        if ( (a3 & 0x10000) != 0 )
          *((_DWORD *)&v8->Next + 2) = v18 | 0x80000000;
        v8[2].Next = a6;
        if ( (*(_DWORD *)(a1 + 2000) & 0x20) == 0 || (*v12 & 0x400) != 0 )
        {
          v31 = v12[1708] & 0x3FF;
          v29 = v19;
          v30 = v34;
          v28 = v8;
          v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, &v28, 1LL);
          if ( v21 < 0 )
          {
LABEL_21:
            SmKmStoreDereference(a1, (unsigned int)v12[1708]);
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            goto LABEL_23;
          }
        }
        else
        {
          memset_0(&v8[2].Next + 1, 0, 0x58uLL);
          *((_QWORD *)&v8[7].Next + 1) = v8;
          *((_QWORD *)&v8[6].Next + 1) = v12;
          if ( (((unsigned int)a3 >> 18) & 0x3F) != *(_DWORD *)(a7 + 16) )
          {
            if ( *(_QWORD *)(a7 + 8) != a7 )
              SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxQueueEntries((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 1280)
                                                                                 + 176 * ((a3 >> 18) & 0x3F)));
            *(_DWORD *)(a7 + 16) = ((unsigned int)a3 >> 18) & 0x3F;
          }
          v8[7].Next = (_SLIST_ENTRY *)(**(_QWORD **)(a7 + 8) + 1LL);
          **(_QWORD **)(a7 + 8) = v8 + 7;
          *(_QWORD *)(a7 + 8) = v8 + 7;
        }
        return 259;
      }
      SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(a1, v14, v13);
      goto LABEL_8;
    }
  }
  v21 = -1073741811;
LABEL_23:
  if ( a6 )
  {
    *a6 = 0LL;
    LODWORD(a6->Next) = v21;
  }
  return (unsigned int)v21;
}
