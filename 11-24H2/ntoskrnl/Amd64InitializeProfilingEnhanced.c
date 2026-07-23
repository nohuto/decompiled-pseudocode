/*
 * XREFs of Amd64InitializeProfilingEnhanced @ 0x140B52F18
 * Callers:
 *     Amd64InitializeProfiling @ 0x140B52EF0 (Amd64InitializeProfiling.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x140540604 (HalpMmAllocateMemory.c)
 *     Amd64FreeCounter @ 0x140568634 (Amd64FreeCounter.c)
 *     Amd64GetGenericPerfEvent @ 0x14056888C (Amd64GetGenericPerfEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 Amd64InitializeProfilingEnhanced()
{
  unsigned int Number; // r15d
  unsigned int v1; // edi
  unsigned int *v2; // rsi
  unsigned int v3; // r14d
  int v4; // r12d
  __int64 v5; // rbp
  unsigned int v11; // r15d
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // r8
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // r8
  unsigned int MaximumRegisteredProcessorCount; // ecx
  struct _KPRCB *v30; // rax
  unsigned int v31; // ebp
  unsigned __int64 *v32; // r13
  unsigned int v33; // esi
  __int64 v34; // rbx
  void *Memory; // rax
  void *v36; // rax
  void *v37; // rax
  unsigned __int64 *v38; // r9
  unsigned int i; // ebp
  __int64 v40; // rbx
  __int64 v41; // r14
  unsigned int v42; // esi
  char *v43; // rax
  char *v44; // r15
  unsigned int j; // r8d
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // edx
  __int64 k; // r8
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // edx
  __int64 m; // r8
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // r11
  unsigned int v57; // r9d
  __int64 v58; // rbx
  char v59; // r10
  __int64 GenericPerfEvent; // rax
  __int64 *v61; // rcx
  __int64 **v62; // rax
  unsigned __int16 *v63; // rbx
  __int64 result; // rax
  __int64 v65; // rbx
  unsigned int v66; // ebx
  unsigned int v67; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v68; // [rsp+38h] [rbp-50h]
  char *v69; // [rsp+40h] [rbp-48h]
  struct _KPRCB *v70; // [rsp+48h] [rbp-40h]

  Number = KeGetPcr()->Prcb.Number;
  v1 = 0;
  v69 = 0LL;
  v2 = (unsigned int *)&Amd64EventSelectRegisters;
  v3 = 0;
  v4 = 0;
  v5 = 18LL;
  if ( !Number )
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    if ( (_RCX & 0x800000) != 0 )
    {
      Amd64PerfFeatures |= 1u;
      v11 = 6;
      v12 = -1073675776;
      v13 = 0LL;
      v14 = 6LL;
      do
      {
        *(_DWORD *)((char *)&Amd64EventSelectRegisters + v13) = v12;
        *(_DWORD *)((char *)&Amd64PerfCounterRegisters + v13) = v12 + 1;
        v12 += 2;
        v13 += 4LL;
        --v14;
      }
      while ( v14 );
    }
    else
    {
      v11 = 4;
      Amd64PerfCounterRegisters = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010007c0010006c0010005c0010004);
      Amd64EventSelectRegisters = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010003c0010002c0010001c0010000);
    }
    if ( (_RCX & 0x1000000) != 0 && (_RCX & 0x400000) != 0 )
    {
      v4 = 4;
      Amd64PerfFeatures |= 2u;
      *(__int128 *)((char *)&Amd64PerfCounterRegisters + 4 * v11) = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010247c0010245c0010243c0010241);
      *(__int128 *)((char *)&Amd64EventSelectRegisters + 4 * v11) = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010246c0010244c0010242c0010240);
      qword_140F8ECD8 = (__int64)&Amd64DataFabricStatusHead;
      Amd64DataFabricStatusHead = (__int64)&Amd64DataFabricStatusHead;
    }
    if ( (_RCX & 0x10000000) != 0 && (_RCX & 0x400000) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = v11 + v4;
      Amd64PerfFeatures |= 4u;
      v3 = 4;
      if ( CurrentPrcb->CpuType != 22 )
        v3 = 6;
      v17 = -1073675728;
      v18 = v3;
      do
      {
        *((_DWORD *)&Amd64EventSelectRegisters + v16) = v17;
        *((_DWORD *)&Amd64PerfCounterRegisters + v16) = v17 + 1;
        v17 += 2;
        v16 = (unsigned int)(v16 + 1);
        --v18;
      }
      while ( v18 );
      qword_140F8ED48 = (__int64)&Amd64CacheStatusHead;
      Amd64CacheStatusHead = (__int64)&Amd64CacheStatusHead;
    }
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000008 )
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 && (KeGetCurrentPrcb()->CpuType != 23 || KeGetCurrentPrcb()->CpuModel >= 0x1Fu) )
        Amd64PerfFeatures |= 8u;
    }
    HalpProfileIntervalLimits = (__int64)Amd64ProfileIntervalLimits;
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v67 = MaximumRegisteredProcessorCount;
    v30 = KeGetCurrentPrcb();
    v31 = 0;
    v70 = v30;
    v68 = &v30->HalReserved[2];
    v32 = &v30->HalReserved[2];
    while ( v31 < MaximumRegisteredProcessorCount )
    {
      v32 = &v30->HalReserved[2];
      v33 = 48 * v11;
      v34 = v30->HalReserved[2] + 96LL * v31;
      *(_DWORD *)v34 = 0;
      *(_DWORD *)(v34 + 4) = v11;
      *(_DWORD *)(v34 + 8) = v11 - 1;
      Memory = (void *)HalpMmAllocateMemory(48 * v11);
      *(_QWORD *)(v34 + 16) = Memory;
      if ( !Memory )
        goto LABEL_34;
      memset_0(Memory, 0, v33);
      *(_QWORD *)(v34 + 24) = 1LL;
      *(_DWORD *)(v34 + 32) = 0;
      *(_QWORD *)(v34 + 40) = 0LL;
      *(_DWORD *)(v34 + 48) = 100;
      *(_DWORD *)(v34 + 52) = v4;
      if ( v4 )
      {
        *(_DWORD *)(v34 + 56) = v4 - 1;
        v33 = 48 * v4;
        v36 = (void *)HalpMmAllocateMemory((unsigned int)(48 * v4));
        *(_QWORD *)(v34 + 64) = v36;
        if ( !v36 )
          goto LABEL_34;
        memset_0(v36, 0, v33);
      }
      else
      {
        *(_DWORD *)(v34 + 56) = 0;
        *(_QWORD *)(v34 + 64) = 0LL;
      }
      *(_DWORD *)(v34 + 72) = 101;
      *(_DWORD *)(v34 + 76) = v3;
      if ( v3 )
      {
        *(_DWORD *)(v34 + 80) = v3 - 1;
        v33 = 48 * v3;
        v37 = (void *)HalpMmAllocateMemory(48 * v3);
        *(_QWORD *)(v34 + 88) = v37;
        if ( !v37 )
LABEL_34:
          KeBugCheckEx(0x5Cu, 0x9002uLL, v33, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0xC5FuLL);
        memset_0(v37, 0, v33);
      }
      else
      {
        *(_DWORD *)(v34 + 80) = 0;
        *(_QWORD *)(v34 + 88) = 0LL;
      }
      v30 = v70;
      ++v31;
      MaximumRegisteredProcessorCount = v67;
    }
    v38 = v68;
    for ( i = 0; i < MaximumRegisteredProcessorCount; ++i )
    {
      v40 = *v32 + 96LL * i;
      v41 = *(_QWORD *)(v40 + 16);
      v42 = 24 * *(_DWORD *)(v40 + 4);
      if ( v42 )
      {
        v43 = (char *)HalpMmAllocateMemory(v42);
        v69 = v43;
        v44 = v43;
        if ( !v43 )
          KeBugCheckEx(0x5Cu, 0x9002uLL, v42, (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\pc\\amd64.c", 0xCB7uLL);
        memset_0(v43, 0, v42);
        v38 = v68;
      }
      else
      {
        v44 = v69;
      }
      for ( j = 0; j < *(_DWORD *)(v40 + 4); *(_DWORD *)(v41 + 8 * v47 + 28) = 0 )
      {
        v46 = j++;
        v47 = 6 * v46;
        *(_QWORD *)(v41 + 8 * v47 + 16) = &v44[24 * v46];
      }
      v48 = 0;
      for ( k = *(_QWORD *)(v40 + 64); v48 < *(_DWORD *)(v40 + 52); *(_DWORD *)(k + 8 * v51 + 28) = 100 )
      {
        v50 = v48++;
        v51 = 6 * v50;
        *(_QWORD *)(k + 8 * v51 + 16) = &DummyAmd64CounterStatus;
      }
      v52 = 0;
      for ( m = *(_QWORD *)(v40 + 88); v52 < *(_DWORD *)(v40 + 76); *(_DWORD *)(m + 8 * v55 + 28) = 101 )
      {
        v54 = v52++;
        v55 = 6 * v54;
        *(_QWORD *)(m + 8 * v55 + 16) = &DummyAmd64CounterStatus;
      }
      MaximumRegisteredProcessorCount = v67;
      v32 = v38;
    }
    v56 = &HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListLock = 0LL;
    qword_140FC20E8 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
    v57 = 0;
    v5 = 18LL;
    do
    {
      v58 = 320LL * v57;
      v59 = byte_140E0554D[v58];
      if ( v59 && *(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v58) == 32 && (Amd64PerfFeatures & 8) != 0 )
      {
        v59 = 0;
        byte_140E0554D[v58] = 0;
      }
      if ( !*(_QWORD *)((char *)&unk_140E05660 + v58) )
      {
        GenericPerfEvent = Amd64GetGenericPerfEvent(*(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v58));
        if ( GenericPerfEvent )
          *(_QWORD *)((char *)&unk_140E05660 + v58) = GenericPerfEvent;
      }
      if ( !v59 )
      {
        v61 = (__int64 *)qword_140FC20E8;
        v62 = (__int64 **)((char *)&unk_140E05538 + v58);
        if ( *(__int64 **)qword_140FC20E8 != v56 )
          __fastfail(3u);
        ++HalpProfileSourceDescriptorCount;
        *v62 = v56;
        v62[1] = v61;
        *v61 = (__int64)v62;
        qword_140FC20E8 = (__int64)&unk_140E05538 + v58;
      }
      ++v57;
    }
    while ( v57 < 0x12 );
    Number = 0;
    v2 = (unsigned int *)&Amd64EventSelectRegisters;
  }
  if ( (Amd64PerfFeatures & 8) != 0 )
    __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x40000000);
  v63 = (unsigned __int16 *)&unk_140E05550;
  do
  {
    KeAddProcessorAffinityEx(v63, Number);
    v63 += 160;
    --v5;
  }
  while ( v5 );
  result = KiProcessorBlock[Number];
  v65 = *(_QWORD *)(result + 88);
  if ( v65 )
  {
    v66 = *(_DWORD *)(v65 + 4);
    if ( v66 )
    {
      do
      {
        __writemsr(*v2, 0LL);
        result = Amd64FreeCounter(v1++, 0);
        ++v2;
      }
      while ( v1 < v66 );
    }
  }
  return result;
}
