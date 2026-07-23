/*
 * XREFs of CcInitializeCacheMapInternal @ 0x14045E3B0
 * Callers:
 *     CcInitializeCacheMap @ 0x14045E350 (CcInitializeCacheMap.c)
 *     CcInitializeCacheMapEx2 @ 0x14045E380 (CcInitializeCacheMapEx2.c)
 *     CcInitializeCacheMapEx @ 0x140576C00 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     CcIncrementOpenCount @ 0x1402C5A9C (CcIncrementOpenCount.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1403059B0 (PsGetPagePriorityThread.c)
 *     MmDisableModifiedWriteOfSection @ 0x14034DF60 (MmDisableModifiedWriteOfSection.c)
 *     CcDeleteSharedCacheMap @ 0x1403A4DE4 (CcDeleteSharedCacheMap.c)
 *     CcFreePrivateCacheMapIgnoreNull @ 0x1403A524C (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x1403A5274 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1403A5480 (CcGetPrivateVolumeCacheMap.c)
 *     CcInitializeVolumeCacheMap @ 0x1403A5574 (CcInitializeVolumeCacheMap.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x1403A81B8 (CcCreatePrivateVolumeCacheMap.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     ExAllocateFromLookasideListEx @ 0x1403DCD60 (ExAllocateFromLookasideListEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x14044BC0C (CcInsertIntoCleanSharedCacheMapList.c)
 *     FsRtlIsNtstatusExpected @ 0x1404562A0 (FsRtlIsNtstatusExpected.c)
 *     CcGetPartitionWithCreate @ 0x1404DF450 (CcGetPartitionWithCreate.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObDeleteCapturedInsertInfo @ 0x1409130A0 (ObDeleteCapturedInsertInfo.c)
 *     MmCreateCacheManagerSection @ 0x14093C698 (MmCreateCacheManagerSection.c)
 *     CcCreateVacbArray @ 0x1409F5010 (CcCreateVacbArray.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcInitializeCacheMapInternal(
        __int64 Object,
        __m128i *a2,
        char a3,
        _WORD *a4,
        _WORD *a5,
        __int64 a6,
        int a7)
{
  struct _KTHREAD *CurrentThread; // r8
  int v9; // ecx
  unsigned int v10; // ebx
  _DWORD *v11; // r14
  void *v12; // r12
  NTSTATUS PrivateVolumeCacheMap; // esi
  __int64 v14; // r15
  __m128i v15; // xmm1
  int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdi
  NTSTATUS v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  _WORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 **v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  _BYTE *v38; // rbx
  _QWORD *v39; // rcx
  int v40; // eax
  int v41; // eax
  int Blink_high; // eax
  __int64 v43; // rdx
  unsigned int v44; // eax
  int v45; // eax
  __int16 v46; // r8
  __int64 v47; // rax
  int v48; // edx
  _QWORD *v49; // rax
  __int64 v50; // rax
  struct _KEVENT *v51; // rcx
  char *PoolWithTag; // rax
  _QWORD *v53; // rax
  NTSTATUS v54; // ebx
  _WORD *v55; // rbx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // rdx
  struct _KEVENT *v59; // rcx
  BOOLEAN IsNtstatusExpected; // al
  int v61; // ecx
  int v62; // r13d
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  char v65; // [rsp+38h] [rbp-81h]
  int v66; // [rsp+3Ch] [rbp-7Dh]
  struct _KLOCK_QUEUE_HANDLE v67; // [rsp+40h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-61h] BYREF
  int v69; // [rsp+70h] [rbp-49h]
  PVOID v70; // [rsp+78h] [rbp-41h]
  PVOID Objecta; // [rsp+80h] [rbp-39h] BYREF
  int v72; // [rsp+88h] [rbp-31h]
  int v73; // [rsp+8Ch] [rbp-2Dh]
  unsigned int v74; // [rsp+90h] [rbp-29h]
  __m128i v75; // [rsp+98h] [rbp-21h]
  __int64 v76; // [rsp+A8h] [rbp-11h]
  _KPROCESS *Process; // [rsp+B0h] [rbp-9h]
  struct _KTHREAD *v78; // [rsp+B8h] [rbp-1h]
  int v81; // [rsp+120h] [rbp+67h]

  CurrentThread = KeGetCurrentThread();
  v69 = 0;
  v9 = -2;
  v66 = 0;
  v70 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v10 = 0;
  v78 = CurrentThread;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v11 = 0LL;
  *(_QWORD *)&v67.OldIrql = 0LL;
  v12 = 0LL;
  PrivateVolumeCacheMap = 0;
  Objecta = 0LL;
  v14 = 0LL;
  if ( !CcDbgDisableDAX )
    v9 = a7;
  v73 = v9;
  v65 = 0;
  LockHandle.LockQueue = 0LL;
  v67.LockQueue = 0LL;
  if ( a4 && a5 || a5 && (*a5 != 1 || a5[1] != 40) )
    RtlRaiseStatus(-1073741811);
  v15 = *a2;
  v16 = _mm_cvtsi128_si32(*a2);
  v17 = a2->m128i_i64[0] == 0;
  v76 = a2[1].m128i_i64[0];
  if ( v17 )
    v16 = 1;
  v72 = CurrentThread->MiscFlags & 0x400;
  v75 = v15;
  v75.m128i_i32[0] = v16;
  v18 = v75.m128i_i64[0] + 0x3FFFF;
  LODWORD(v18) = (v16 + 0x3FFFF) & 0xFFFC0000;
  v75.m128i_i64[0] = v18;
  if ( *(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL) )
    goto LABEL_30;
  while ( 1 )
  {
    v11 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CcSharedCacheMapLookasideList);
    memset_0(v11, 0, 0x268uLL);
    v19 = v10 | 1;
    v20 = (__int64)v11;
    if ( (v73 & 1) == 0 )
      v19 = v10;
    v74 = v19;
    v21 = MmCreateCacheManagerSection(&Objecta, v75.m128i_i64[0], v19, Object);
    PrivateVolumeCacheMap = v21;
    if ( v21 == -1073740277 )
    {
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
      if ( CcSectionDeletionSequencePhase3 != CcSectionDeletionSequencePhase1 )
        PrivateVolumeCacheMap = -1073700856;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      LODWORD(v22) = 0;
      goto LABEL_119;
    }
    LODWORD(v22) = 0;
    if ( v21 < 0 )
    {
      IsNtstatusExpected = FsRtlIsNtstatusExpected(v21);
      v61 = PrivateVolumeCacheMap;
      if ( !IsNtstatusExpected )
        v61 = -1073741590;
      PrivateVolumeCacheMap = v61;
      goto LABEL_119;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    v14 = CcGetPartitionWithCreate(*(_QWORD *)(*((_QWORD *)qword_140E2FD48
                                               + (*(_WORD *)(**(_QWORD **)(Object + 40) + 60LL) & 0x3FF))
                                             + 184LL));
    if ( !v14 )
      goto LABEL_78;
    *v11 = 40370943;
    v11[139] = -1;
    v11[140] = -1;
    *((_QWORD *)v11 + 12) = Object & -(__int64)(Object != 0);
    *((_QWORD *)v11 + 1) = v75.m128i_i64[1];
    v24 = v76;
    *((_QWORD *)v11 + 5) = v76;
    *((_QWORD *)v11 + 6) = v24;
    v11[130] = HIDWORD(Process[1].CpuPartitionList.Blink);
    *((_QWORD *)v11 + 67) = v14;
    v11[152] = 0x40000;
    PrivateVolumeCacheMap = CcInitializeVolumeCacheMap(Object, (__int64 **)v11 + 64, v23);
    if ( PrivateVolumeCacheMap < 0 )
      goto LABEL_119;
    if ( CcEnablePerVolumeLazyWriter )
    {
      PrivateVolumeCacheMap = CcCreatePrivateVolumeCacheMap(v14, (__int64)v11, (_QWORD *)v11 + 75);
      if ( PrivateVolumeCacheMap < 0 )
        goto LABEL_119;
    }
    v11[72] = 1;
    *((_QWORD *)v11 + 37) = 0LL;
    v11[76] = 0;
    *((_WORD *)v11 + 156) = 1;
    *((_BYTE *)v11 + 314) = 6;
    v11[79] = 0;
    *((_QWORD *)v11 + 41) = v11 + 80;
    *((_QWORD *)v11 + 40) = v11 + 80;
    *((_QWORD *)v11 + 13) = 0LL;
    if ( a3 )
      v11[38] |= 4u;
    if ( (*(_DWORD *)(Object + 80) & 0x20) != 0 )
      v11[38] |= 0x40u;
    if ( !v72 )
      v11[38] |= 0x200000u;
    *((_QWORD *)v11 + 3) = v11 + 4;
    *((_QWORD *)v11 + 2) = v11 + 4;
    v25 = v11[39];
    *((_QWORD *)v11 + 28) = a6;
    v26 = v25 | 1;
    v27 = v25 & 0xFFFFFFFE;
    if ( !a4 )
      v27 = v26;
    v28 = a4;
    if ( !a4 )
      v28 = a5;
    v10 = v74;
    v11[39] = v27;
    *((_QWORD *)v11 + 27) = v28;
    *((_QWORD *)v11 + 30) = v11 + 58;
    *((_QWORD *)v11 + 29) = v11 + 58;
LABEL_30:
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    if ( *(_QWORD *)(Object + 48) )
      break;
    v29 = *(_QWORD *)(Object + 40);
    v20 = *(_QWORD *)(v29 + 8);
    if ( v20 )
    {
      v14 = *(_QWORD *)(v20 + 536);
      v36 = CcGetPrivateVolumeCacheMap(*(_QWORD *)(v29 + 8));
      v37 = *(_QWORD *)(Object + 208);
      v38 = (_BYTE *)v36;
      if ( v37 )
      {
        v39 = *(_QWORD **)(v37 + 72);
        if ( v39 )
        {
          if ( *v39 != *(_QWORD *)(v14 + 8) )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v67);
            v40 = *(_DWORD *)(v20 + 4);
            if ( !v40 || v40 == *(_DWORD *)(v20 + 544) )
            {
              PrivateVolumeCacheMap = -1073741608;
              CcScheduleLazyWriteScan((_BYTE *)v14, v38, 1, 0);
              v65 = 1;
            }
            else
            {
              PrivateVolumeCacheMap = -1073740277;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            LODWORD(v22) = 0;
            goto LABEL_121;
          }
        }
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v67);
      if ( (*(_DWORD *)(Object + 80) & 0x20) == 0 )
        *(_DWORD *)(v20 + 152) &= ~0x40u;
      v41 = *(_DWORD *)(v20 + 152);
      LODWORD(v22) = 0;
      if ( (v41 & 0x200000) != 0 && v72 )
        *(_DWORD *)(v20 + 152) = v41 & 0xFFDFFFFF;
      Blink_high = HIDWORD(Process[1].CpuPartitionList.Blink);
      if ( Blink_high )
        *(_DWORD *)(v20 + 520) = Blink_high;
LABEL_54:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
      v14 = *(_QWORD *)(v20 + 536);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v67);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (*(_DWORD *)(v20 + 152) & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v43 = 256LL;
      v44 = *(_DWORD *)(v20 + 152) & 0xFFFFFFEF;
      *(_DWORD *)(v20 + 152) = v44;
      v45 = v44 & 0x100;
      if ( *(_QWORD *)(v20 + 88) )
      {
        if ( !v45 )
        {
          CcIncrementOpenCount(v20, 256LL, 0);
          KeReleaseInStackQueuedSpinLock(&v67);
LABEL_86:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_87:
          CcFreeSharedCacheMapIgnoreNull(v11);
          v11 = 0LL;
          v55 = (_WORD *)(v20 + 384);
          if ( !*(_WORD *)(v20 + 384) )
            goto LABEL_89;
          while ( 1 )
          {
            v70 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList);
            v12 = v70;
            if ( !v70 )
              break;
LABEL_89:
            LODWORD(v12) = 1;
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v67);
            if ( *(_QWORD *)(Object + 48) )
            {
              if ( *(_DWORD *)(v20 + 4) <= 1u )
                KeBugCheckEx(0x34u, 0xA18uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
              --*(_DWORD *)(v20 + 4);
              v20 = 0LL;
LABEL_99:
              LODWORD(v22) = 1;
              goto LABEL_119;
            }
            if ( !*v55 )
              goto LABEL_94;
            if ( v70 )
            {
              v55 = v70;
              v70 = 0LL;
LABEL_94:
              memset_0(v55, 0, 0x78uLL);
              v56 = (__int64)v78;
              *v55 = 766;
              *((_QWORD *)v55 + 1) = Object;
              *((_DWORD *)v55 + 1) = 4095;
              *(_DWORD *)v55 ^= (*(_DWORD *)v55 ^ ((unsigned __int8)PsGetPagePriorityThread(v56) << 18)) & 0x1C0000;
              *((_QWORD *)v55 + 10) = 0LL;
              v57 = v55 + 48;
              v58 = *(_QWORD **)(v20 + 240);
              if ( *v58 != v20 + 232 )
LABEL_95:
                __fastfail(3u);
              *v57 = v20 + 232;
              *((_QWORD *)v55 + 13) = v58;
              *v58 = v57;
              *(_QWORD *)(v20 + 240) = v57;
              *(_QWORD *)(Object + 48) = v55;
              goto LABEL_99;
            }
            KeReleaseInStackQueuedSpinLock(&v67);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          LOBYTE(v22) = 0;
          PrivateVolumeCacheMap = -1073741670;
          v69 = 0;
          v11 = 0LL;
          v65 = 0;
          goto LABEL_101;
        }
      }
      else if ( !v45 )
      {
        CcIncrementOpenCount(v20, 256LL, 0);
        v47 = *(_QWORD *)(v20 + 184);
        *(_DWORD *)(v20 + 152) |= v48;
        if ( v47 )
        {
          *(_WORD *)v47 = v46;
          *(_BYTE *)(v47 + 2) = 6;
          *(_DWORD *)(v47 + 4) = 0;
          v49 = (_QWORD *)(v47 + 8);
          v49[1] = v49;
          *v49 = v49;
        }
        KeReleaseInStackQueuedSpinLock(&v67);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v69 = 1;
        if ( *(_QWORD *)(v20 + 176) )
        {
          PrivateVolumeCacheMap = -1073741811;
        }
        else
        {
          if ( !Objecta )
            KeBugCheckEx(0x34u, 0x8CCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_QWORD *)(v20 + 176) = Objecta;
          v50 = *(_QWORD *)(Object + 24);
          Objecta = 0LL;
          if ( (*(_BYTE *)(v50 + 6) & 1) == 0 && !*(_QWORD *)(Object + 32) )
          {
            MmDisableModifiedWriteOfSection(*(_QWORD **)(Object + 40));
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v67);
            *(_DWORD *)(v20 + 152) |= 0x200u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          PrivateVolumeCacheMap = CcCreateVacbArray(v20, v75.m128i_i64[0]);
          if ( PrivateVolumeCacheMap >= 0 )
          {
            if ( (v73 & 1) != 0 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v67);
              *(_DWORD *)(v20 + 152) |= 0x40000000u;
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v67);
            v51 = *(struct _KEVENT **)(v20 + 184);
            *(_DWORD *)(v20 + 152) &= ~0x100u;
            if ( v51 )
              KeSetEvent(v51, 0, 0);
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v67);
            goto LABEL_86;
          }
        }
LABEL_101:
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v67);
        if ( v69 )
        {
          v59 = *(struct _KEVENT **)(v20 + 184);
          if ( v59 )
            KeSetEvent(v59, 0, 0);
          *(_DWORD *)(v20 + 152) &= ~0x100u;
        }
        if ( --*(_DWORD *)(v20 + 4) || (*(_DWORD *)(v20 + 152) & 0x20) != 0 || *(_DWORD *)(v20 + 112) )
        {
          KeReleaseInStackQueuedSpinLock(&v67);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        else
        {
          CcDeleteSharedCacheMap((_QWORD *)v20, &LockHandle, &v67, 0, 0LL);
        }
        goto LABEL_139;
      }
      if ( !*(_QWORD *)(v20 + 184) )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *(_QWORD *)(v20 + 184) = PoolWithTag;
        if ( !PoolWithTag )
        {
          KeReleaseInStackQueuedSpinLock(&v67);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          LODWORD(v12) = 0;
LABEL_78:
          PrivateVolumeCacheMap = -1073741670;
LABEL_119:
          v62 = v22;
          if ( !v20 )
          {
            LOBYTE(v22) = 0;
LABEL_134:
            if ( v62 )
              KeReleaseInStackQueuedSpinLock(&v67);
            if ( (_DWORD)v12 )
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            v12 = v70;
LABEL_139:
            CcFreeSharedCacheMapIgnoreNull(v11);
            CcFreePrivateCacheMapIgnoreNull(v12);
            if ( Objecta )
              ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
            if ( PrivateVolumeCacheMap < 0 )
            {
              if ( v65 != (_BYTE)v22 )
                KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
              RtlRaiseStatus(PrivateVolumeCacheMap);
            }
            return;
          }
          v65 = 0;
          if ( (_DWORD)v12 )
          {
LABEL_122:
            v81 = v22;
            v62 = v22;
            if ( v14 )
            {
              v81 = v22;
              if ( !(_DWORD)v22 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v67);
                v62 = 1;
                v81 = 1;
              }
            }
            LOBYTE(v22) = 0;
            if ( !v66 && !*(_DWORD *)(v20 + 112) && *(_DWORD *)(v20 + 4) )
              CcInsertIntoCleanSharedCacheMapList(v20);
            v63 = *(_QWORD *)(v20 + 280);
            if ( v63 )
            {
              do
              {
                v64 = v63 & 0xFFFFFFFFFFFFFFFEuLL;
                v22 = *(_QWORD *)v64;
                KeSetEvent((PRKEVENT)(v64 + 8), 0, 0);
                v63 = v22;
              }
              while ( v22 );
              v62 = v81;
            }
            *(_DWORD *)(v20 + 152) &= ~0x10000u;
            *(_QWORD *)(v20 + 280) = 0LL;
            goto LABEL_134;
          }
LABEL_121:
          KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
          LODWORD(v12) = 1;
          goto LABEL_122;
        }
        *(_WORD *)PoolWithTag = 0;
        PoolWithTag[2] = 6;
        *((_DWORD *)PoolWithTag + 1) = 0;
        v53 = PoolWithTag + 8;
        v53[1] = v53;
        *v53 = v53;
      }
      CcIncrementOpenCount(v20, v43, 0);
      KeReleaseInStackQueuedSpinLock(&v67);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeWaitForSingleObject(*(PVOID *)(v20 + 184), Executive, 0, 0, 0LL);
      v54 = *(_DWORD *)(v20 + 160);
      if ( v54 >= 0 )
        goto LABEL_87;
      PrivateVolumeCacheMap = -1073741590;
      if ( FsRtlIsNtstatusExpected(v54) )
        PrivateVolumeCacheMap = v54;
      LOBYTE(v22) = 0;
      goto LABEL_101;
    }
    if ( v11 )
    {
      v20 = (__int64)v11;
      v11 = 0LL;
      v30 = *(_QWORD *)(v20 + 536);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 768), &v67);
      v22 = v30 + 640;
      v31 = (_QWORD *)(v20 + 136);
      v32 = *(_QWORD **)(v22 + 8);
      if ( *v32 != v22 )
        goto LABEL_95;
      *v31 = v22;
      *(_QWORD *)(v20 + 144) = v32;
      *v32 = v31;
      *(_QWORD *)(v22 + 8) = v31;
      LODWORD(v22) = 0;
      if ( CcEnablePerVolumeLazyWriter )
      {
        v33 = (__int64 *)(v20 + 568);
        v34 = *(_QWORD *)(v20 + 600) + 608LL;
        v35 = *(__int64 ***)(*(_QWORD *)(v20 + 600) + 616LL);
        if ( *v35 != (__int64 *)v34 )
          goto LABEL_95;
        *v33 = v34;
        *(_QWORD *)(v20 + 576) = v35;
        *v35 = v33;
        *(_QWORD *)(v34 + 8) = v33;
      }
      v66 = 1;
      *(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL) = v20;
      ObfReferenceObjectWithTag((PVOID)Object, 0x746C6644u);
      goto LABEL_54;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  CcFreeSharedCacheMapIgnoreNull(v11);
  if ( Objecta )
    ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
}
