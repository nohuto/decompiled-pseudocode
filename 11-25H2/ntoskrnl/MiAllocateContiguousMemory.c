/*
 * XREFs of MiAllocateContiguousMemory @ 0x140414D9C
 * Callers:
 *     MmAllocateContiguousMemoryEx @ 0x140414940 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocateContiguousNodeMemory @ 0x140414C00 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemory @ 0x140663690 (MmAllocateContiguousMemory.c)
 * Callees:
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 *     ExAllocateContiguousHeapPool @ 0x1402F7F74 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1402FD6B4 (ExInsertPoolTag.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeContiguousPages @ 0x14038B910 (MiFreeContiguousPages.c)
 *     VfPtMiscPoolNotification @ 0x1403F7FF8 (VfPtMiscPoolNotification.c)
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
 *     VfPtIsAptEnabledOnKernel @ 0x140415E20 (VfPtIsAptEnabledOnKernel.c)
 *     EtwTraceContAllocationEvent @ 0x140416CF0 (EtwTraceContAllocationEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D05B4 (MiLogPerfMemoryRangeEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 *a1,
        unsigned __int64 a2,
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
  ULONG_PTR ContiguousHeapPool; // rax
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
  char v38; // r13
  volatile signed __int32 *v40; // r14
  int v41; // r12d
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // [rsp+20h] [rbp-E0h]
  int v46[2]; // [rsp+28h] [rbp-D8h]
  int v47; // [rsp+58h] [rbp-A8h]
  int v48; // [rsp+74h] [rbp-8Ch]
  BOOL v49; // [rsp+78h] [rbp-88h]
  unsigned __int64 v50; // [rsp+78h] [rbp-88h]
  unsigned int v51; // [rsp+88h] [rbp-78h]
  ULONG_PTR v52; // [rsp+90h] [rbp-70h]
  ULONG_PTR v54; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v55; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v56; // [rsp+B0h] [rbp-50h]
  unsigned int *v57; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v58; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v59; // [rsp+C8h] [rbp-38h]
  LARGE_INTEGER v60; // [rsp+D0h] [rbp-30h]
  int v61; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+E4h] [rbp-1Ch]
  int v63; // [rsp+ECh] [rbp-14h]
  __int64 v64; // [rsp+F0h] [rbp-10h]

  v10 = a6;
  v12 = a5;
  v56 = a2;
  v55 = a3;
  v59 = a1;
  v48 = a5;
  memset_0(&v61, 0, 0x58uLL);
  v54 = -1LL;
  v13 = 0LL;
  v58 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v60 = PerformanceCounter;
  v49 = MmProtectFreedNonPagedPool != 0;
  v15 = (*a1 >> 12) + ((*a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v12 = a5 & 0xFFFFFFFD;
    v48 = a5 & 0xFFFFFFFD;
  }
  if ( a4 && v15 > a4 || a2 > v55 || v15 + a2 <= a2 || v15 + a2 - 1 > v55 )
    goto LABEL_49;
  v16 = MiProtectionToCacheAttribute(v12);
  v19 = v16;
  v51 = v16;
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
    v38 = 0;
    v26 = *v59;
    goto LABEL_45;
  }
LABEL_9:
  v22 = (_DWORD *)(qword_140E2D890 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  v23 = &v22[(unsigned __int16)KeNumberNodes];
  if ( v20 != 0x80000000 )
    v23 = v22 + 1;
  v24 = (__int64)a7;
  v57 = v23;
  if ( (v48 & 2) == 0 && a7 == (volatile signed __int64 *)&MiSystemPartition && !v17 && v16 == 1 && v15 <= 0x200 )
  {
    v25 = 1953394499;
    if ( a8 != 1416523587 )
      v25 = a8;
    v26 = v15 << 12;
    while ( 1 )
    {
      v46[0] = v25;
      LODWORD(v45) = *v22;
      ContiguousHeapPool = ExAllocateContiguousHeapPool(v56, v55, v18, v26, v45, *(_QWORD *)v46);
      if ( ContiguousHeapPool )
        break;
      v18 = a4;
      if ( ++v22 == v23 )
      {
        v19 = v51;
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
  v29 = (unsigned int *)(qword_140E2D890 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  while ( 1 )
  {
    v30 = 0LL;
    if ( v18 == v15 && (v15 == 16 || v15 == 512 || v15 == 0x40000) )
    {
      v62 = 0LL;
      v63 = 0;
      v30 = &v61;
      v61 = 8;
      v64 = qword_140E2D9A0 & ~(v15 - 1);
    }
    ContiguousPages = MiFindContiguousPagesEx(
                        v24,
                        v56,
                        v55,
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
                        &v54);
    if ( v30 && v30 != &v61 )
      ExFreePoolWithTag(v30, 0);
    if ( ContiguousPages >= 0 )
      break;
    if ( ++v29 == v57 )
      goto LABEL_13;
    v19 = v51;
    v28 &= ~0x8000000u;
    v18 = a4;
    v24 = (__int64)a7;
  }
  v26 = v15 << 12;
  v58 = v15;
  v32 = MiMapContiguousMemory(v54 << 12, v15 << 12, v15 << 12, v48, v49);
  v52 = v32;
  v13 = v32;
  if ( v32 && !(unsigned int)ExInsertPoolTag(a8, v32, v15 << 12) )
  {
    v43 = v15 << 12;
    if ( v49 )
      v43 = v26 + 4096;
    MiUnmapContiguousMemory(v13, v43, 1);
    v13 = 0LL;
    v52 = 0LL;
  }
  v35 = 48 * v54 - 0x220000000000LL;
  if ( v13 )
    v36 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  else
    v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v34) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v34);
  }
  v50 = 0LL;
  if ( v15 )
  {
    v40 = (volatile signed __int32 *)(v35 + 24);
    do
    {
      v41 = 0;
      while ( _interlockedbittestandset64(v40, 0x3FuLL) )
      {
        do
        {
          if ( (++v41 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait();
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v40 < 0 );
      }
      *((_QWORD *)v40 - 2) = v36;
      _InterlockedAnd64((volatile signed __int64 *)v40, 0x7FFFFFFFFFFFFFFFuLL);
      v42 = ++v50;
      if ( (v50 & 0x3F) == 0 )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v33) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v33);
        }
        __writecr8(CurrentIrql);
        v44 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v44);
        v42 = v50;
      }
      v40 += 12;
      if ( v36 )
        v36 += 8LL;
    }
    while ( v42 < v15 );
    PerformanceCounter = v60;
    v13 = v52;
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
    if ( v54 != -1LL )
      MiFreeContiguousPages(v54, v58, 0);
    goto LABEL_15;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v13, 0LL, 13LL, v15);
  v38 = 0;
LABEL_42:
  if ( !v38 )
    _InterlockedAdd64(a7 + 2457, v15);
  v10 = a6;
  *v59 = v26;
LABEL_45:
  if ( (unsigned __int8)VfPtIsAptEnabledOnKernel() )
    VfPtMiscPoolNotification(v13, v26, a8, 0);
  EtwTraceContAllocationEvent(
    (PVOID)v13,
    a4,
    v48,
    v10,
    *(unsigned __int16 *)a7,
    a8,
    a9,
    v38,
    v47,
    PerformanceCounter.QuadPart);
  return v13;
}
