/*
 * XREFs of MiAllocateContiguousMemory @ 0x14041182C
 * Callers:
 *     MmAllocateContiguousMemoryEx @ 0x140411210 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x140411690 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x14066F1B0 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExAllocateContiguousHeapPool @ 0x1402C2E9C (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1402C347C (ExInsertPoolTag.c)
 *     MiMapContiguousMemory @ 0x1402E9A9C (MiMapContiguousMemory.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     MiFreeContiguousPages @ 0x1403A95E8 (MiFreeContiguousPages.c)
 *     VfPtMiscPoolNotification @ 0x140400260 (VfPtMiscPoolNotification.c)
 *     EtwTraceContAllocationEvent @ 0x14041138C (EtwTraceContAllocationEvent.c)
 *     VfPtIsAptEnabledOnKernel @ 0x1404128C0 (VfPtIsAptEnabledOnKernel.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D0550 (MiLogPerfMemoryRangeEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        volatile signed __int64 *a7,
        int a8,
        int a9)
{
  int v10; // ebx
  unsigned int v12; // r14d
  unsigned __int64 v13; // r12
  LARGE_INTEGER PerformanceCounter; // rdi
  unsigned __int64 v15; // r15
  unsigned int v16; // eax
  int v17; // r8d
  unsigned __int64 v18; // r11
  unsigned int v19; // r9d
  unsigned int v20; // r10d
  unsigned int v21; // ebx
  _DWORD *v22; // r14
  unsigned int *v23; // r13
  __int64 v24; // r10
  int v25; // r12d
  unsigned __int64 v26; // rsi
  unsigned __int64 ContiguousHeapPool; // rax
  unsigned int v28; // r14d
  unsigned int *v29; // rsi
  int *v30; // rbx
  int ContiguousPages; // r13d
  ULONG_PTR v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  ULONG_PTR v35; // r14
  __int64 v36; // rbx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v38; // r13
  __int64 *v39; // r14
  volatile signed __int32 *v41; // r14
  unsigned int v42; // r12d
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // [rsp+20h] [rbp-E0h]
  int v47[2]; // [rsp+28h] [rbp-D8h]
  int v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+74h] [rbp-8Ch]
  BOOL v50; // [rsp+78h] [rbp-88h]
  unsigned __int64 v51; // [rsp+78h] [rbp-88h]
  unsigned int v52; // [rsp+88h] [rbp-78h]
  ULONG_PTR v53; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v56; // [rsp+A8h] [rbp-58h]
  _BYTE *v57; // [rsp+B0h] [rbp-50h]
  unsigned int *v58; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v59; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v60; // [rsp+C8h] [rbp-38h]
  LARGE_INTEGER v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+E4h] [rbp-1Ch]
  int v64; // [rsp+ECh] [rbp-14h]
  __int64 v65; // [rsp+F0h] [rbp-10h]

  v10 = a6;
  v12 = a5;
  v57 = a2;
  v56 = a3;
  v60 = a1;
  v49 = a5;
  memset_0(&v62, 0, 0x58uLL);
  BugCheckParameter2 = -1LL;
  v13 = 0LL;
  v59 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v61 = PerformanceCounter;
  v50 = MmProtectFreedNonPagedPool != 0;
  v15 = (*a1 >> 12) + ((*a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v12 = a5 & 0xFFFFFFFD;
    v49 = a5 & 0xFFFFFFFD;
  }
  if ( a4 && v15 > a4 || (unsigned __int64)a2 > v56 || &a2[v15] <= a2 || (unsigned __int64)&a2[v15 - 1] > v56 )
    goto LABEL_49;
  v16 = MiProtectionToCacheAttribute(v12);
  v19 = v16;
  v52 = v16;
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v20 = a6;
    if ( a6 == 0x80000000 )
    {
      a6 = 0x80000000;
      v21 = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL);
      goto LABEL_9;
    }
  }
  else
  {
    v20 = 0;
    a6 = 0;
  }
  v21 = v20;
  if ( v20 >= (unsigned __int16)KeNumberNodes )
  {
LABEL_15:
    v10 = a6;
LABEL_49:
    v39 = (__int64 *)v60;
    v38 = 0;
    v26 = *v60;
    goto LABEL_45;
  }
LABEL_9:
  v22 = (_DWORD *)(qword_140E2DAD0 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  v23 = &v22[(unsigned __int16)KeNumberNodes];
  if ( v20 != 0x80000000 )
    v23 = v22 + 1;
  v24 = (__int64)a7;
  v58 = v23;
  if ( (v49 & 2) == 0 && a7 == (volatile signed __int64 *)&MiSystemPartition && !v17 && v16 == 1 && v15 <= 0x200 )
  {
    v25 = 1953394499;
    if ( a8 != 1416523587 )
      v25 = a8;
    v26 = v15 << 12;
    while ( 1 )
    {
      v47[0] = v25;
      LODWORD(v46) = *v22;
      ContiguousHeapPool = ExAllocateContiguousHeapPool((unsigned __int64)v57, v56, v18, v26, v46, *(_QWORD *)v47);
      if ( ContiguousHeapPool )
        break;
      v18 = a4;
      if ( ++v22 == v23 )
      {
        v19 = v52;
        v13 = 0LL;
        v24 = (__int64)a7;
        goto LABEL_12;
      }
    }
    v38 = 1;
    v13 = ContiguousHeapPool;
    goto LABEL_42;
  }
LABEL_12:
  if ( (a9 & 1) != 0 )
    goto LABEL_13;
  v28 = 135266304;
  v29 = (unsigned int *)(qword_140E2DAD0 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  while ( 1 )
  {
    v30 = 0LL;
    if ( v18 == v15 && (v15 == 16 || v15 == 512 || v15 == 0x40000) )
    {
      v63 = 0LL;
      v64 = 0;
      v30 = &v62;
      v62 = 8;
      v65 = qword_140E2DBE0 & ~(v15 - 1);
    }
    ContiguousPages = MiFindContiguousPagesEx(
                        v24,
                        v57,
                        v56,
                        v18,
                        0,
                        v15,
                        v19,
                        *v29,
                        255,
                        v28,
                        2u,
                        0LL,
                        (__int64)v30,
                        &BugCheckParameter2);
    if ( v30 && v30 != &v62 )
      ExFreePoolWithTag(v30, 0);
    if ( ContiguousPages >= 0 )
      break;
    if ( ++v29 == v58 )
      goto LABEL_13;
    v19 = v52;
    v28 &= ~0x8000000u;
    v18 = a4;
    v24 = (__int64)a7;
  }
  v26 = v15 << 12;
  v59 = v15;
  v32 = MiMapContiguousMemory(BugCheckParameter2 << 12, v15 << 12, v15 << 12, v49, v50);
  v53 = v32;
  v13 = v32;
  if ( v32 && !(unsigned int)ExInsertPoolTag(a8, v32, v15 << 12) )
  {
    v44 = v15 << 12;
    if ( v50 )
      v44 = v26 + 4096;
    MiUnmapContiguousMemory(v13, v44, 1);
    v13 = 0LL;
    v53 = 0LL;
  }
  v35 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( v13 )
    v36 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  else
    v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v33) = 2;
    LOBYTE(v34) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v34, v33);
  }
  v51 = 0LL;
  if ( v15 )
  {
    v41 = (volatile signed __int32 *)(v35 + 24);
    do
    {
      v42 = 0;
      while ( _interlockedbittestandset64(v41, 0x3FuLL) )
      {
        do
        {
          if ( (++v42 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v42);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v41 < 0 );
      }
      *((_QWORD *)v41 - 2) = v36;
      _InterlockedAnd64((volatile signed __int64 *)v41, 0x7FFFFFFFFFFFFFFFuLL);
      v43 = ++v51;
      if ( (v51 & 0x3F) == 0 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v33) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
        }
        __writecr8(CurrentIrql);
        v45 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v33) = 2;
          KiRaiseIrqlProcessIrqlFlags(v45, v33);
        }
        v43 = v51;
      }
      v41 += 12;
      if ( v36 )
        v36 += 8LL;
    }
    while ( v43 < v15 );
    PerformanceCounter = v61;
    v13 = v53;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v33) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
  }
  __writecr8(CurrentIrql);
  if ( !v13 )
  {
LABEL_13:
    if ( BugCheckParameter2 != -1LL )
      MiFreeContiguousPages(BugCheckParameter2, v59, 0);
    goto LABEL_15;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v13, 0LL, 13LL, v15);
  v38 = 0;
LABEL_42:
  if ( !v38 )
    _InterlockedAdd64(a7 + 2457, v15);
  v39 = (__int64 *)v60;
  v10 = a6;
  *v60 = v26;
LABEL_45:
  if ( (unsigned __int8)VfPtIsAptEnabledOnKernel() )
    VfPtMiscPoolNotification(v13, v26, a8, 0);
  EtwTraceContAllocationEvent(
    (PVOID)v13,
    *v39,
    (__int64)v57,
    v56,
    a4,
    v49,
    v10,
    *(unsigned __int16 *)a7,
    a8,
    a9,
    v38,
    v48,
    PerformanceCounter.QuadPart);
  return v13;
}
