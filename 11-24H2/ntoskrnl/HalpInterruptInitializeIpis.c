/*
 * XREFs of HalpInterruptInitializeIpis @ 0x140541F3C
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14053FAC8 (HalpInitializeInterruptsPn.c)
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140370900 (KeGetProcessorNumberFromIndex.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS HalpInterruptInitializeIpis()
{
  __int64 v0; // rcx
  _QWORD *v1; // r8
  _DWORD *v2; // rdx
  int v3; // r9d
  int v4; // eax
  unsigned int v5; // edi
  _DWORD *MemoryInternal; // rax
  _DWORD *v7; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v9; // rax
  __int64 i; // rbx
  __int64 v11; // rsi
  int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int16 Group; // ax
  __int64 v15; // rcx
  __int64 v16; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  if ( HalpInterruptIpiLines )
    goto LABEL_11;
  v0 = 0LL;
  v1 = *(_QWORD **)(HalpInterruptController + 264);
  while ( v1 != (_QWORD *)(HalpInterruptController + 264) )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    v3 = v2[6] - v2[5];
    v4 = v2[8];
    if ( v4 == 5 && v3 )
    {
      HalpInterruptIpiLines = (__int64)v2;
      goto LABEL_11;
    }
    if ( v4 == 4 && v3 && !v0 )
      v0 = (__int64)v2;
  }
  HalpInterruptIpiLines = v0;
  if ( v0 )
  {
LABEL_11:
    if ( HalpInterruptClusterModeEnabled )
    {
      if ( !HalpInterruptClusterData )
      {
        v5 = HalpInterruptMaxProcessors;
        if ( (_DWORD)HalpInterruptMaxCluster
          && 32 * (int)HalpInterruptMaxCluster < (unsigned int)HalpInterruptMaxProcessors )
        {
          v5 = 32 * HalpInterruptMaxCluster;
        }
        MemoryInternal = (_DWORD *)HalpMmAllocateMemoryInternal(24 * v5, 1u);
        HalpInterruptClusterData = (__int64)MemoryInternal;
        v7 = MemoryInternal;
        if ( !MemoryInternal )
          return -1073741801;
        memset_0(MemoryInternal, 0, 24 * v5);
        v9 = (unsigned __int64)&v7[6 * v5];
        while ( (unsigned __int64)v7 < v9 )
        {
          *v7 = -1;
          v7 += 6;
        }
        HalpInterruptClusterDataEnd = HalpInterruptClusterData;
        HalpInterruptClusterDataLimit = v9;
      }
      for ( i = 0LL; (unsigned int)i < (unsigned int)HalpInterruptProcessorCount; i = (unsigned int)(i + 1) )
      {
        v11 = HalpInterruptTargets;
        if ( *(_DWORD *)(HalpInterruptTargets + 24 * i) == 6 )
        {
          result = KeGetProcessorNumberFromIndex(i, &ProcNumber);
          if ( result < 0 )
            return result;
          v12 = *(_DWORD *)(v11 + 24 * i + 8);
          v13 = HalpInterruptClusterData;
          Group = ProcNumber.Group;
          while ( v13 < HalpInterruptClusterDataEnd
               && (*(_WORD *)(v13 + 16) != ProcNumber.Group || *(_DWORD *)v13 != v12) )
            v13 += 24LL;
          if ( v13 == HalpInterruptClusterDataEnd )
          {
            if ( v13 >= HalpInterruptClusterDataLimit )
              KeBugCheckEx(0x5Cu, 0x201uLL, 0LL, 0xFFFFFFFF80000005uLL, (unsigned int)HalpInterruptMaxCluster);
            ++HalpInterruptClusterDataCount;
            v15 = HalpInterruptClusterDataEnd + 24;
            *(_DWORD *)v13 = v12;
            HalpInterruptClusterDataEnd = v15;
            *(_WORD *)(v13 + 16) = Group;
          }
          v16 = *(_QWORD *)(v13 + 8);
          _bittestandset64(&v16, *((_DWORD *)KiGlobalState + i) & 0x3F);
          *(_QWORD *)(v13 + 8) = v16;
        }
      }
    }
  }
  else
  {
    HalpInterruptMaxProcessors = 1;
  }
  return 0;
}
