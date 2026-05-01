/*
 * XREFs of ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180046380
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012E64 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180046330 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z @ 0x180046730 (-RmpPartitionTableFindPartitionInternal@@YAPEAU_RM_PARTITION@@PEAU_RM_PARTITION_TABLE@@PEAXK@Z.c)
 *     ??$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z @ 0x1800467BC (--$RmpArrayGrow@PEAU_RM_PARTITION@@@@YAJPEAPEAPEAU_RM_PARTITION@@PEAKK@Z.c)
 *     ?RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z @ 0x1800468A4 (-RmpPartitionStart@@YAJPEAU_RM_PARTITION@@PEAX_K@Z.c)
 *     ?RmpPartitionAllocateState@@YAJPEAU_RM_PARTITION@@@Z @ 0x180070710 (-RmpPartitionAllocateState@@YAJPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x180070A70 (-RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPartitionTableFindOrCreatePartition(
        struct _RM_PARTITION_TABLE *a1,
        void *a2,
        struct _RM_PARTITION **a3)
{
  unsigned __int64 v3; // r15
  void *v5; // r12
  char *v7; // r14
  char *i; // rdi
  volatile signed __int64 *v9; // rdx
  int State; // edi
  struct _RM_PARTITION *Heap; // rax
  struct _RM_PARTITION *v13; // rsi
  int v14; // r8d
  int v15; // ecx
  struct _RM_PARTITION *PartitionInternal; // rax
  char *v17; // rax
  char **v18; // rdx
  void *v19; // rcx
  int v20; // [rsp+34h] [rbp-45h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  void *v24; // [rsp+60h] [rbp-19h]
  int v25; // [rsp+68h] [rbp-11h]
  int v26; // [rsp+6Ch] [rbp-Dh]
  int *v27; // [rsp+70h] [rbp-9h]
  int v28; // [rsp+78h] [rbp-1h]
  int v29; // [rsp+7Ch] [rbp+3h]
  unsigned __int64 *v30; // [rsp+80h] [rbp+7h]
  int v31; // [rsp+88h] [rbp+Fh]
  int v32; // [rsp+8Ch] [rbp+13h]

  v3 = 0LL;
  v5 = a2;
  if ( a2 == (void *)-2LL )
    v5 = (void *)*((_QWORD *)a1 + 6);
  RtlAcquireSRWLockShared(a1);
  if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
  {
    State = -1073741058;
LABEL_12:
    RtlReleaseSRWLockShared(a1);
  }
  else
  {
    v7 = (char *)a1 + 16;
    for ( i = (char *)*((_QWORD *)a1 + 2); i != v7; i = *(char **)i )
    {
      if ( (int)NtCompareObjects(*((_QWORD *)i + 3), v5) >= 0 )
      {
        v9 = 0LL;
        if ( (*((_DWORD *)i + 58) & 3) == 1 )
          v9 = (volatile signed __int64 *)(i - 8);
        if ( v9 )
        {
          if ( _InterlockedIncrement64(v9) <= 1 )
            __fastfail(0xEu);
          *a3 = (struct _RM_PARTITION *)v9;
          State = 0;
          goto LABEL_12;
        }
        break;
      }
    }
    RtlReleaseSRWLockShared(a1);
    Heap = (struct _RM_PARTITION *)HampAllocateHeap(0xF8uLL);
    v13 = Heap;
    if ( !Heap )
    {
      State = -1073741801;
      goto LABEL_15;
    }
    RmpPartitionInitialize((struct _RM_PARTITION_TABLE *)((char *)a1 - 312), Heap);
    State = RmpPartitionAllocateState(v13);
    if ( State < 0 )
      goto LABEL_43;
    RmpAcquireGlobalLock();
    CempLockAcquireExclusive((__int64)a1);
    v14 = *((_DWORD *)a1 + 19);
    v15 = *((_DWORD *)a1 + 20) + 1;
    *((_DWORD *)a1 + 20) = v15;
    State = RmpArrayGrow<_RM_PARTITION *>((char *)a1 + 64, (char *)a1 + 72, (unsigned int)(v15 + v14));
    RmpReleaseGlobalLock();
    if ( State >= 0 )
    {
      while ( 1 )
      {
        if ( (*((_BYTE *)a1 + 40) & 1) != 0 )
        {
          State = -1073741058;
          goto LABEL_42;
        }
        PartitionInternal = RmpPartitionTableFindPartitionInternal(a1, v5, 0xFu);
        if ( !PartitionInternal )
          break;
        if ( (*((_DWORD *)PartitionInternal + 60) & 3) == 1 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)PartitionInternal) <= 1 )
            __fastfail(0xEu);
          *a3 = PartitionInternal;
          goto LABEL_29;
        }
        CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 32, 0LL);
      }
      v3 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = v3 + 1;
      State = RmpPartitionStart(v13, v5, v3);
      if ( State >= 0 )
      {
        ++*((_DWORD *)a1 + 19);
        v17 = (char *)v13 + 8;
        v18 = (char **)*((_QWORD *)a1 + 3);
        if ( *v18 != v7 )
          __fastfail(3u);
        *(_QWORD *)v17 = v7;
        *((_QWORD *)v13 + 2) = v18;
        *v18 = v17;
        *((_QWORD *)a1 + 3) = v17;
        RtlWakeAllConditionVariable((char *)a1 + 32);
        *a3 = v13;
        v13 = 0LL;
LABEL_29:
        State = 0;
        goto LABEL_42;
      }
      v19 = (void *)*((_QWORD *)v13 + 4);
      if ( v19 )
      {
        NtClose(v19);
        *((_QWORD *)v13 + 4) = 0LL;
      }
    }
LABEL_42:
    --*((_DWORD *)a1 + 20);
    *((_DWORD *)a1 + 2) = 0;
    RtlReleaseSRWLockExclusive(a1);
    if ( v13 )
LABEL_43:
      RmpPartitionRelease((HANDLE *)v13);
  }
  if ( State >= 0 )
    v3 = *((_QWORD *)*a3 + 29);
LABEL_15:
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 9) != 0 && (qword_1800E8290 & 9) == qword_1800E8290 )
  {
    v32 = 0;
    v29 = 0;
    v30 = &v21;
    v28 = 4;
    v27 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v21 = v3;
    v20 = State;
    v31 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v24 = &unk_1800D8CC7;
    UserData.Reserved = 2;
    v25 = 40;
    v26 = 1;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return (unsigned int)State;
}
