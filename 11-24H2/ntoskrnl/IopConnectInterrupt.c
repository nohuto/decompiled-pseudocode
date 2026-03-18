/*
 * XREFs of IopConnectInterrupt @ 0x140A12470
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x14071DF68 (IopConnectInterruptFullySpecified.c)
 *     IopConnectLineBasedInterrupt @ 0x140A11790 (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x140A11B20 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140A12B7C (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KeInitializeInterruptEx @ 0x14047E278 (KeInitializeInterruptEx.c)
 *     KeQueryActiveGroupCount @ 0x140481460 (KeQueryActiveGroupCount.c)
 *     KeAllocateInterrupt @ 0x140487ED8 (KeAllocateInterrupt.c)
 *     KeFreeInterrupt @ 0x140498954 (KeFreeInterrupt.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406FC0A4 (IopDestroyPassiveInterruptBlock.c)
 *     PnpTraceInterruptConnection @ 0x140A12390 (PnpTraceInterruptConnection.c)
 *     IopDestroyActiveConnectBlock @ 0x140A12918 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140A12A68 (IopInitializeActiveConnectBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AAB050 (IopAllocatePassiveInterruptBlock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectInterrupt(
        __int64 *a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(struct _KINTERRUPT *a1, void *a2, __int64 a3, __int64 a4),
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v14; // r8
  __int64 v15; // r9
  __m128i v16; // xmm0
  int v17; // esi
  __int64 v19; // r15
  int v20; // ebx
  PVOID v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rax
  _OWORD *v24; // rax
  _OWORD *v25; // rdx
  __int64 v26; // rbx
  __int128 v27; // xmm1
  __int64 v29; // r14
  __int64 Pool2; // rax
  __int64 v31; // rsi
  int v32; // eax
  __int64 v33; // rcx
  __m128i v34; // xmm0
  char v35; // cl
  unsigned __int8 v36; // bl
  PSLIST_ENTRY Interrupt; // rax
  PSLIST_ENTRY *v38; // rdi
  __int64 v39; // rcx
  _WORD *v40; // rcx
  __int64 v41; // rcx
  unsigned __int16 *v42; // rsi
  _WORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // [rsp+70h] [rbp-98h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v49; // [rsp+90h] [rbp-78h]
  __m128i v50; // [rsp+98h] [rbp-70h] BYREF
  ULONG ProcessorIndexFromNumber; // [rsp+A8h] [rbp-60h]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  _DWORD *v53; // [rsp+B8h] [rbp-50h]
  __int64 v54; // [rsp+C0h] [rbp-48h]
  _BYTE v55[24]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-28h]
  bool v60; // [rsp+190h] [rbp+88h]
  char v61; // [rsp+190h] [rbp+88h]
  char v62; // [rsp+1A0h] [rbp+98h]
  char v63; // [rsp+1A8h] [rbp+A0h]

  memset_0(v55, 0, 0x50uLL);
  *a1 = 0LL;
  ProcNumber = 0;
  v62 = 0;
  v52 = 0LL;
  IopInitializeActiveConnectBlock(a11, v55);
  v16 = *(__m128i *)(a11 + 32);
  v17 = *(_DWORD *)(a11 + 24);
  v49 = *(_DWORD *)(a11 + 12);
  v48 = v17;
  v50 = v16;
  v50.m128i_i64[0] = KeActiveProcessors.Bitmap[(unsigned __int16)_mm_extract_epi16(v16, 4)] & v16.m128i_i64[0];
  v63 = *(_BYTE *)(a11 + 16);
  if ( !*(_DWORD *)(a11 + 8)
    && !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(a11 + 64), v14, v15)
    && (unsigned int)(*(_DWORD *)(a11 + 20) - 3) <= 1 )
  {
    v62 = 1;
    v48 = 0;
  }
  v60 = a8 == 0;
  if ( (unsigned int)v50.m128i_i16[4] < KeQueryActiveGroupCount()
    && (v19 = v50.m128i_i64[0]) != 0
    && (v50.m128i_i64[0] & KeActiveProcessors.Bitmap[v50.m128i_u16[4]]) == v50.m128i_i64[0]
    && !(v50.m128i_i16[7] | (unsigned __int16)(v50.m128i_i16[6] | v50.m128i_i16[5]))
    && (LOBYTE(v29) = __popcnt(v50.m128i_u64[0]), (_BYTE)v29) )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v31 = Pool2;
    if ( Pool2 )
    {
      KeInitializeDpc((PRKDPC)(Pool2 + 432), 0LL, 0LL);
      v32 = v48;
      v33 = v31;
      *(_OWORD *)(v31 + 16) = *(_OWORD *)a11;
      *(_OWORD *)(v31 + 32) = *(_OWORD *)(a11 + 16);
      *(_OWORD *)(v31 + 48) = *(_OWORD *)(a11 + 32);
      *(_OWORD *)(v31 + 64) = *(_OWORD *)(a11 + 48);
      *(_OWORD *)(v31 + 80) = *(_OWORD *)(a11 + 64);
      v34 = v50;
      *(_OWORD *)(v31 + 96) = *(_OWORD *)(a11 + 80);
      *(_DWORD *)(v31 + 40) = v32;
      *(__m128i *)(v31 + 48) = v34;
      if ( a7 )
        v33 = a7;
      *(_BYTE *)(v31 + 400) = v60;
      v54 = v33;
      if ( !a8 )
        v52 = v31 + 408;
      v35 = 0;
      ProcNumber.Group = v50.m128i_u16[4];
      v36 = 0;
      v61 = 0;
      *(_QWORD *)(v31 + 8) = v19;
      ProcNumber.Reserved = 0;
      while ( v35 < (char)v29 )
      {
        if ( _bittest64(&v19, v36) )
        {
          ProcNumber.Number = v36;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          Interrupt = KeAllocateInterrupt(KiProcessorBlock[ProcessorIndexFromNumber]);
          v53 = Interrupt;
          if ( !Interrupt )
          {
            v20 = -1073741670;
LABEL_38:
            if ( (char)v29 > 0 )
            {
              v38 = (PSLIST_ENTRY *)(v31 + 504);
              v29 = (unsigned __int8)v29;
              do
              {
                if ( *v38 )
                  KeFreeInterrupt(*v38);
                ++v38;
                --v29;
              }
              while ( v29 );
            }
            ExFreePoolWithTag((PVOID)v31, 0x6E696F49u);
            goto LABEL_20;
          }
          memset_0(Interrupt, 0, 0x120uLL);
          KeInitializeInterruptEx(
            v53,
            a3,
            a4,
            a5,
            a6,
            v54,
            v52,
            v49,
            v63,
            a8,
            v48,
            a9,
            ProcessorIndexFromNumber,
            v46,
            v62,
            v31 + 16);
          *(_QWORD *)(v31 + 8LL * v61 + 504) = v53;
          v35 = ++v61;
        }
        ++v36;
      }
      if ( !a8 )
      {
        v20 = IopAllocatePassiveInterruptBlock(v31 + 16, &v50);
        if ( v20 < 0 )
          goto LABEL_38;
      }
      v21 = Object;
      if ( Object )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
      }
      v20 = KeConnectInterrupt((_QWORD *)(v31 + 504), v29, v31 + 16);
      if ( Object )
      {
        KeSetEvent((PRKEVENT)Object, 0, 0);
        KeLeaveCriticalRegion();
      }
      if ( v20 < 0 )
      {
        if ( !a8 )
          IopDestroyPassiveInterruptBlock(v49);
        goto LABEL_38;
      }
      if ( a2 )
      {
        v23 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
        if ( !v23 || (*(_DWORD *)(v23 + 396) & 0x20000) != 0 )
        {
          IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
          v39 = *(_QWORD *)(a2 + 8);
          if ( v39 )
          {
            IoAddTriageDumpDataBlock(v39, (PVOID)(unsigned int)*(__int16 *)(v39 + 2));
            v40 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
            if ( *v40 )
            {
              IoAddTriageDumpDataBlock((ULONG)v40, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
            }
          }
          v41 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
          if ( v41 )
          {
            v42 = (unsigned __int16 *)(v41 + 40);
            IoAddTriageDumpDataBlock(v41, (PVOID)0x388);
            if ( *v42 )
            {
              IoAddTriageDumpDataBlock((ULONG)v42, (PVOID)2);
              IoAddTriageDumpDataBlock(*((_QWORD *)v42 + 1), (PVOID)*v42);
            }
            v43 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
            if ( *v43 )
            {
              IoAddTriageDumpDataBlock((ULONG)v43, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
            }
            v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            if ( v44 && *(_WORD *)(v44 + 56) )
            {
              IoAddTriageDumpDataBlock(v44 + 56, (PVOID)2);
              v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v45 + 64), (PVOID)*(unsigned __int16 *)(v45 + 56));
            }
          }
          KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
        }
        ObfReferenceObjectWithTag((PVOID)a2, 0x54706E50u);
        *(_QWORD *)(v31 + 496) = a2;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 312) + 96LL));
      }
      v24 = *(_OWORD **)(v31 + 504);
      v25 = (_OWORD *)(v31 + 112);
      v26 = 2LL;
      do
      {
        *v25 = *v24;
        v25[1] = v24[1];
        v25[2] = v24[2];
        v25[3] = v24[3];
        v25[4] = v24[4];
        v25[5] = v24[5];
        v25[6] = v24[6];
        v25 += 8;
        v27 = v24[7];
        v24 += 8;
        *(v25 - 1) = v27;
        --v26;
      }
      while ( v26 );
      v20 = 0;
      *v25 = *v24;
      v25[1] = v24[1];
      *a1 = v31;
      PnpTraceInterruptConnection(1);
    }
    else
    {
      v20 = -1073741670;
    }
  }
  else
  {
    v20 = -1073741811;
  }
LABEL_20:
  IopDestroyActiveConnectBlock(v55);
  return (unsigned int)v20;
}
