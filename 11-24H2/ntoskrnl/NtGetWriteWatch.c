/*
 * XREFs of NtGetWriteWatch @ 0x1404F3710
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiMakePteClean @ 0x1404326A0 (MiMakePteClean.c)
 *     MiGetVadMandatoryPageSize @ 0x140458234 (MiGetVadMandatoryPageSize.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B6F80 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084B7A0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtGetWriteWatch(
        HANDLE Handle,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        _QWORD *a6,
        unsigned __int64 a7)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _BYTE *Pool; // rcx
  unsigned __int64 v18; // r13
  int v19; // ebx
  NTSTATUS v20; // edi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 VadMandatoryPageSize; // rax
  __int64 v25; // r8
  int v26; // r9d
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // r12
  __int64 v31; // r8
  unsigned __int64 v32; // rsi
  __int64 v33; // rsi
  unsigned __int64 v34; // r14
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r10
  unsigned __int64 v39; // r11
  __int64 *v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r8
  __int64 v43; // rdx
  _QWORD *i; // r14
  __int64 v45; // rcx
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r10
  __int64 v48; // r11
  unsigned __int64 LeafVa; // r12
  _QWORD *v50; // rsi
  unsigned int v51; // r15d
  __int64 *v52; // rax
  unsigned int v53; // r15d
  __int64 *v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 *v57; // r8
  _BYTE *v58; // rbx
  __int64 v59; // rsi
  char v60; // [rsp+40h] [rbp-928h]
  unsigned __int64 v61; // [rsp+48h] [rbp-920h] BYREF
  __int64 *ProcessorFlushList; // [rsp+50h] [rbp-918h]
  __int64 v63; // [rsp+58h] [rbp-910h]
  int v64; // [rsp+60h] [rbp-908h]
  unsigned __int64 LockedVadEvent; // [rsp+68h] [rbp-900h]
  void *Src; // [rsp+70h] [rbp-8F8h]
  unsigned int v67; // [rsp+78h] [rbp-8F0h] BYREF
  PVOID Object; // [rsp+80h] [rbp-8E8h] BYREF
  __int64 v69; // [rsp+88h] [rbp-8E0h]
  __int64 v70; // [rsp+90h] [rbp-8D8h]
  __int64 *v71; // [rsp+98h] [rbp-8D0h]
  unsigned __int64 v72; // [rsp+A0h] [rbp-8C8h]
  unsigned __int64 v73; // [rsp+A8h] [rbp-8C0h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-8B8h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-8B0h]
  PEX_SPIN_LOCK SpinLock; // [rsp+C0h] [rbp-8A8h]
  PVOID P; // [rsp+C8h] [rbp-8A0h]
  HANDLE v78; // [rsp+D0h] [rbp-898h]
  void *v79; // [rsp+D8h] [rbp-890h]
  _QWORD *v80; // [rsp+E0h] [rbp-888h]
  _DWORD *v81; // [rsp+E8h] [rbp-880h]
  _OWORD v82[3]; // [rsp+F0h] [rbp-878h] BYREF
  _BYTE v83[2048]; // [rsp+120h] [rbp-848h] BYREF

  v64 = a2;
  v78 = Handle;
  v81 = (_DWORD *)a7;
  v80 = a6;
  v79 = (void *)Address;
  Object = 0LL;
  v67 = 0;
  LODWORD(v61) = 0;
  memset(v82, 0, sizeof(v82));
  ProcessorFlushList = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( a3 > 0x7FFFFFFEFFFFLL )
      return 3221225713LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( 0x7FFFFFFF0000LL - a3 < a4 )
      return 3221225714LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v15 = (__int64)a6;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = *a6;
    v72 = v16;
    if ( !v16 )
      return 3221225715LL;
    if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
      return 3221225715LL;
    ProbeForWrite(Address, 8 * v16, 8u);
    if ( a7 < 0x7FFFFFFF0000LL )
      v14 = a7;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  else
  {
    v72 = *a6;
  }
  Pool = v83;
  Src = v83;
  if ( v72 > 0x100 )
  {
    Pool = (_BYTE *)MiAllocatePool(0x41uLL, 8 * v72, 1665625421);
    Src = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  v70 = 1LL;
  v18 = 0LL;
  v71 = (__int64 *)Pool;
  P = 0LL;
  v19 = 0;
  if ( Handle == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    v20 = ObReferenceObjectByHandleWithTag(
            Handle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    LODWORD(v61) = v20;
    if ( v20 < 0 )
    {
LABEL_119:
      v58 = Src;
      goto LABEL_120;
    }
  }
  v69 = 0LL;
  v21 = a4 + a3 - 1;
  if ( a3 > v21 )
  {
    v20 = -1073741582;
    goto LABEL_109;
  }
  if ( Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v82);
    v19 = 1;
  }
  v63 = (__int64)Object + 1024;
  v22 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = MiObtainReferencedVadEx(a3, 0LL, (int *)&v61);
  if ( !v23 )
  {
    v20 = v61;
    if ( (_DWORD)v61 != -1073741664 )
      goto LABEL_109;
    goto LABEL_108;
  }
  P = (PVOID)v23;
  if ( (*(_DWORD *)(v23 + 48) & 0x600000) != 0x600000
    || v21 > (((*(unsigned int *)(v23 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v23 + 33) << 32)) << 12) | 0xFFF) )
  {
LABEL_108:
    v20 = -1073741585;
    goto LABEL_109;
  }
  VadMandatoryPageSize = MiGetVadMandatoryPageSize(v23);
  v28 = VadMandatoryPageSize;
  v70 = VadMandatoryPageSize;
  if ( VadMandatoryPageSize > 1 )
  {
    v29 = (VadMandatoryPageSize << 12) - 1;
    if ( (a3 & v29) != 0 )
    {
      v20 = -1073741583;
      goto LABEL_109;
    }
    if ( (a4 & v29) != 0 )
    {
      v20 = -1073741582;
      goto LABEL_109;
    }
  }
  if ( (v26 & 0xA00000) == 0xA00000 )
  {
    v30 = 16LL;
    if ( MiVadPageSizes[(v27 >> 19) & 3] != 16 )
      v30 = 1LL;
  }
  else
  {
    v30 = 1LL;
  }
  v73 = v30;
  LockedVadEvent = MiLocateLockedVadEvent(v25, 4);
  v32 = (a3 >> 12) - (*(unsigned int *)(v31 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v31 + 32) << 32));
  v61 = v32 / MiGetVadMandatoryPageSize(v31);
  v33 = v63;
  v60 = MiLockWorkingSetShared(v63);
  v34 = v75;
  if ( v22 > v75 )
    goto LABEL_101;
  SpinLock = (PEX_SPIN_LOCK)(LockedVadEvent + 8);
  while ( 2 )
  {
    if ( v18 )
    {
      if ( ProcessorFlushList )
      {
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
        ProcessorFlushList = 0LL;
      }
      v33 = v63;
      MiUnlockPageTableInternal(v63, v18);
      v18 = 0LL;
    }
    if ( (unsigned int)MiWorkingSetIsContended(v33, 0) || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetShared(v33, v60);
      MiLockWorkingSetShared(v33);
    }
    NextPageTable = MiGetNextPageTable(v22, v34, v60, 1, &v67);
    v36 = NextPageTable;
    if ( NextPageTable )
      v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    else
      v36 = v34 + 8;
    v37 = ((__int64)(v36 - v22) >> 3) / v28;
    v19 |= 4u;
    ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
    v38 = v61;
    v39 = LockedVadEvent;
    if ( v37 )
    {
      while ( 1 )
      {
        if ( _bittest64(*(const signed __int64 **)(v39 + 24), v38) == 1 )
        {
          if ( (v64 & 1) != 0 )
            _bittestandreset64(*(signed __int64 **)(v39 + 24), v38);
          v40 = v71;
          *v71 = (__int64)(v22 << 25) >> 16;
          v71 = v40 + 1;
          if ( ++v69 == v72 )
            break;
        }
        v61 = ++v38;
        v22 += 8 * v28;
        if ( !--v37 )
          goto LABEL_61;
      }
LABEL_100:
      v33 = v63;
      break;
    }
LABEL_61:
    if ( v22 > v34 )
      goto LABEL_100;
    if ( v67 )
    {
      v22 = v18;
      v41 = ((v75 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v42 = 512LL;
      if ( v67 > 1 )
      {
        v43 = v67 - 1;
        do
        {
          v42 <<= 9;
          v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v41 = ((v41 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v43;
        }
        while ( v43 );
      }
      v18 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      for ( i = (_QWORD *)(v22 + 8);
            ((unsigned __int16)i & 0xFFF) != 0 && (unsigned __int64)i <= v41 && (*i & 0x81) == 0x81;
            ++i )
      {
        ;
      }
      v34 = (unsigned __int64)(i - 1);
    }
    else
    {
      v42 = v30;
    }
    v74 = v42 / v28;
    while ( v22 <= v34 )
    {
      LeafVa = MiGetLeafVa(v22);
      v19 &= ~2u;
      v50 = (_QWORD *)v22;
      if ( _bittest64(*(const signed __int64 **)(v48 + 24), v47) == 1 )
      {
        v19 |= 2u;
        if ( (v64 & 1) == 0 )
          goto LABEL_91;
        _bittestandreset64(*(signed __int64 **)(v48 + 24), v47);
        v51 = 0;
        do
        {
          LOBYTE(v45) = (*v50 & 0x42) != 0;
          if ( ((unsigned __int8)v45 & ((*v50 & 1) != 0)) != 0 )
          {
            v52 = ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList((__int64)ProcessorFlushList, v63, *((_DWORD *)ProcessorFlushList + 3), 0, 10);
              v52 = (__int64 *)v45;
            }
            MiMakePteClean(v45, (unsigned __int64)v50, (__int64)v52);
          }
          ++v50;
          ++v51;
        }
        while ( v51 < v73 );
      }
      else
      {
        v53 = 0;
        do
        {
          LOBYTE(v45) = (*v50 & 0x42) != 0;
          if ( ((unsigned __int8)v45 & ((*v50 & 1) != 0)) != 0 )
          {
            v19 |= 2u;
            if ( (v64 & 1) == 0 )
              break;
            v54 = ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              MiInitializeTbFlushList((__int64)ProcessorFlushList, v63, *((_DWORD *)ProcessorFlushList + 3), 0, 10);
              v54 = (__int64 *)v45;
            }
            MiMakePteClean(v45, (unsigned __int64)v50, (__int64)v54);
          }
          ++v50;
          ++v53;
        }
        while ( v53 < v73 );
      }
      v46 = v74;
      v28 = v70;
      v47 = v61;
LABEL_91:
      if ( (v19 & 2) != 0 )
      {
        v55 = 0LL;
        if ( v46 )
        {
          v56 = v69;
          v57 = (unsigned __int64 *)v71;
          do
          {
            *v57++ = LeafVa;
            v71 = (__int64 *)v57;
            v69 = ++v56;
            if ( v56 == v72 )
              goto LABEL_100;
            ++v55;
            LeafVa += v28 << 12;
          }
          while ( v55 < v46 );
        }
      }
      v61 = v46 + v47;
      v30 = v73;
      v22 += 8 * v73;
      if ( (v22 & 0xFFF) == 0 )
        break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    v19 &= ~4u;
    v22 = ((MiGetLeafVa(v22) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v34 = v75;
    v33 = v63;
    if ( v22 <= v75 )
      continue;
    break;
  }
LABEL_101:
  if ( ProcessorFlushList )
  {
    MiFlushTbList((__int64)ProcessorFlushList);
    MiReleaseProcessorFlushList();
  }
  if ( (v19 & 4) != 0 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
  if ( v18 )
    MiUnlockPageTableInternal(v33, v18);
  MiUnlockWorkingSetShared(v33, v60);
  v20 = 0;
LABEL_109:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v19 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v82, 0);
  if ( v78 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
  if ( v20 )
    goto LABEL_119;
  v58 = Src;
  if ( v79 )
  {
    v59 = v69;
    memmove(v79, Src, 8 * v69);
    *v80 = v59;
  }
  *v81 = (_DWORD)v70 << 12;
LABEL_120:
  if ( v58 != v83 )
    ExFreePoolWithTag(v58, 0);
  return (unsigned int)v20;
}
