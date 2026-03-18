/*
 * XREFs of HalpHvTimerInitialize @ 0x14055F190
 * Callers:
 *     <none>
 * Callees:
 *     HalpHvTimerAcknowledgeInterrupt @ 0x14033B050 (HalpHvTimerAcknowledgeInterrupt.c)
 *     HalQueryMaximumProcessorCount @ 0x1403BC0C0 (HalQueryMaximumProcessorCount.c)
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x14055FE80 (HalMapIoSpace.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvTimerInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int MaximumProcessorCount; // edi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  PVOID v13; // rax
  __int64 *v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax

  LODWORD(a3) = KeGetPcr()->Prcb.Number;
  v5 = 3 * a3;
  if ( !*(_QWORD *)(a1 + 24 * a3 + 8) )
  {
    if ( HalpHvCpuManager )
    {
      v6 = __readmsr(0x40000083u);
      *(_QWORD *)(a1 + 24 * a3 + 16) = ((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6 & 0xFFFFF000;
      v7 = guard_dispatch_icall_no_overrides((unsigned int)a3, (unsigned __int64)HIDWORD(v6) << 32, a3, a4);
      *(_QWORD *)(a1 + 8 * v5 + 8) = v7;
      if ( v7 )
        return 0LL;
    }
    else
    {
      result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HalpHvPhysicalMemoryApi);
      if ( (int)result < 0 )
        return result;
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      v12 = guard_dispatch_icall_no_overrides(-1LL, MaximumProcessorCount, v10, v11);
      if ( v12 )
      {
        *(_QWORD *)(a1 + 16) = v12;
        v13 = HalMapIoSpace((LARGE_INTEGER)v12, (unsigned __int64)MaximumProcessorCount << 12, MmCached);
        v14 = (__int64 *)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v13;
        if ( v13 )
        {
          if ( MaximumProcessorCount > 1 )
          {
            v15 = (_QWORD *)(a1 + 32);
            v16 = MaximumProcessorCount - 1;
            do
            {
              v15[1] = v14[1] + 4096;
              v17 = *v14;
              v14 += 3;
              *v15 = v17 + 4096;
              v15 += 3;
              --v16;
            }
            while ( v16 );
          }
          return 0LL;
        }
      }
    }
    return 3221225626LL;
  }
  HalpHvTimerAcknowledgeInterrupt(a1);
  return 0LL;
}
