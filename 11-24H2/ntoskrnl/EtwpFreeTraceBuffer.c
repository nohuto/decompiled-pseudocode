/*
 * XREFs of EtwpFreeTraceBuffer @ 0x14047E9DC
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140489020 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpCancelMemoryPreservation @ 0x1407AFB5C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1407AFE9C (EtwpPreserveLogger.c)
 *     EtwpFreeTraceBufferPool @ 0x140A4927C (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     EtwpFreePartitionMemory @ 0x14047EA6C (EtwpFreePartitionMemory.c)
 *     EtwpMdlInit @ 0x1407A8EE0 (EtwpMdlInit.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeTraceBuffer(__int64 a1, char *a2, __int64 a3)
{
  char *v3; // rbx
  ULONG_PTR v4; // rbp
  __int64 v5; // r9
  unsigned __int64 *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rsi
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v3 = a2;
  if ( *(_QWORD *)(a1 + 1584) )
  {
    EtwpFreePartitionMemory(a1, a2, a3, a1);
  }
  else if ( (*(_DWORD *)(a1 + 816) & 0x20000000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 1592);
    EtwpMdlInit(v4, *(_DWORD *)(a1 + 4) >> 12, a2);
    v6 = (unsigned __int64 *)(v4 + 48);
    v7 = *(_DWORD *)(v5 + 4) >> 12;
    if ( v7 )
    {
      v8 = v7;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v3);
        v3 += 4096;
        *v6++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
        --v8;
      }
      while ( v8 );
    }
    MiFreePagesFromMdl(v4, 0, 0, 0);
  }
  else
  {
    ExFreePoolWithTag(a2, 0);
  }
}
