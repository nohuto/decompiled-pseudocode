/*
 * XREFs of IopConnectInterrupt @ 0x1409C0880
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x14071BAF8 (IopConnectInterruptFullySpecified.c)
 *     IopConnectLineBasedInterrupt @ 0x1409BFBA0 (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x1409BFF30 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x1409C0F8C (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     KeInitializeInterruptEx @ 0x140479468 (KeInitializeInterruptEx.c)
 *     KeQueryActiveGroupCount @ 0x14047C720 (KeQueryActiveGroupCount.c)
 *     KeAllocateInterrupt @ 0x140482F48 (KeAllocateInterrupt.c)
 *     KeFreeInterrupt @ 0x1404932B4 (KeFreeInterrupt.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406F9CE4 (IopDestroyPassiveInterruptBlock.c)
 *     PnpTraceInterruptConnection @ 0x1409C07A0 (PnpTraceInterruptConnection.c)
 *     IopDestroyActiveConnectBlock @ 0x1409C0D28 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x1409C0E78 (IopInitializeActiveConnectBlock.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140AA6280 (IopAllocatePassiveInterruptBlock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectInterrupt(
        __int64 *a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(struct _KINTERRUPT *a1, void *a2),
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  __m128i v14; // xmm0
  int v15; // esi
  __int64 v17; // r15
  int v18; // ebx
  PVOID v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v21; // rax
  _OWORD *v22; // rax
  _OWORD *v23; // rdx
  __int64 v24; // rbx
  __int128 v25; // xmm1
  __int64 v27; // r14
  __int64 Pool2; // rax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  __m128i v32; // xmm0
  char v33; // cl
  unsigned __int8 v34; // bl
  PSLIST_ENTRY Interrupt; // rax
  PSLIST_ENTRY *v36; // rdi
  __int64 v37; // rcx
  _WORD *v38; // rcx
  __int64 v39; // rcx
  unsigned __int16 *v40; // rsi
  _WORD *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  int v46; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v47; // [rsp+90h] [rbp-78h]
  __m128i v48; // [rsp+98h] [rbp-70h] BYREF
  ULONG ProcessorIndexFromNumber; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  _DWORD *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  _BYTE v53[24]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-28h]
  bool v58; // [rsp+190h] [rbp+88h]
  char v59; // [rsp+190h] [rbp+88h]
  char v60; // [rsp+1A0h] [rbp+98h]
  char v61; // [rsp+1A8h] [rbp+A0h]

  memset_0(v53, 0, 0x50uLL);
  *a1 = 0LL;
  ProcNumber = 0;
  v60 = 0;
  v50 = 0LL;
  IopInitializeActiveConnectBlock(a11, v53);
  v14 = *(__m128i *)(a11 + 32);
  v15 = *(_DWORD *)(a11 + 24);
  v47 = *(_DWORD *)(a11 + 12);
  v46 = v15;
  v48 = v14;
  v48.m128i_i64[0] = KeActiveProcessors.Bitmap[(unsigned __int16)_mm_extract_epi16(v14, 4)] & v14.m128i_i64[0];
  v61 = *(_BYTE *)(a11 + 16);
  if ( !*(_DWORD *)(a11 + 8)
    && !(unsigned __int8)guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(a11 + 64))
    && (unsigned int)(*(_DWORD *)(a11 + 20) - 3) <= 1 )
  {
    v60 = 1;
    v46 = 0;
  }
  v58 = a8 == 0;
  if ( (unsigned int)v48.m128i_i16[4] < KeQueryActiveGroupCount()
    && (v17 = v48.m128i_i64[0]) != 0
    && (v48.m128i_i64[0] & KeActiveProcessors.Bitmap[v48.m128i_u16[4]]) == v48.m128i_i64[0]
    && !(v48.m128i_i16[7] | (unsigned __int16)(v48.m128i_i16[6] | v48.m128i_i16[5]))
    && (LOBYTE(v27) = __popcnt(v48.m128i_u64[0]), (_BYTE)v27) )
  {
    Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(8 * (char)v27 + 504), 0x6E696F49u);
    v29 = Pool2;
    if ( Pool2 )
    {
      KeInitializeDpc((PRKDPC)(Pool2 + 432), 0LL, 0LL);
      v30 = v46;
      v31 = v29;
      *(_OWORD *)(v29 + 16) = *(_OWORD *)a11;
      *(_OWORD *)(v29 + 32) = *(_OWORD *)(a11 + 16);
      *(_OWORD *)(v29 + 48) = *(_OWORD *)(a11 + 32);
      *(_OWORD *)(v29 + 64) = *(_OWORD *)(a11 + 48);
      *(_OWORD *)(v29 + 80) = *(_OWORD *)(a11 + 64);
      v32 = v48;
      *(_OWORD *)(v29 + 96) = *(_OWORD *)(a11 + 80);
      *(_DWORD *)(v29 + 40) = v30;
      *(__m128i *)(v29 + 48) = v32;
      if ( a7 )
        v31 = a7;
      *(_BYTE *)(v29 + 400) = v58;
      v52 = v31;
      if ( !a8 )
        v50 = v29 + 408;
      v33 = 0;
      ProcNumber.Group = v48.m128i_u16[4];
      v34 = 0;
      v59 = 0;
      *(_QWORD *)(v29 + 8) = v17;
      ProcNumber.Reserved = 0;
      while ( v33 < (char)v27 )
      {
        if ( _bittest64(&v17, v34) )
        {
          ProcNumber.Number = v34;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          Interrupt = KeAllocateInterrupt(KiProcessorBlock[ProcessorIndexFromNumber]);
          v51 = Interrupt;
          if ( !Interrupt )
          {
            v18 = -1073741670;
LABEL_38:
            if ( (char)v27 > 0 )
            {
              v36 = (PSLIST_ENTRY *)(v29 + 504);
              v27 = (unsigned __int8)v27;
              do
              {
                if ( *v36 )
                  KeFreeInterrupt(*v36);
                ++v36;
                --v27;
              }
              while ( v27 );
            }
            ExFreePoolWithTag((PVOID)v29, 0x6E696F49u);
            goto LABEL_20;
          }
          memset_0(Interrupt, 0, 0x120uLL);
          KeInitializeInterruptEx(
            v51,
            a3,
            a4,
            a5,
            a6,
            v52,
            v50,
            v47,
            v61,
            a8,
            v46,
            a9,
            ProcessorIndexFromNumber,
            v44,
            v60,
            v29 + 16);
          *(_QWORD *)(v29 + 8LL * v59 + 504) = v51;
          v33 = ++v59;
        }
        ++v34;
      }
      if ( !a8 )
      {
        v18 = IopAllocatePassiveInterruptBlock(v29 + 16, &v48);
        if ( v18 < 0 )
          goto LABEL_38;
      }
      v19 = Object;
      if ( Object )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeWaitForSingleObject(v19, Executive, 0, 0, 0LL);
      }
      v18 = KeConnectInterrupt((_QWORD *)(v29 + 504), v27, v29 + 16);
      if ( Object )
      {
        KeSetEvent((PRKEVENT)Object, 0, 0);
        KeLeaveCriticalRegion();
      }
      if ( v18 < 0 )
      {
        if ( !a8 )
          IopDestroyPassiveInterruptBlock(v47);
        goto LABEL_38;
      }
      if ( a2 )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
        if ( !v21 || (*(_DWORD *)(v21 + 396) & 0x20000) != 0 )
        {
          IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
          v37 = *(_QWORD *)(a2 + 8);
          if ( v37 )
          {
            IoAddTriageDumpDataBlock(v37, (PVOID)(unsigned int)*(__int16 *)(v37 + 2));
            v38 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
            if ( *v38 )
            {
              IoAddTriageDumpDataBlock((ULONG)v38, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
            }
          }
          v39 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
          if ( v39 )
          {
            v40 = (unsigned __int16 *)(v39 + 40);
            IoAddTriageDumpDataBlock(v39, (PVOID)0x388);
            if ( *v40 )
            {
              IoAddTriageDumpDataBlock((ULONG)v40, (PVOID)2);
              IoAddTriageDumpDataBlock(*((_QWORD *)v40 + 1), (PVOID)*v40);
            }
            v41 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
            if ( *v41 )
            {
              IoAddTriageDumpDataBlock((ULONG)v41, (PVOID)2);
              IoAddTriageDumpDataBlock(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
                (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
            }
            v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
            if ( v42 && *(_WORD *)(v42 + 56) )
            {
              IoAddTriageDumpDataBlock(v42 + 56, (PVOID)2);
              v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v43 + 64), (PVOID)*(unsigned __int16 *)(v43 + 56));
            }
          }
          KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
        }
        ObfReferenceObjectWithTag((PVOID)a2, 0x54706E50u);
        *(_QWORD *)(v29 + 496) = a2;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 312) + 96LL));
      }
      v22 = *(_OWORD **)(v29 + 504);
      v23 = (_OWORD *)(v29 + 112);
      v24 = 2LL;
      do
      {
        *v23 = *v22;
        v23[1] = v22[1];
        v23[2] = v22[2];
        v23[3] = v22[3];
        v23[4] = v22[4];
        v23[5] = v22[5];
        v23[6] = v22[6];
        v23 += 8;
        v25 = v22[7];
        v22 += 8;
        *(v23 - 1) = v25;
        --v24;
      }
      while ( v24 );
      v18 = 0;
      *v23 = *v22;
      v23[1] = v22[1];
      *a1 = v29;
      PnpTraceInterruptConnection(1);
    }
    else
    {
      v18 = -1073741670;
    }
  }
  else
  {
    v18 = -1073741811;
  }
LABEL_20:
  IopDestroyActiveConnectBlock(v53);
  return (unsigned int)v18;
}
