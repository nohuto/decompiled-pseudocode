/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1402F41E0
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402F5830 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x1402F6C50 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1402F85D0 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x1409E3F44 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v8; // r12d
  struct VLOCK *v9; // rsi
  unsigned int v10; // edx
  int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // r15d
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rsi
  char *v17; // rcx
  __int64 v18; // r14
  char *v19; // r12
  char *v20; // rax
  char *v21; // r10
  char *v22; // r8
  unsigned int v23; // r9d
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  int MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v36; // [rsp+30h] [rbp-D0h]
  unsigned int v37; // [rsp+34h] [rbp-CCh]
  unsigned int v38; // [rsp+38h] [rbp-C8h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-C0h] BYREF
  char *v40; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v41[63]; // [rsp+78h] [rbp-88h]
  char MemoryInformation[8]; // [rsp+270h] [rbp+170h] BYREF
  char v43; // [rsp+278h] [rbp+178h] BYREF

  v2 = (*(_BYTE *)(a1 + 6837) & 4) == 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( v2 )
    return (unsigned int)-1073741637;
  v5 = *(_DWORD *)(a1 + 2336);
  v6 = 0;
  v37 = v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(a1 + 7016) >> 12;
    v36 = v8;
    KeStackAttachProcess(*(PRKPROCESS *)(a1 + 7432), &ApcState);
    v9 = (struct VLOCK *)(a1 + 6840);
    StLockAcquireShared((struct VLOCK *)(a1 + 6840));
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 7444));
    v12 = 0;
    v13 = 0;
    if ( !*(_DWORD *)(a1 + 7020) )
      goto LABEL_10;
    while ( 1 )
    {
      if ( v12 >= v5 )
        goto LABEL_10;
      v10 = v13;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 7024) + 8LL * v13) & 0x7FFFFFFFFFFF0000LL) == 0
        || *(_BYTE *)(a1 + 856)
        || *(unsigned __int16 *)(*(_QWORD *)(a1 + 1496) + 2LL * v13) >> 13 != 6 )
      {
        goto LABEL_9;
      }
      v38 = v12 + 1;
      v16 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v13, 0, v11, 0);
      if ( (unsigned __int64)v16 <= 4 )
      {
        v9 = (struct VLOCK *)(a1 + 6840);
        goto LABEL_30;
      }
      StLockReleaseShared((struct VLOCK *)(a1 + 6840), v10);
      if ( !*a2 )
      {
        v31 = *(unsigned int *)(a1 + 7016);
        v40 = v16;
        v41[0] = v31;
        MmSetPriorityVaRanges(1LL, &v40);
        goto LABEL_29;
      }
      v17 = v16;
      v18 = v8 << 12;
      v19 = &v16[v18];
      v20 = MemoryInformation;
      if ( v16 < &v16[v18] )
      {
        do
        {
          *(_QWORD *)v20 = v17;
          v17 += 4096;
          v20 += 16;
        }
        while ( v17 < v19 );
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v16,
             MemoryWorkingSetExInformation,
             MemoryInformation,
             16LL * v36,
             0LL) < 0
        && v16 < v19 )
      {
        v32 = (unsigned __int64 *)&v43;
        v33 = ((unsigned __int64)(v18 - 1) >> 12) + 1;
        do
        {
          *v32 = *v32 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
          v32 += 2;
          --v33;
        }
        while ( v33 );
      }
      v21 = v16;
      v22 = MemoryInformation;
      v23 = 0;
      while ( v21 < v19 )
      {
        if ( (*((_QWORD *)v22 + 1) & 1) != 0 || (*((_QWORD *)v22 + 1) & 0xC00000LL) == 0x400000 )
        {
          v24 = *((_QWORD *)v22 + 1) & 0x7000000LL;
          if ( v24 == 100663296 )
          {
            if ( !*a2 )
            {
              v34 = *(unsigned int *)(a1 + 7016);
              v40 = v16;
              v41[0] = v34;
              v26 = 1LL;
              goto LABEL_27;
            }
            v25 = *a2 - 1;
            goto LABEL_23;
          }
          if ( v24 < 0x6000000 )
          {
            v29 = *a2;
            if ( *a2 )
            {
              v30 = 2LL * v23++;
              v41[v30 - 1] = *(_QWORD *)v22;
              v25 = v29 - 1;
              v41[v30] = 4096LL;
LABEL_23:
              *a2 = v25;
            }
          }
        }
        v21 += 4096;
        v22 += 16;
      }
      if ( !v23 )
        goto LABEL_28;
      v26 = v23;
LABEL_27:
      MmSetPriorityVaRanges(v26, &v40);
LABEL_28:
      v5 = v37;
      v8 = v36;
LABEL_29:
      v9 = (struct VLOCK *)(a1 + 6840);
      StLockAcquireShared((struct VLOCK *)(a1 + 6840));
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v13, v27, v28, MemoryInformationLength, 0);
LABEL_30:
      v12 = v38;
LABEL_9:
      if ( ++v13 >= *(_DWORD *)(a1 + 7020) )
      {
LABEL_10:
        StLockReleaseShared(v9, v10);
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 7444));
        KiUnstackDetachProcess((__int64)&ApcState, 0, v14, v15);
        return v6;
      }
    }
  }
  return v6;
}
