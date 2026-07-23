/*
 * XREFs of NtGetWriteWatch @ 0x1404F10C0
 * Callers:
 *     <none>
 * Callees:
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiGetVadMandatoryPageSize @ 0x14044D544 (MiGetVadMandatoryPageSize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140847A60 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  unsigned __int64 v8; // rsi
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _BYTE *Pool; // rcx
  unsigned __int64 v19; // r13
  int v20; // ebx
  int v21; // edi
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 VadMandatoryPageSize; // rax
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // r8
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rt2
  __int64 v34; // rsi
  __int64 v35; // r9
  unsigned __int64 v36; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // r11
  __int64 *v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // rdx
  _QWORD *i; // r14
  ULONG_PTR v50; // rcx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r10
  __int64 v53; // r11
  unsigned __int64 LeafVa; // r12
  _QWORD *v55; // rsi
  unsigned int v56; // r15d
  __int64 *v57; // rax
  unsigned int v58; // r15d
  __int64 *v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 *v62; // r8
  _BYTE *v63; // rbx
  unsigned __int64 v64; // rsi
  char v65; // [rsp+40h] [rbp-928h]
  unsigned __int64 v66; // [rsp+48h] [rbp-920h] BYREF
  __int64 *ProcessorFlushList; // [rsp+50h] [rbp-918h]
  __int64 v68; // [rsp+58h] [rbp-910h]
  ULONG v69; // [rsp+60h] [rbp-908h]
  unsigned __int64 LockedVadEvent; // [rsp+68h] [rbp-900h]
  void *Src; // [rsp+70h] [rbp-8F8h]
  unsigned int v72; // [rsp+78h] [rbp-8F0h] BYREF
  PVOID Object; // [rsp+80h] [rbp-8E8h] BYREF
  unsigned __int64 v74; // [rsp+88h] [rbp-8E0h]
  __int64 v75; // [rsp+90h] [rbp-8D8h]
  __int64 *v76; // [rsp+98h] [rbp-8D0h]
  unsigned __int64 v77; // [rsp+A0h] [rbp-8C8h]
  unsigned __int64 v78; // [rsp+A8h] [rbp-8C0h]
  unsigned __int64 v79; // [rsp+B0h] [rbp-8B8h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-8B0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+C0h] [rbp-8A8h]
  PVOID P; // [rsp+C8h] [rbp-8A0h]
  HANDLE v83; // [rsp+D0h] [rbp-898h]
  void *v84; // [rsp+D8h] [rbp-890h]
  PULONG_PTR v85; // [rsp+E0h] [rbp-888h]
  PULONG v86; // [rsp+E8h] [rbp-880h]
  _OWORD v87[3]; // [rsp+F0h] [rbp-878h] BYREF
  _BYTE v88[2048]; // [rsp+120h] [rbp-848h] BYREF

  v8 = (unsigned __int64)BaseAddress;
  v69 = Flags;
  v83 = ProcessHandle;
  v86 = Granularity;
  v85 = EntriesInUserAddressArray;
  v10 = (__int64)UserAddressArray;
  v84 = UserAddressArray;
  Object = 0LL;
  v72 = 0;
  LODWORD(v66) = 0;
  memset(v87, 0, sizeof(v87));
  ProcessorFlushList = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
      return -1073741583;
    v15 = 0x7FFFFFFF0000LL;
    if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EntriesInUserAddressArray < 0x7FFFFFFF0000LL )
      v16 = (__int64)EntriesInUserAddressArray;
    *(_QWORD *)v16 = *(_QWORD *)v16;
    v17 = *EntriesInUserAddressArray;
    v77 = v17;
    if ( !v17 )
      return -1073741581;
    if ( v17 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v17, 8u);
    if ( (unsigned __int64)Granularity < 0x7FFFFFFF0000LL )
      v15 = (__int64)Granularity;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v77 = *EntriesInUserAddressArray;
  }
  Pool = v88;
  Src = v88;
  if ( v77 > 0x100 )
  {
    Pool = (_BYTE *)MiAllocatePool(0x41uLL, 8 * v77, 1665625421);
    Src = Pool;
    if ( !Pool )
      return -1073741670;
  }
  v75 = 1LL;
  v19 = 0LL;
  v76 = (__int64 *)Pool;
  P = 0LL;
  v20 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    v21 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(v66) = v21;
    if ( v21 < 0 )
    {
LABEL_119:
      v63 = Src;
      goto LABEL_120;
    }
  }
  v74 = 0LL;
  v22 = RegionSize + v8 - 1;
  if ( v8 > v22 )
  {
    v21 = -1073741582;
    goto LABEL_109;
  }
  if ( Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v87);
    v20 = 1;
  }
  v68 = (__int64)Object + 1024;
  v23 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = MiObtainReferencedVadEx(v8, 0LL, (int *)&v66, v10);
  BaseAddress = (PVOID)v24;
  if ( !v24 )
  {
    v21 = v66;
    if ( (_DWORD)v66 != -1073741664 )
      goto LABEL_109;
    goto LABEL_108;
  }
  P = (PVOID)v24;
  v10 = *(unsigned int *)(v24 + 48);
  if ( (*(_DWORD *)(v24 + 48) & 0x600000) != 0x600000
    || v22 > (((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) << 12) | 0xFFF) )
  {
LABEL_108:
    v21 = -1073741585;
    goto LABEL_109;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize(v24);
  v27 = VadMandatoryPageSize;
  v75 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize > 1 )
  {
    v28 = (VadMandatoryPageSize << 12) - 1;
    if ( (v8 & v28) != 0 )
    {
      v21 = -1073741583;
      goto LABEL_109;
    }
    if ( (RegionSize & v28) != 0 )
    {
      v21 = -1073741582;
      goto LABEL_109;
    }
  }
  if ( (v10 & 0xA00000) == 0xA00000 )
  {
    v29 = 16LL;
    if ( MiVadPageSizes[(v26 >> 19) & 3] != 16 )
      v29 = 1LL;
  }
  else
  {
    v29 = 1LL;
  }
  v78 = v29;
  LockedVadEvent = MiLocateLockedVadEvent((__int64)BaseAddress, 4);
  v31 = (v8 >> 12) - (*(unsigned int *)(v30 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v30 + 32) << 32));
  v32 = MiGetVadMandatoryPageSize(v30);
  v33 = v31 % v32;
  v66 = v31 / v32;
  v34 = v68;
  v65 = MiLockWorkingSetShared(v68, v33, v32, v35);
  v36 = v80;
  if ( v23 > v80 )
    goto LABEL_101;
  SpinLock = (PEX_SPIN_LOCK)(LockedVadEvent + 8);
  while ( 2 )
  {
    if ( v19 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      v34 = v68;
      MiUnlockPageTableInternal(v68, v19);
      v19 = 0LL;
    }
    if ( (unsigned int)MiWorkingSetIsContended(v34, 0) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared(v34, v65);
      MiLockWorkingSetShared(v34, v37, v38, v39);
    }
    NextPageTable = MiGetNextPageTable(v23, v36, v65, 1, &v72);
    v41 = NextPageTable;
    if ( NextPageTable )
      v19 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    else
      v41 = v36 + 8;
    v42 = ((__int64)(v41 - v23) >> 3) / v27;
    v20 |= 4u;
    ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
    v43 = v66;
    v44 = LockedVadEvent;
    if ( v42 )
    {
      while ( 1 )
      {
        if ( _bittest64(*(const signed __int64 **)(v44 + 24), v43) == 1 )
        {
          if ( (v69 & 1) != 0 )
            _bittestandreset64(*(signed __int64 **)(v44 + 24), v43);
          v45 = v76;
          *v76 = (__int64)(v23 << 25) >> 16;
          v76 = v45 + 1;
          if ( ++v74 == v77 )
            break;
        }
        v66 = ++v43;
        v23 += 8 * v27;
        if ( !--v42 )
          goto LABEL_61;
      }
LABEL_100:
      v34 = v68;
      break;
    }
LABEL_61:
    if ( v23 > v36 )
      goto LABEL_100;
    if ( v72 )
    {
      v23 = v19;
      v46 = ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v47 = 512LL;
      if ( v72 > 1 )
      {
        v48 = v72 - 1;
        do
        {
          v47 <<= 9;
          v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v46 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v48;
        }
        while ( v48 );
      }
      v19 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( i = (_QWORD *)(v23 + 8);
            ((unsigned __int16)i & 0xFFF) != 0 && (unsigned __int64)i <= v46 && (*i & 0x81) == 0x81;
            ++i )
      {
        ;
      }
      v36 = (unsigned __int64)(i - 1);
    }
    else
    {
      v47 = v29;
    }
    v79 = v47 / v27;
    while ( v23 <= v36 )
    {
      LeafVa = MiGetLeafVa(v23);
      v20 &= ~2u;
      v55 = (_QWORD *)v23;
      if ( _bittest64(*(const signed __int64 **)(v53 + 24), v52) == 1 )
      {
        v20 |= 2u;
        if ( (v69 & 1) == 0 )
          goto LABEL_91;
        _bittestandreset64(*(signed __int64 **)(v53 + 24), v52);
        v56 = 0;
        do
        {
          LOBYTE(v50) = (*v55 & 0x42) != 0;
          if ( ((unsigned __int8)v50 & ((*v55 & 1) != 0)) != 0 )
          {
            v57 = ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList((__int64)ProcessorFlushList, v68, *((_DWORD *)ProcessorFlushList + 3), 0, 10);
              v57 = (__int64 *)v50;
            }
            MiMakePteClean(v50, (ULONG_PTR)v55, (__int64)v57);
          }
          ++v55;
          ++v56;
        }
        while ( v56 < v78 );
      }
      else
      {
        v58 = 0;
        do
        {
          LOBYTE(v50) = (*v55 & 0x42) != 0;
          if ( ((unsigned __int8)v50 & ((*v55 & 1) != 0)) != 0 )
          {
            v20 |= 2u;
            if ( (v69 & 1) == 0 )
              break;
            v59 = ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList((__int64)ProcessorFlushList, v68, *((_DWORD *)ProcessorFlushList + 3), 0, 10);
              v59 = (__int64 *)v50;
            }
            MiMakePteClean(v50, (ULONG_PTR)v55, (__int64)v59);
          }
          ++v55;
          ++v58;
        }
        while ( v58 < v78 );
      }
      v51 = v79;
      v27 = v75;
      v52 = v66;
LABEL_91:
      if ( (v20 & 2) != 0 )
      {
        v60 = 0LL;
        if ( v51 )
        {
          v61 = v74;
          v62 = (unsigned __int64 *)v76;
          do
          {
            *v62++ = LeafVa;
            v76 = (__int64 *)v62;
            v74 = ++v61;
            if ( v61 == v77 )
              goto LABEL_100;
            ++v60;
            LeafVa += v27 << 12;
          }
          while ( v60 < v51 );
        }
      }
      v66 = v51 + v52;
      v29 = v78;
      v23 += 8 * v78;
      if ( (v23 & 0xFFF) == 0 )
        break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    v20 &= ~4u;
    v23 = ((MiGetLeafVa(v23) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v36 = v80;
    v34 = v68;
    if ( v23 <= v80 )
      continue;
    break;
  }
LABEL_101:
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( (v20 & 4) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
  if ( v19 )
    MiUnlockPageTableInternal(v34, v19);
  MiUnlockWorkingSetShared(v34, v65);
  v21 = 0;
LABEL_109:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v20 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v87, 0, (__int64)BaseAddress, v10);
  if ( v83 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( v21 )
    goto LABEL_119;
  v63 = Src;
  if ( v84 )
  {
    v64 = v74;
    memmove(v84, Src, 8 * v74);
    *v85 = v64;
  }
  *v86 = (_DWORD)v75 << 12;
LABEL_120:
  if ( v63 != v88 )
    ExFreePoolWithTag(v63, 0);
  return v21;
}
