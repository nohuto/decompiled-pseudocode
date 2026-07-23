/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044EB38
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140207B90 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14020A29C (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14020BC20 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14020C270 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x14020C858 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14069B5A0 (ZwQueryVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x1409FCFD0 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  unsigned int v8; // r12d
  struct VLOCK *v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // r8d
  unsigned int v12; // r15d
  char *v13; // rsi
  char *v14; // rcx
  __int64 v15; // r14
  char *v16; // r12
  char *v17; // rax
  char *v18; // r10
  char *v19; // r8
  unsigned int v20; // r9d
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  SIZE_T MemoryInformationLength; // [rsp+20h] [rbp-E0h]
  unsigned int v33; // [rsp+30h] [rbp-D0h]
  unsigned int v34; // [rsp+34h] [rbp-CCh]
  unsigned int v35; // [rsp+38h] [rbp-C8h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-C0h] BYREF
  char *v37; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[63]; // [rsp+78h] [rbp-88h]
  char MemoryInformation[8]; // [rsp+270h] [rbp+170h] BYREF
  char v40; // [rsp+278h] [rbp+178h] BYREF

  v2 = (*(_BYTE *)(a1 + 6837) & 4) == 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( v2 )
    return (unsigned int)-1073741637;
  v5 = *(_DWORD *)(a1 + 2336);
  v6 = 0;
  v34 = v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(a1 + 7016) >> 12;
    v33 = v8;
    KeStackAttachProcess(*(PRKPROCESS *)(a1 + 7432), &ApcState);
    v9 = (struct VLOCK *)(a1 + 6840);
    StLockAcquireShared((struct VLOCK *)(a1 + 6840));
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 7444));
    v11 = 0;
    v12 = 0;
    if ( !*(_DWORD *)(a1 + 7020) )
      goto LABEL_10;
    while ( 1 )
    {
      if ( v11 >= v5 )
        goto LABEL_10;
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 7024) + 8LL * v12) & 0x7FFFFFFFFFFF0000LL) == 0
        || *(_BYTE *)(a1 + 856)
        || *(unsigned __int16 *)(*(_QWORD *)(a1 + 1496) + 2LL * v12) >> 13 != 6 )
      {
        goto LABEL_9;
      }
      v35 = v11 + 1;
      v13 = (char *)SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v10, 0);
      if ( (unsigned __int64)v13 <= 4 )
      {
        v9 = (struct VLOCK *)(a1 + 6840);
        goto LABEL_30;
      }
      StLockReleaseShared((struct VLOCK *)(a1 + 6840));
      if ( !*a2 )
      {
        v28 = *(unsigned int *)(a1 + 7016);
        v37 = v13;
        v38[0] = v28;
        MmSetPriorityVaRanges(1LL, &v37);
        goto LABEL_29;
      }
      v14 = v13;
      v15 = v8 << 12;
      v16 = &v13[v15];
      v17 = MemoryInformation;
      if ( v13 < &v13[v15] )
      {
        do
        {
          *(_QWORD *)v17 = v14;
          v14 += 4096;
          v17 += 16;
        }
        while ( v14 < v16 );
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             v13,
             MemoryWorkingSetExInformation,
             MemoryInformation,
             16LL * v33,
             0LL) < 0
        && v13 < v16 )
      {
        v29 = (unsigned __int64 *)&v40;
        v30 = ((unsigned __int64)(v15 - 1) >> 12) + 1;
        do
        {
          *v29 = *v29 & 0xFFFFFFFFF8FFFFFEuLL | 0x6000001;
          v29 += 2;
          --v30;
        }
        while ( v30 );
      }
      v18 = v13;
      v19 = MemoryInformation;
      v20 = 0;
      while ( v18 < v16 )
      {
        if ( (*((_QWORD *)v19 + 1) & 1) != 0 || (*((_QWORD *)v19 + 1) & 0xC00000LL) == 0x400000 )
        {
          v21 = *((_QWORD *)v19 + 1) & 0x7000000LL;
          if ( v21 == 100663296 )
          {
            if ( !*a2 )
            {
              v31 = *(unsigned int *)(a1 + 7016);
              v37 = v13;
              v38[0] = v31;
              v23 = 1LL;
              goto LABEL_27;
            }
            v22 = *a2 - 1;
            goto LABEL_23;
          }
          if ( v21 < 0x6000000 )
          {
            v26 = *a2;
            if ( *a2 )
            {
              v27 = 2LL * v20++;
              v38[v27 - 1] = *(_QWORD *)v19;
              v22 = v26 - 1;
              v38[v27] = 4096LL;
LABEL_23:
              *a2 = v22;
            }
          }
        }
        v18 += 4096;
        v19 += 16;
      }
      if ( !v20 )
        goto LABEL_28;
      v23 = v20;
LABEL_27:
      MmSetPriorityVaRanges(v23, &v37);
LABEL_28:
      v5 = v34;
      v8 = v33;
LABEL_29:
      v9 = (struct VLOCK *)(a1 + 6840);
      StLockAcquireShared((struct VLOCK *)(a1 + 6840));
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v12, v24, v25, MemoryInformationLength, 0);
LABEL_30:
      v11 = v35;
LABEL_9:
      if ( ++v12 >= *(_DWORD *)(a1 + 7020) )
      {
LABEL_10:
        StLockReleaseShared(v9);
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 7444));
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
        return v6;
      }
    }
  }
  return v6;
}
