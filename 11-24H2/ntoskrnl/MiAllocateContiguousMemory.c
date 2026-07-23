/*
 * XREFs of MiAllocateContiguousMemory @ 0x140395A6C
 * Callers:
 *     MmAllocateContiguousNodeMemory @ 0x1403958D0 (MmAllocateContiguousNodeMemory.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403966A0 (MmAllocateContiguousMemoryEx.c)
 *     MmAllocateContiguousMemory @ 0x140670380 (MmAllocateContiguousMemory.c)
 * Callees:
 *     ExInsertPoolTag @ 0x14021B9D0 (ExInsertPoolTag.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     VfPtIsAptEnabledOnKernel @ 0x140394D00 (VfPtIsAptEnabledOnKernel.c)
 *     EtwTraceContAllocationEvent @ 0x1403960E8 (EtwTraceContAllocationEvent.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     MiFreeContiguousPages @ 0x140398278 (MiFreeContiguousPages.c)
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404C9744 (MiLogPerfMemoryRangeEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiAllocateContiguousMemory(
        unsigned __int64 *a1,
        _BYTE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        volatile signed __int64 *a7,
        unsigned int a8,
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
  unsigned __int64 v24; // r10
  int v25; // r12d
  unsigned __int64 v26; // rsi
  __int64 ContiguousHeapPool; // rax
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
  unsigned int v41; // r12d
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+74h] [rbp-8Ch]
  BOOL v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48; // [rsp+78h] [rbp-88h]
  unsigned int v49; // [rsp+88h] [rbp-78h]
  ULONG_PTR v50; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+A8h] [rbp-58h]
  _BYTE *v54; // [rsp+B0h] [rbp-50h]
  unsigned int *v55; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v56; // [rsp+C0h] [rbp-40h]
  unsigned __int64 *v57; // [rsp+C8h] [rbp-38h]
  LARGE_INTEGER v58; // [rsp+D0h] [rbp-30h]
  int v59; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v60; // [rsp+E4h] [rbp-1Ch]
  int v61; // [rsp+ECh] [rbp-14h]
  __int64 v62; // [rsp+F0h] [rbp-10h]

  v10 = a6;
  v12 = a5;
  v54 = a2;
  v53 = a3;
  v57 = a1;
  v46 = a5;
  memset_0(&v59, 0, 0x58uLL);
  BugCheckParameter2 = -1LL;
  v13 = 0LL;
  v56 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v58 = PerformanceCounter;
  v47 = MmProtectFreedNonPagedPool != 0;
  v15 = (*a1 >> 12) + ((*a1 & 0xFFF) != 0);
  if ( (a5 & 2) != 0 && (MiFlags & 0x8000) != 0 )
  {
    v12 = a5 & 0xFFFFFFFD;
    v46 = a5 & 0xFFFFFFFD;
  }
  if ( a4 && v15 > a4 || (unsigned __int64)a2 > v53 || &a2[v15] <= a2 || (unsigned __int64)&a2[v15 - 1] > v53 )
    goto LABEL_49;
  v16 = MiProtectionToCacheAttribute(v12);
  v19 = v16;
  v49 = v16;
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
    v26 = *v57;
    goto LABEL_45;
  }
LABEL_9:
  v22 = (_DWORD *)(qword_140E2DC10 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  v23 = &v22[(unsigned __int16)KeNumberNodes];
  if ( v20 != 0x80000000 )
    v23 = v22 + 1;
  v24 = (unsigned __int64)a7;
  v55 = v23;
  if ( (v46 & 2) == 0 && a7 == (volatile signed __int64 *)&MiSystemPartition && !v17 && v16 == 1 && v15 <= 0x200 )
  {
    v25 = 1953394499;
    if ( a8 != 1416523587 )
      v25 = a8;
    v26 = v15 << 12;
    while ( 1 )
    {
      ContiguousHeapPool = ExAllocateContiguousHeapPool((_DWORD)v54, v53, v18, v26, *v22, v25);
      if ( ContiguousHeapPool )
        break;
      v18 = a4;
      if ( ++v22 == v23 )
      {
        v19 = v49;
        v13 = 0LL;
        v24 = (unsigned __int64)a7;
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
  v29 = (unsigned int *)(qword_140E2DC10 + 4LL * v21 * (unsigned __int16)KeNumberNodes);
  while ( 1 )
  {
    v30 = 0LL;
    if ( v18 == v15 && (v15 == 16 || v15 == 512 || v15 == 0x40000) )
    {
      v60 = 0LL;
      v61 = 0;
      v30 = &v59;
      v59 = 8;
      v62 = qword_140E2DD20 & ~(v15 - 1);
    }
    ContiguousPages = MiFindContiguousPagesEx(
                        v24,
                        v54,
                        v53,
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
    if ( v30 && v30 != &v59 )
      ExFreePoolWithTag(v30, 0);
    if ( ContiguousPages >= 0 )
      break;
    if ( ++v29 == v55 )
      goto LABEL_13;
    v19 = v49;
    v28 &= ~0x8000000u;
    v18 = a4;
    v24 = (unsigned __int64)a7;
  }
  v26 = v15 << 12;
  v56 = v15;
  v32 = MiMapContiguousMemory(BugCheckParameter2 << 12, v15 << 12, v15 << 12, v46, v47);
  v50 = v32;
  v13 = v32;
  if ( v32 && !(unsigned int)ExInsertPoolTag(a8, v32, v15 << 12) )
  {
    v43 = v15 << 12;
    if ( v47 )
      v43 = v26 + 4096;
    MiUnmapContiguousMemory(v13, v43, 1);
    v13 = 0LL;
    v50 = 0LL;
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
  v48 = 0LL;
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
            HvlNotifyLongSpinWait(v41);
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
      v42 = ++v48;
      if ( (v48 & 0x3F) == 0 )
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
        {
          LOBYTE(v33) = 2;
          KiRaiseIrqlProcessIrqlFlags(v44, v33);
        }
        v42 = v48;
      }
      v40 += 12;
      if ( v36 )
        v36 += 8LL;
    }
    while ( v42 < v15 );
    PerformanceCounter = v58;
    v13 = v50;
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
      MiFreeContiguousPages(BugCheckParameter2);
    goto LABEL_15;
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v13, 0LL, 13LL, v15);
  v38 = 0;
LABEL_42:
  if ( !v38 )
    _InterlockedAdd64(a7 + 2457, v15);
  v10 = a6;
  *v57 = v26;
LABEL_45:
  if ( VfPtIsAptEnabledOnKernel() )
    VfPtMiscPoolNotification(v13, v26, a8, 0LL);
  EtwTraceContAllocationEvent(
    (PVOID)v13,
    a4,
    v46,
    v10,
    *(unsigned __int16 *)a7,
    a8,
    a9,
    v38,
    v45,
    PerformanceCounter.QuadPart);
  return v13;
}
