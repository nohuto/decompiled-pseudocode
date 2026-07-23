/*
 * XREFs of CcInitializeCacheMapInternal @ 0x1404527B0
 * Callers:
 *     CcInitializeCacheMap @ 0x140452750 (CcInitializeCacheMap.c)
 *     CcInitializeCacheMapEx2 @ 0x140452780 (CcInitializeCacheMapEx2.c)
 *     CcInitializeCacheMapEx @ 0x140577390 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     CcIncrementOpenCount @ 0x14027516C (CcIncrementOpenCount.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     CcDeleteSharedCacheMap @ 0x1402E5B98 (CcDeleteSharedCacheMap.c)
 *     CcFreePrivateCacheMapIgnoreNull @ 0x1402E5FF8 (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x1402E6020 (CcFreeSharedCacheMapIgnoreNull.c)
 *     CcGetPrivateVolumeCacheMap @ 0x1402E6230 (CcGetPrivateVolumeCacheMap.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocateFromLookasideListEx @ 0x1403C9D30 (ExAllocateFromLookasideListEx.c)
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     CcCreatePrivateVolumeCacheMap @ 0x14042FE00 (CcCreatePrivateVolumeCacheMap.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140441F1C (CcInsertIntoCleanSharedCacheMapList.c)
 *     FsRtlIsNtstatusExpected @ 0x14044B3D0 (FsRtlIsNtstatusExpected.c)
 *     MmDisableModifiedWriteOfSection @ 0x14044E780 (MmDisableModifiedWriteOfSection.c)
 *     CcGetPartitionWithCreate @ 0x1404D8560 (CcGetPartitionWithCreate.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObDeleteCapturedInsertInfo @ 0x14092FB70 (ObDeleteCapturedInsertInfo.c)
 *     MmCreateCacheManagerSection @ 0x14098B1B8 (MmCreateCacheManagerSection.c)
 *     CcCreateVacbArray @ 0x1409E914C (CcCreateVacbArray.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
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
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  _BYTE *v39; // rbx
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  int v42; // eax
  int v43; // eax
  int Blink_high; // eax
  __int64 v45; // rdx
  unsigned int v46; // eax
  int v47; // eax
  __int16 v48; // r8
  __int64 v49; // rax
  int v50; // edx
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  struct _KEVENT *v56; // rcx
  char *PoolWithTag; // rax
  _QWORD *v58; // rax
  NTSTATUS v59; // ebx
  _WORD *v60; // rbx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _QWORD *v63; // rdx
  struct _KEVENT *v64; // rcx
  BOOLEAN IsNtstatusExpected; // al
  int v66; // ecx
  int v67; // r13d
  __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  char v70; // [rsp+38h] [rbp-81h]
  int v71; // [rsp+3Ch] [rbp-7Dh]
  struct _KLOCK_QUEUE_HANDLE v72; // [rsp+40h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-61h] BYREF
  int v74; // [rsp+70h] [rbp-49h]
  PVOID v75; // [rsp+78h] [rbp-41h]
  PVOID Objecta; // [rsp+80h] [rbp-39h] BYREF
  int v77; // [rsp+88h] [rbp-31h]
  int v78; // [rsp+8Ch] [rbp-2Dh]
  unsigned int v79; // [rsp+90h] [rbp-29h]
  __m128i v80; // [rsp+98h] [rbp-21h]
  __int64 v81; // [rsp+A8h] [rbp-11h]
  _KPROCESS *Process; // [rsp+B0h] [rbp-9h]
  struct _KTHREAD *v83; // [rsp+B8h] [rbp-1h]
  int v86; // [rsp+120h] [rbp+67h]

  CurrentThread = KeGetCurrentThread();
  v74 = 0;
  v9 = -2;
  v71 = 0;
  v75 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v10 = 0;
  v83 = CurrentThread;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v11 = 0LL;
  *(_QWORD *)&v72.OldIrql = 0LL;
  v12 = 0LL;
  PrivateVolumeCacheMap = 0;
  Objecta = 0LL;
  v14 = 0LL;
  if ( !CcDbgDisableDAX )
    v9 = a7;
  v78 = v9;
  v70 = 0;
  LockHandle.LockQueue = 0LL;
  v72.LockQueue = 0LL;
  if ( a4 && a5 || a5 && (*a5 != 1 || a5[1] != 40) )
    RtlRaiseStatus(-1073741811);
  v15 = *a2;
  v16 = _mm_cvtsi128_si32(*a2);
  v17 = a2->m128i_i64[0] == 0;
  v81 = a2[1].m128i_i64[0];
  if ( v17 )
    v16 = 1;
  v77 = CurrentThread->MiscFlags & 0x400;
  v80 = v15;
  v80.m128i_i32[0] = v16;
  v18 = v80.m128i_i64[0] + 0x3FFFF;
  LODWORD(v18) = (v16 + 0x3FFFF) & 0xFFFC0000;
  v80.m128i_i64[0] = v18;
  if ( *(_QWORD *)(*(_QWORD *)(Object + 40) + 8LL) )
    goto LABEL_30;
  while ( 1 )
  {
    v11 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CcSharedCacheMapLookasideList);
    memset_0(v11, 0, 0x268uLL);
    v19 = v10 | 1;
    v20 = (__int64)v11;
    if ( (v78 & 1) == 0 )
      v19 = v10;
    v79 = v19;
    v21 = MmCreateCacheManagerSection(&Objecta, v80.m128i_i64[0], v19, Object);
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
      v66 = PrivateVolumeCacheMap;
      if ( !IsNtstatusExpected )
        v66 = -1073741590;
      PrivateVolumeCacheMap = v66;
      goto LABEL_119;
    }
    ObDeleteCapturedInsertInfo(Objecta);
    v14 = CcGetPartitionWithCreate(*(_QWORD *)(*((_QWORD *)qword_140E300C8
                                               + (*(_WORD *)(**(_QWORD **)(Object + 40) + 60LL) & 0x3FF))
                                             + 184LL));
    if ( !v14 )
      goto LABEL_78;
    *v11 = 40370943;
    v11[139] = -1;
    v11[140] = -1;
    *((_QWORD *)v11 + 12) = Object & -(__int64)(Object != 0);
    *((_QWORD *)v11 + 1) = v80.m128i_i64[1];
    v24 = v81;
    *((_QWORD *)v11 + 5) = v81;
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
    if ( !v77 )
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
    v10 = v79;
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
      v37 = CcGetPrivateVolumeCacheMap(*(_QWORD *)(v29 + 8));
      v38 = *(_QWORD *)(Object + 208);
      v39 = (_BYTE *)v37;
      if ( v38 )
      {
        v40 = *(_QWORD **)(v38 + 72);
        if ( v40 )
        {
          if ( *v40 != *(_QWORD *)(v14 + 8) )
          {
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v72);
            v42 = *(_DWORD *)(v20 + 4);
            if ( !v42 || v42 == *(_DWORD *)(v20 + 544) )
            {
              PrivateVolumeCacheMap = -1073741608;
              CcScheduleLazyWriteScan((_BYTE *)v14, v39, 1, 0);
              v70 = 1;
            }
            else
            {
              PrivateVolumeCacheMap = -1073740277;
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&v72, v41);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            LODWORD(v22) = 0;
            goto LABEL_121;
          }
        }
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v72);
      if ( (*(_DWORD *)(Object + 80) & 0x20) == 0 )
        *(_DWORD *)(v20 + 152) &= ~0x40u;
      v43 = *(_DWORD *)(v20 + 152);
      LODWORD(v22) = 0;
      if ( (v43 & 0x200000) != 0 && v77 )
        *(_DWORD *)(v20 + 152) = v43 & 0xFFDFFFFF;
      Blink_high = HIDWORD(Process[1].CpuPartitionList.Blink);
      if ( Blink_high )
        *(_DWORD *)(v20 + 520) = Blink_high;
LABEL_54:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v72, v36);
      v14 = *(_QWORD *)(v20 + 536);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v72);
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (*(_DWORD *)(v20 + 152) & 0x80000) != 0 )
      {
        DbgPrint("CC: Reusing shared cache map that is already marked for deletion!\n");
        __debugbreak();
      }
      v45 = 256LL;
      v46 = *(_DWORD *)(v20 + 152) & 0xFFFFFFEF;
      *(_DWORD *)(v20 + 152) = v46;
      v47 = v46 & 0x100;
      if ( *(_QWORD *)(v20 + 88) )
      {
        if ( !v47 )
        {
          CcIncrementOpenCount(v20, 256LL, 0);
          KeReleaseInStackQueuedSpinLock(&v72);
LABEL_86:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_87:
          CcFreeSharedCacheMapIgnoreNull(v11);
          v11 = 0LL;
          v60 = (_WORD *)(v20 + 384);
          if ( !*(_WORD *)(v20 + 384) )
            goto LABEL_89;
          while ( 1 )
          {
            v75 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&CcPrivateCacheMapLookasideList);
            v12 = v75;
            if ( !v75 )
              break;
LABEL_89:
            LODWORD(v12) = 1;
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v72);
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
            if ( !*v60 )
              goto LABEL_94;
            if ( v75 )
            {
              v60 = v75;
              v75 = 0LL;
LABEL_94:
              memset_0(v60, 0, 0x78uLL);
              v61 = (__int64)v83;
              *v60 = 766;
              *((_QWORD *)v60 + 1) = Object;
              *((_DWORD *)v60 + 1) = 4095;
              *(_DWORD *)v60 ^= (*(_DWORD *)v60 ^ ((unsigned __int8)PsGetPagePriorityThread(v61) << 18)) & 0x1C0000;
              *((_QWORD *)v60 + 10) = 0LL;
              v62 = v60 + 48;
              v63 = *(_QWORD **)(v20 + 240);
              if ( *v63 != v20 + 232 )
LABEL_95:
                __fastfail(3u);
              *v62 = v20 + 232;
              *((_QWORD *)v60 + 13) = v63;
              *v63 = v62;
              *(_QWORD *)(v20 + 240) = v62;
              *(_QWORD *)(Object + 48) = v60;
              goto LABEL_99;
            }
            KeReleaseInStackQueuedSpinLock(&v72);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          LOBYTE(v22) = 0;
          PrivateVolumeCacheMap = -1073741670;
          v74 = 0;
          v11 = 0LL;
          v70 = 0;
          goto LABEL_101;
        }
      }
      else if ( !v47 )
      {
        CcIncrementOpenCount(v20, 256LL, 0);
        v49 = *(_QWORD *)(v20 + 184);
        *(_DWORD *)(v20 + 152) |= v50;
        if ( v49 )
        {
          *(_WORD *)v49 = v48;
          *(_BYTE *)(v49 + 2) = 6;
          *(_DWORD *)(v49 + 4) = 0;
          v51 = (_QWORD *)(v49 + 8);
          v51[1] = v51;
          *v51 = v51;
        }
        KeReleaseInStackQueuedSpinLock(&v72);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v74 = 1;
        if ( *(_QWORD *)(v20 + 176) )
        {
          PrivateVolumeCacheMap = -1073741811;
        }
        else
        {
          if ( !Objecta )
            KeBugCheckEx(0x34u, 0x8CCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_QWORD *)(v20 + 176) = Objecta;
          v52 = *(_QWORD *)(Object + 24);
          Objecta = 0LL;
          if ( (*(_BYTE *)(v52 + 6) & 1) == 0 && !*(_QWORD *)(Object + 32) )
          {
            MmDisableModifiedWriteOfSection(*(_QWORD **)(Object + 40));
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v72);
            *(_DWORD *)(v20 + 152) |= 0x200u;
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&v72, v53);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          PrivateVolumeCacheMap = CcCreateVacbArray(v20, v80.m128i_i64[0]);
          if ( PrivateVolumeCacheMap >= 0 )
          {
            if ( (v78 & 1) != 0 )
            {
              KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v72);
              *(_DWORD *)(v20 + 152) |= 0x40000000u;
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&v72, v54);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 768), &v72);
            v56 = *(struct _KEVENT **)(v20 + 184);
            *(_DWORD *)(v20 + 152) &= ~0x100u;
            if ( v56 )
              KeSetEvent(v56, 0, 0);
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&v72, v55);
            goto LABEL_86;
          }
        }
LABEL_101:
        KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v72);
        if ( v74 )
        {
          v64 = *(struct _KEVENT **)(v20 + 184);
          if ( v64 )
            KeSetEvent(v64, 0, 0);
          *(_DWORD *)(v20 + 152) &= ~0x100u;
        }
        if ( --*(_DWORD *)(v20 + 4) || (*(_DWORD *)(v20 + 152) & 0x20) != 0 || *(_DWORD *)(v20 + 112) )
        {
          KeReleaseInStackQueuedSpinLock(&v72);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        else
        {
          CcDeleteSharedCacheMap((_QWORD *)v20, &LockHandle, &v72, 0, 0LL);
        }
        goto LABEL_139;
      }
      if ( !*(_QWORD *)(v20 + 184) )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x76456343u);
        *(_QWORD *)(v20 + 184) = PoolWithTag;
        if ( !PoolWithTag )
        {
          KeReleaseInStackQueuedSpinLock(&v72);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          LODWORD(v12) = 0;
LABEL_78:
          PrivateVolumeCacheMap = -1073741670;
LABEL_119:
          v67 = v22;
          if ( !v20 )
          {
            LOBYTE(v22) = 0;
LABEL_134:
            if ( v67 )
              KeReleaseInStackQueuedSpinLock(&v72);
            if ( (_DWORD)v12 )
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            v12 = v75;
LABEL_139:
            CcFreeSharedCacheMapIgnoreNull(v11);
            CcFreePrivateCacheMapIgnoreNull(v12);
            if ( Objecta )
              ObDereferenceObjectDeferDeleteWithTag(Objecta, 0x746C6644u);
            if ( PrivateVolumeCacheMap < 0 )
            {
              if ( v70 != (_BYTE)v22 )
                KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
              RtlRaiseStatus(PrivateVolumeCacheMap);
            }
            return;
          }
          v70 = 0;
          if ( (_DWORD)v12 )
          {
LABEL_122:
            v86 = v22;
            v67 = v22;
            if ( v14 )
            {
              v86 = v22;
              if ( !(_DWORD)v22 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &v72);
                v67 = 1;
                v86 = 1;
              }
            }
            LOBYTE(v22) = 0;
            if ( !v71 && !*(_DWORD *)(v20 + 112) && *(_DWORD *)(v20 + 4) )
              CcInsertIntoCleanSharedCacheMapList(v20);
            v68 = *(_QWORD *)(v20 + 280);
            if ( v68 )
            {
              do
              {
                v69 = v68 & 0xFFFFFFFFFFFFFFFEuLL;
                v22 = *(_QWORD *)v69;
                KeSetEvent((PRKEVENT)(v69 + 8), 0, 0);
                v68 = v22;
              }
              while ( v22 );
              v67 = v86;
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
        v58 = PoolWithTag + 8;
        v58[1] = v58;
        *v58 = v58;
      }
      CcIncrementOpenCount(v20, v45, 0);
      KeReleaseInStackQueuedSpinLock(&v72);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeWaitForSingleObject(*(PVOID *)(v20 + 184), Executive, 0, 0, 0LL);
      v59 = *(_DWORD *)(v20 + 160);
      if ( v59 >= 0 )
        goto LABEL_87;
      PrivateVolumeCacheMap = -1073741590;
      if ( FsRtlIsNtstatusExpected(v59) )
        PrivateVolumeCacheMap = v59;
      LOBYTE(v22) = 0;
      goto LABEL_101;
    }
    if ( v11 )
    {
      v20 = (__int64)v11;
      v11 = 0LL;
      v30 = *(_QWORD *)(v20 + 536);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v30 + 768), &v72);
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
      v71 = 1;
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
