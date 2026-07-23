/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402F5B40
 * Callers:
 *     SmPageWrite @ 0x1402F5950 (SmPageWrite.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z @ 0x1402E7434 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU_SMKM_ADD_PAGE_CONTEXT@1@K@Z.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     SmKmStoreReferenceEx @ 0x1402F5F30 (SmKmStoreReferenceEx.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F60E4 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x1404918B0 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        int *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rsi
  _DWORD *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // rcx
  unsigned int v18; // r8d
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  int v22; // ebx
  ULONG v23; // edx
  ULONG_PTR v24; // rcx
  unsigned int v25; // r8d
  int v27; // ecx
  unsigned int v28; // eax
  _QWORD *v29; // [rsp+20h] [rbp-48h] BYREF
  int v30; // [rsp+28h] [rbp-40h]
  __int16 v31; // [rsp+2Ch] [rbp-3Ch]
  __int16 v32; // [rsp+2Eh] [rbp-3Ah]
  int v35; // [rsp+98h] [rbp+30h]

  v8 = 0LL;
  v9 = a3 & 0x7FF;
  a6[1] = 0LL;
  *a6 = a5;
  v35 = *(_DWORD *)(a4 + 40) >> 12;
  if ( (_DWORD)v9 != 1024 )
  {
    v12 = (_DWORD *)SmKmStoreReferenceEx(a1, v9);
    v13 = v12;
    if ( v12 )
    {
      v14 = v12 + 572;
      LODWORD(v15) = 0;
      v16 = (unsigned __int16)a3 >> 13;
      v17 = (-(__int64)((unsigned __int8)v12[214] != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
      do
      {
        v15 = (unsigned int)(*v14 + v15);
        v14 += 2;
        --v17;
      }
      while ( v17 );
      if ( v12[234] <= (unsigned int)v15 )
      {
        v15 = (unsigned int)v12[2 * v16 + 573];
        v27 = v12[2 * v16 + 572];
        v28 = v27 * (v12[216] >> 4);
        if ( v28 >= (unsigned int)v15 && v28 - (unsigned int)v15 < v27 << 8 )
        {
          v22 = -1073741110;
          goto LABEL_21;
        }
      }
      if ( (a3 & 0x20000) != 0 && (unsigned int)(v16 - 5) <= 1 )
      {
        LODWORD(v16) = 6;
      }
      else if ( (_DWORD)v16 != 6 )
      {
LABEL_8:
        if ( (*(_DWORD *)(a1 + 2000) & 0x20) == 0 || (*v13 & 0x400) != 0 )
        {
          v23 = 1767337331;
          v25 = -1;
          v24 = 40LL;
        }
        else
        {
          v8 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1296) + 16 * ((a3 >> 18) & 0x3F)));
          if ( v8 )
            goto LABEL_11;
          v23 = 2002218355;
          v24 = 4096LL;
          v25 = ((unsigned int)a3 >> 18) & 0x3F | 0x80000000;
        }
        v8 = (_QWORD *)SmAllocEx(v24, v23, v25);
        if ( !v8 )
        {
          v22 = -1073741670;
          goto LABEL_21;
        }
LABEL_11:
        *(_QWORD *)((char *)v8 + 4) = 0LL;
        *((_DWORD *)v8 + 3) = 0;
        *((_DWORD *)v8 + 7) = 0;
        v18 = v8[1] & 0xFFFFFFF8;
        *(_DWORD *)v8 = 0;
        v19 = v16 | v18;
        v8[2] = a4;
        v20 = *a2;
        v21 = *((_DWORD *)v8 + 3);
        *((_DWORD *)v8 + 6) = *a2;
        *((_DWORD *)v8 + 2) = v19;
        *((_DWORD *)v8 + 3) = v21 ^ ((unsigned __int8)((unsigned int)a3 >> 18) ^ (unsigned __int8)v21) & 0x3F;
        if ( (a3 & 0x10000) != 0 )
          *((_DWORD *)v8 + 2) = v19 | 0x80000000;
        v8[4] = a6;
        if ( (*(_DWORD *)(a1 + 2000) & 0x20) == 0 || (*v13 & 0x400) != 0 )
        {
          v32 = v13[1708] & 0x3FF;
          v30 = v20;
          v31 = v35;
          v29 = v8;
          v22 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, (__int16 *)&v29, 1u);
          if ( v22 < 0 )
          {
LABEL_21:
            SmKmStoreDereference(a1, v13[1708]);
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            goto LABEL_23;
          }
        }
        else
        {
          memset_0(v8 + 5, 0, 0x58uLL);
          v8[15] = v8;
          v8[13] = v13;
          if ( (((unsigned int)a3 >> 18) & 0x3F) != *(_DWORD *)(a7 + 16) )
          {
            if ( *(_QWORD *)(a7 + 8) != a7 )
              SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxQueueEntries((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 1280)
                                                                                 + 176 * ((a3 >> 18) & 0x3F)));
            *(_DWORD *)(a7 + 16) = ((unsigned int)a3 >> 18) & 0x3F;
          }
          v8[14] = **(_QWORD **)(a7 + 8) + 1LL;
          **(_QWORD **)(a7 + 8) = v8 + 14;
          *(_QWORD *)(a7 + 8) = v8 + 14;
        }
        return 259;
      }
      SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityTimerStart(a1, v15, v14);
      goto LABEL_8;
    }
  }
  v22 = -1073741811;
LABEL_23:
  if ( a6 )
  {
    *(_OWORD *)a6 = 0LL;
    *(_DWORD *)a6 = v22;
  }
  return (unsigned int)v22;
}
