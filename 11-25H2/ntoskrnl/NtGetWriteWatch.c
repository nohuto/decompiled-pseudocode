/*
 * XREFs of NtGetWriteWatch @ 0x1402A5800
 * Callers:
 *     <none>
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x1402A57A0 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14084F9F0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _BYTE *Pool; // r13
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r15
  unsigned __int64 VadMandatoryPageSize; // rax
  int v24; // r8d
  unsigned __int64 v25; // r9
  unsigned __int64 LockedVadEvent; // rax
  unsigned __int64 v27; // r14
  signed __int64 **v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r14
  __int64 v35; // rdx
  int v36; // r8d
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r11
  char v42; // r9
  _QWORD *v43; // r15
  unsigned __int64 v44; // r9
  ULONG_PTR v45; // rcx
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r11
  __int64 LeafVa; // r12
  _QWORD *v49; // rsi
  unsigned int v50; // r14d
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // edi
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rax
  __int64 *v58; // rsi
  __int64 *v59; // rax
  unsigned int v60; // r14d
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned __int64 v64; // rcx
  __int64 v65; // rdx
  _QWORD *i; // r15
  char v67; // [rsp+40h] [rbp-938h]
  __int64 v68; // [rsp+48h] [rbp-930h] BYREF
  __int64 ProcessorFlushList; // [rsp+50h] [rbp-928h]
  ULONG v70; // [rsp+58h] [rbp-920h]
  unsigned __int64 v71; // [rsp+60h] [rbp-918h]
  unsigned __int64 v72; // [rsp+68h] [rbp-910h]
  __int64 v73; // [rsp+70h] [rbp-908h]
  unsigned int v74; // [rsp+78h] [rbp-900h] BYREF
  unsigned __int64 v75; // [rsp+80h] [rbp-8F8h]
  PVOID Object; // [rsp+88h] [rbp-8F0h] BYREF
  unsigned __int64 v77; // [rsp+90h] [rbp-8E8h]
  __int64 *v78; // [rsp+98h] [rbp-8E0h]
  unsigned __int64 v79; // [rsp+A0h] [rbp-8D8h]
  signed __int64 **v80; // [rsp+A8h] [rbp-8D0h]
  unsigned __int64 v81; // [rsp+B0h] [rbp-8C8h]
  __int64 v82; // [rsp+B8h] [rbp-8C0h]
  unsigned __int64 v83; // [rsp+C0h] [rbp-8B8h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-8B0h]
  PVOID P; // [rsp+D0h] [rbp-8A8h]
  _BYTE *v86; // [rsp+D8h] [rbp-8A0h]
  HANDLE v87; // [rsp+E0h] [rbp-898h]
  void *v88; // [rsp+E8h] [rbp-890h]
  PULONG_PTR v89; // [rsp+F0h] [rbp-888h]
  PULONG v90; // [rsp+F8h] [rbp-880h]
  _OWORD v91[3]; // [rsp+100h] [rbp-878h] BYREF
  _BYTE Src[2048]; // [rsp+130h] [rbp-848h] BYREF

  v70 = Flags;
  v87 = ProcessHandle;
  v90 = Granularity;
  v89 = EntriesInUserAddressArray;
  v88 = UserAddressArray;
  v10 = 0;
  Object = 0LL;
  v74 = 0;
  LODWORD(v68) = 0;
  memset(v91, 0, sizeof(v91));
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
    v14 = 0x7FFFFFFF0000LL;
    if ( 0x7FFFFFFF0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EntriesInUserAddressArray < 0x7FFFFFFF0000LL )
      v15 = (__int64)EntriesInUserAddressArray;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = *EntriesInUserAddressArray;
    v79 = v16;
    if ( !v16 )
      return -1073741581;
    if ( v16 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v16, 8u);
    if ( (unsigned __int64)Granularity < 0x7FFFFFFF0000LL )
      v14 = (__int64)Granularity;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v10 = 0;
  }
  else
  {
    v79 = *EntriesInUserAddressArray;
  }
  Pool = Src;
  v86 = Src;
  if ( v79 > 0x100 )
  {
    Pool = (_BYTE *)MiAllocatePool(0x41uLL, 8 * v79);
    v86 = Pool;
    if ( !Pool )
      return -1073741670;
  }
  v71 = 1LL;
  v75 = 0LL;
  v78 = (__int64 *)Pool;
  P = 0LL;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
    goto LABEL_20;
  }
  v55 = ObReferenceObjectByHandleWithTag(
          ProcessHandle,
          8u,
          (POBJECT_TYPE)PsProcessType,
          PreviousMode,
          0x77576D4Du,
          &Object,
          0LL);
  LODWORD(v68) = v55;
  if ( v55 >= 0 )
  {
LABEL_20:
    v77 = 0LL;
    v19 = (unsigned __int64)BaseAddress + RegionSize - 1;
    if ( (unsigned __int64)BaseAddress <= v19 )
    {
      if ( Process != Object )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v91);
        v10 = 1;
      }
      v73 = (__int64)Object + 1024;
      v20 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v84 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v21 = MiObtainReferencedVadEx(BaseAddress, 0LL, &v68);
      v22 = v21;
      v82 = v21;
      if ( v21 )
      {
        P = (PVOID)v21;
        if ( (*(_DWORD *)(v21 + 48) & 0x600000) == 0x600000
          && v19 <= (((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) << 12) | 0xFFF) )
        {
          VadMandatoryPageSize = MiGetVadMandatoryPageSize(v21);
          v71 = VadMandatoryPageSize;
          if ( VadMandatoryPageSize <= 1 )
          {
LABEL_27:
            if ( (v24 & 0xA00000) == 0xA00000 )
            {
              v63 = 16LL;
              if ( MiVadPageSizes[(v25 >> 19) & 3] != 16 )
                v63 = 1LL;
              v68 = v63;
            }
            else
            {
              v68 = 1LL;
            }
            LockedVadEvent = MiLocateLockedVadEvent(v22, 4);
            v27 = LockedVadEvent;
            v83 = LockedVadEvent;
            if ( MmVadEventBlockFixEnabled )
              v28 = (signed __int64 **)(LockedVadEvent + 24);
            else
              v28 = (signed __int64 **)(LockedVadEvent + 16);
            v80 = v28;
            v29 = ((unsigned __int64)BaseAddress >> 12)
                - (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32));
            v72 = v29 / MiGetVadMandatoryPageSize(v22);
            v30 = v73;
            v67 = MiLockWorkingSetShared(v73);
            v33 = v84;
            if ( v20 <= v84 )
            {
LABEL_32:
              v34 = v75;
              if ( v75 )
              {
                if ( ProcessorFlushList )
                {
                  MiFlushTbList(ProcessorFlushList, v31, v32);
                  MiReleaseProcessorFlushList();
                  ProcessorFlushList = 0LL;
                }
                v30 = v73;
                MiUnlockPageTable(v73, v34);
                v34 = 0LL;
                v75 = 0LL;
              }
              if ( (unsigned int)MiWorkingSetIsContended(v30, 0LL) || KeShouldYieldProcessor() )
              {
                LOBYTE(v35) = v67;
                MiUnlockWorkingSetShared(v30, v35);
                MiLockWorkingSetShared(v30);
              }
              LOBYTE(v36) = v67;
              NextPageTable = MiGetNextPageTable(v20, v33, v36, 1, (__int64)&v74);
              v38 = NextPageTable;
              if ( NextPageTable )
              {
                v34 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v75 = v34;
              }
              else
              {
                v38 = v33 + 8;
              }
              v39 = ((__int64)(v38 - v20) >> 3) / v71;
              if ( MmVadEventBlockFixEnabled )
              {
                v10 |= 8u;
                ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v83 + 8));
              }
              else
              {
                v10 |= 4u;
                MiLockVadCore(v22, 1);
              }
              v40 = v71;
              v41 = v72;
              v31 = (unsigned __int64)v80;
              v42 = v70;
              v32 = 1LL;
              while ( v39 )
              {
                if ( _bittest64(*(const signed __int64 **)v31, v41) == 1 )
                {
                  if ( (v42 & 1) != 0 )
                    _bittestandreset64(*(signed __int64 **)v31, v41);
                  v59 = v78;
                  *v78 = (__int64)(v20 << 25) >> 16;
                  v78 = v59 + 1;
                  v32 = v77 + 1;
                  v77 = v32;
                  if ( v32 == v79 )
                  {
LABEL_60:
                    v30 = v73;
                    v27 = v83;
                    goto LABEL_61;
                  }
                  v32 = 1LL;
                }
                v72 = ++v41;
                v20 += 8 * v40;
                --v39;
              }
              if ( v20 > v33 )
                goto LABEL_60;
              v43 = (_QWORD *)v33;
              if ( v74 )
              {
                v20 = v34;
                v64 = ((v33 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v32 = 512LL;
                if ( v74 > 1 )
                {
                  v65 = v74 - 1;
                  do
                  {
                    v32 <<= 9;
                    v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                    v64 = ((v64 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                    --v65;
                  }
                  while ( v65 );
                }
                v75 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                for ( i = (_QWORD *)(v20 + 8);
                      ((unsigned __int16)i & 0xFFF) != 0 && (unsigned __int64)i <= v64 && (*i & 0x81) == 0x81;
                      ++i )
                {
                  ;
                }
                v43 = i - 1;
              }
              else
              {
                v32 = v68;
              }
              v31 = v32 % v40;
              v44 = v32 / v40;
              v81 = v32 / v40;
              while ( 1 )
              {
                if ( v20 > (unsigned __int64)v43 )
                {
LABEL_57:
                  if ( MmVadEventBlockFixEnabled )
                  {
                    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v83 + 8));
                    v10 &= ~8u;
                    v22 = v82;
                  }
                  else
                  {
                    v22 = v82;
                    MiUnlockVadCore(v82, 0x11u);
                    v10 &= ~4u;
                  }
                  v20 = (((unsigned __int64)MiGetLeafVa(v20, v52, v53, v54) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                  v33 = v84;
                  v30 = v73;
                  if ( v20 > v84 )
                    goto LABEL_60;
                  goto LABEL_32;
                }
                LeafVa = MiGetLeafVa(v20, v31, v32, v44);
                v10 &= ~2u;
                v49 = (_QWORD *)v20;
                if ( _bittest64(*v80, v47) == 1 )
                {
                  v10 |= 2u;
                  if ( (v70 & 1) == 0 )
                  {
                    v31 = v68;
                    goto LABEL_55;
                  }
                  _bittestandreset64(*v80, v47);
                  v60 = 0;
                  v31 = v68;
                  do
                  {
                    LOBYTE(v45) = (*v49 & 0x42) != 0;
                    v32 = 1LL;
                    if ( ((unsigned __int8)v45 & ((*v49 & 1) != 0)) != 0 )
                    {
                      v61 = ProcessorFlushList;
                      if ( !ProcessorFlushList )
                      {
                        ProcessorFlushList = MiGetProcessorFlushList(v45, v31, 1LL, v44);
                        MiInitializeTbFlushList(ProcessorFlushList, v73, *(_DWORD *)(ProcessorFlushList + 12), 0, 10);
                        v61 = v45;
                      }
                      MiMakePteClean(v45, (unsigned __int64)v49, v61);
                      v31 = v68;
                    }
                    ++v49;
                    ++v60;
                  }
                  while ( v60 < v31 );
                }
                else
                {
                  v50 = 0;
                  v31 = v68;
                  v32 = 1LL;
                  do
                  {
                    LOBYTE(v45) = (*v49 & 0x42) != 0;
                    if ( ((unsigned __int8)v45 & ((*v49 & 1) != 0)) != 0 )
                    {
                      v10 |= 2u;
                      if ( (v70 & 1) == 0 )
                        break;
                      v51 = ProcessorFlushList;
                      if ( !ProcessorFlushList )
                      {
                        ProcessorFlushList = MiGetProcessorFlushList(v45, v31, 1LL, v44);
                        MiInitializeTbFlushList(ProcessorFlushList, v73, *(_DWORD *)(ProcessorFlushList + 12), 0, 10);
                        v51 = v45;
                      }
                      MiMakePteClean(v45, (unsigned __int64)v49, v51);
                      v31 = v68;
                      v32 = 1LL;
                    }
                    ++v49;
                    ++v50;
                  }
                  while ( v50 < v31 );
                }
                v44 = v81;
                v46 = v71;
                v47 = v72;
LABEL_55:
                if ( (v10 & 2) != 0 )
                {
                  v57 = 0LL;
                  v32 = v77;
                  v58 = v78;
                  while ( v57 < v44 )
                  {
                    *v58++ = LeafVa;
                    v78 = v58;
                    v77 = ++v32;
                    if ( v32 == v79 )
                    {
                      v22 = v82;
                      goto LABEL_60;
                    }
                    ++v57;
                    LeafVa += v46 << 12;
                  }
                }
                v72 = v44 + v47;
                v20 += 8 * v31;
                if ( (v20 & 0xFFF) == 0 )
                  goto LABEL_57;
              }
            }
LABEL_61:
            if ( ProcessorFlushList )
            {
              MiFlushTbList(ProcessorFlushList, v31, v32);
              MiReleaseProcessorFlushList();
            }
            if ( MmVadEventBlockFixEnabled )
            {
              if ( (v10 & 8) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v27 + 8));
            }
            else if ( (v10 & 4) != 0 )
            {
              MiUnlockVadCore(v22, 0x11u);
            }
            if ( v75 )
              MiUnlockPageTable(v30, v75);
            LOBYTE(v31) = v67;
            MiUnlockWorkingSetShared(v30, v31);
            v55 = 0;
            goto LABEL_69;
          }
          v62 = (VadMandatoryPageSize << 12) - 1;
          if ( ((unsigned __int64)BaseAddress & v62) != 0 )
          {
            v55 = -1073741583;
          }
          else
          {
            if ( (RegionSize & v62) == 0 )
              goto LABEL_27;
            v55 = -1073741582;
          }
LABEL_69:
          if ( P )
            MiUnlockAndDereferenceVad(P);
          if ( (v10 & 1) != 0 )
            KiUnstackDetachProcess((__int64)v91, 0LL);
          if ( v87 != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(Object, 0x77576D4Du);
          if ( !v55 )
          {
            if ( v88 )
            {
              v56 = v77;
              memmove(v88, Pool, 8 * v77);
              *v89 = v56;
            }
            *v90 = (_DWORD)v71 << 12;
          }
          goto LABEL_79;
        }
      }
      else
      {
        v55 = v68;
        if ( (_DWORD)v68 != -1073741664 )
          goto LABEL_69;
      }
      v55 = -1073741585;
      goto LABEL_69;
    }
    v55 = -1073741582;
    goto LABEL_69;
  }
LABEL_79:
  if ( Pool != Src )
    ExFreePoolWithTag(Pool, 0);
  return v55;
}
