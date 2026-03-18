/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x140830488
 * Callers:
 *     EtwpStartLogger @ 0x140831694 (EtwpStartLogger.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x14024C2BC (EtwpAllocateFreeBuffers.c)
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 *     EtwpFreePfnArray @ 0x1407A7DC8 (EtwpFreePfnArray.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1408305C8 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x140830658 (EtwpAllocatePhysicalMemoryForTraceBuffers.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(_DWORD *a1, __int64 a2)
{
  int UsedProcessorCount; // edi
  unsigned int SystemMaximumBufferCount; // eax
  int v5; // r9d
  unsigned int v6; // r10d
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // edi
  unsigned int FreeBuffers; // esi
  __int64 result; // rax

  UsedProcessorCount = EtwpQueryUsedProcessorCount((__int64)a1, a2);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount();
  v5 = a1[3];
  v6 = 2 * UsedProcessorCount;
  v7 = SystemMaximumBufferCount;
  if ( (v5 & 0x4000000) != 0 && (v5 & 0x400) != 0 )
    v6 += 4;
  v8 = v6;
  if ( SystemMaximumBufferCount < v6 )
    v7 = v6;
  v9 = v7;
  if ( a1[59] > v6 )
    v8 = a1[59];
  v10 = a1[56];
  if ( v8 < v7 )
    v9 = v8;
  a1[59] = v9;
  if ( v10 > v6 )
    v6 = v10;
  if ( v6 < v7 )
    v7 = v6;
  a1[56] = v7;
  if ( v7 > (unsigned int)v9 )
  {
    a1[59] = v7;
    v9 = v7;
  }
  if ( (v5 & 0x400) != 0 )
  {
    a1[59] = v7;
    v9 = v7;
  }
  if ( (v5 & 0x40000) != 0 )
    return 0LL;
  v11 = a1[53];
  if ( v11 )
  {
    v9 = (unsigned int)(v9 - UsedProcessorCount - 1);
    if ( v11 > (unsigned int)v9 )
      a1[53] = v9;
  }
  if ( (a1[204] & 0x20000000) == 0 || (result = EtwpAllocatePhysicalMemoryForTraceBuffers(a1, v9), (int)result >= 0) )
  {
    v12 = a1[56];
    FreeBuffers = EtwpAllocateFreeBuffers((ULONG_PTR)a1, v12);
    if ( (a1[204] & 0x20000000) != 0 )
      EtwpFreePfnArray((__int64)a1);
    return FreeBuffers < v12 ? 0xC0000017 : 0;
  }
  return result;
}
