/*
 * XREFs of Amd64InitializeProfilingOriginal @ 0x140B534D8
 * Callers:
 *     Amd64InitializeProfiling @ 0x140B52EF0 (Amd64InitializeProfiling.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x140540604 (HalpMmAllocateMemory.c)
 *     Amd64FreeCounter @ 0x140568634 (Amd64FreeCounter.c)
 *     Amd64GetGenericPerfEvent @ 0x14056888C (Amd64GetGenericPerfEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 Amd64InitializeProfilingOriginal()
{
  unsigned int Number; // r14d
  unsigned int v1; // edi
  unsigned int v2; // r15d
  int v3; // esi
  unsigned int *v4; // rbp
  __int64 v5; // r12
  unsigned int v11; // r14d
  int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // r8
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // r8
  unsigned int MaximumRegisteredProcessorCount; // eax
  struct _KPRCB *v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // r13d
  unsigned int v35; // r12d
  unsigned __int64 v36; // rsi
  __int64 v37; // r15
  __int64 v38; // rsi
  unsigned __int64 v39; // rbp
  __int64 v40; // r14
  __int64 v41; // rcx
  __int64 Memory; // rax
  unsigned int i; // r8d
  __int64 v44; // rcx
  __int64 v45; // rbx
  unsigned int v46; // edx
  __int64 j; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // edx
  __int64 k; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 *v54; // r11
  unsigned int v55; // r9d
  __int64 v56; // rbx
  char v57; // r10
  __int64 GenericPerfEvent; // rax
  __int64 **v59; // rcx
  __int64 *v60; // rax
  unsigned __int16 *v61; // rbx
  __int64 result; // rax
  __int64 v63; // rbx
  unsigned int v64; // ebx
  int v65; // [rsp+20h] [rbp-68h]
  unsigned int v66; // [rsp+28h] [rbp-60h]
  struct _KPRCB *v67; // [rsp+30h] [rbp-58h]
  __int64 v68; // [rsp+38h] [rbp-50h]

  Number = KeGetPcr()->Prcb.Number;
  v1 = 0;
  v68 = 0LL;
  v2 = 0;
  v65 = 0;
  v3 = 0;
  v4 = (unsigned int *)&Amd64EventSelectRegisters;
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
      v3 = 4;
      Amd64PerfFeatures |= 2u;
      v65 = 4;
      *(__int128 *)((char *)&Amd64PerfCounterRegisters + 4 * v11) = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010247c0010245c0010243c0010241);
      *(__int128 *)((char *)&Amd64EventSelectRegisters + 4 * v11) = (__int128)_mm_load_si128((const __m128i *)&_xmm_c0010246c0010244c0010242c0010240);
      qword_140F8ECD8 = (__int64)&Amd64DataFabricStatusHead;
      Amd64DataFabricStatusHead = (__int64)&Amd64DataFabricStatusHead;
    }
    if ( (_RCX & 0x10000000) != 0 && (_RCX & 0x400000) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = v3 + v11;
      Amd64PerfFeatures |= 4u;
      v2 = 4;
      if ( CurrentPrcb->CpuType != 22 )
        v2 = 6;
      v17 = -1073675728;
      v18 = v2;
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
    v30 = KeGetCurrentPrcb();
    v31 = MaximumRegisteredProcessorCount;
    v66 = MaximumRegisteredProcessorCount;
    v67 = v30;
    if ( MaximumRegisteredProcessorCount )
    {
      v32 = 0LL;
      v33 = 48 * v11;
      v34 = 48 * v3;
      v35 = 48 * v2;
      do
      {
        v36 = v30->HalReserved[2];
        *(_DWORD *)(v32 + v36) = 0;
        *(_DWORD *)(v32 + v36 + 4) = v11;
        *(_QWORD *)(v32 + v36 + 16) = HalpMmAllocateMemory(v33);
        *(_DWORD *)(v32 + v36 + 52) = v65;
        *(_QWORD *)(v32 + v36 + 24) = 1LL;
        *(_QWORD *)(v32 + v36 + 40) = 0LL;
        *(_DWORD *)(v32 + v36 + 48) = 100;
        if ( v34 )
          *(_QWORD *)(v32 + v36 + 64) = HalpMmAllocateMemory(v34);
        *(_DWORD *)(v32 + v36 + 72) = 101;
        *(_DWORD *)(v32 + v36 + 76) = v2;
        if ( v35 )
          *(_QWORD *)(v32 + v36 + 88) = HalpMmAllocateMemory(v35);
        v33 = 48 * v11;
        v32 += 96LL;
        v30 = v67;
        --v31;
      }
      while ( v31 );
      v37 = v66;
      v38 = 0LL;
      do
      {
        v39 = v67->HalReserved[2];
        v40 = *(_QWORD *)(v38 + v39 + 16);
        v41 = (unsigned int)(24 * *(_DWORD *)(v38 + v39 + 4));
        if ( (_DWORD)v41 )
        {
          Memory = HalpMmAllocateMemory(v41);
          v68 = Memory;
        }
        else
        {
          Memory = v68;
        }
        for ( i = 0; i < *(_DWORD *)(v38 + v39 + 4); *(_DWORD *)(v40 + 8 * v45 + 28) = 0 )
        {
          v44 = i++;
          v45 = 6 * v44;
          *(_QWORD *)(v40 + 8 * v45 + 16) = Memory + 24 * v44;
        }
        v46 = 0;
        for ( j = *(_QWORD *)(v38 + v39 + 64); v46 < *(_DWORD *)(v38 + v39 + 52); *(_DWORD *)(j + 8 * v49 + 28) = 100 )
        {
          v48 = v46++;
          v49 = 6 * v48;
          *(_QWORD *)(j + 8 * v49 + 16) = &DummyAmd64CounterStatus;
        }
        v50 = 0;
        for ( k = *(_QWORD *)(v38 + v39 + 88); v50 < *(_DWORD *)(v38 + v39 + 76); *(_DWORD *)(k + 8 * v53 + 28) = 101 )
        {
          v52 = v50++;
          v53 = 6 * v52;
          *(_QWORD *)(k + 8 * v53 + 16) = &DummyAmd64CounterStatus;
        }
        v38 += 96LL;
        --v37;
      }
      while ( v37 );
      v5 = 18LL;
    }
    v54 = &HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListLock = 0LL;
    qword_140FC20E8 = (__int64)&HalpProfileSourceDescriptorListHead;
    v55 = 0;
    HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
    do
    {
      v56 = 320LL * v55;
      v57 = byte_140E0554D[v56];
      if ( v57 && *(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v56) == 32 && (Amd64PerfFeatures & 8) != 0 )
      {
        v57 = 0;
        byte_140E0554D[v56] = 0;
      }
      if ( !*(_QWORD *)((char *)&unk_140E05660 + v56) )
      {
        GenericPerfEvent = Amd64GetGenericPerfEvent(*(_DWORD *)((char *)&Amd64ProfileSourceDescriptorTable + v56));
        if ( GenericPerfEvent )
          *(_QWORD *)((char *)&unk_140E05660 + v56) = GenericPerfEvent;
      }
      if ( !v57 )
      {
        v59 = (__int64 **)((char *)&unk_140E05538 + 320 * v55);
        v60 = (__int64 *)qword_140FC20E8;
        if ( *(__int64 **)qword_140FC20E8 != v54 )
          __fastfail(3u);
        ++HalpProfileSourceDescriptorCount;
        *v59 = v54;
        v59[1] = v60;
        *v60 = (__int64)v59;
        qword_140FC20E8 = (__int64)&unk_140E05538 + 320 * v55;
      }
      ++v55;
    }
    while ( v55 < 0x12 );
    Number = 0;
    v4 = (unsigned int *)&Amd64EventSelectRegisters;
  }
  if ( (Amd64PerfFeatures & 8) != 0 )
    __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x40000000);
  v61 = (unsigned __int16 *)&unk_140E05550;
  do
  {
    KeAddProcessorAffinityEx(v61, Number);
    v61 += 160;
    --v5;
  }
  while ( v5 );
  result = KiProcessorBlock[Number];
  v63 = *(_QWORD *)(result + 88);
  if ( v63 )
  {
    v64 = *(_DWORD *)(v63 + 4);
    if ( v64 )
    {
      do
      {
        __writemsr(*v4, 0LL);
        result = Amd64FreeCounter(v1++, 0);
        ++v4;
      }
      while ( v1 < v64 );
    }
  }
  return result;
}
