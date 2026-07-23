/*
 * XREFs of EtwpFreePfnArray @ 0x1407A7F08
 * Callers:
 *     EtwpAllocateTraceBufferPool @ 0x1409CF86C (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocatePhysicalMemoryForTraceBuffers @ 0x1409CFA3C (EtwpAllocatePhysicalMemoryForTraceBuffers.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x14048E2C0 (MmFreePagesFromMdl.c)
 *     EtwpMdlInit @ 0x1407A8EE0 (EtwpMdlInit.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePfnArray(__int64 a1)
{
  unsigned __int64 *v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // rsi
  PMDL v7; // rcx
  PMDL v8; // rcx

  v1 = *(unsigned __int64 **)(a1 + 1600);
  if ( v1 )
  {
    v3 = 0LL;
    v4 = *(_QWORD *)(a1 + 1592);
    v5 = *(_DWORD *)(a1 + 4) >> 12;
    v6 = 1LL;
    if ( *v1 )
    {
      do
      {
        *(_QWORD *)(v4 + 8 * v3 + 48) = v1[v6];
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v5 )
        {
          EtwpMdlInit(v4, v3, 0LL);
          MmFreePagesFromMdl(v7);
          v3 = 0LL;
        }
        v1 = *(unsigned __int64 **)(a1 + 1600);
        ++v6;
      }
      while ( v6 <= *v1 );
      if ( (_DWORD)v3 )
      {
        EtwpMdlInit(v4, v3, 0LL);
        MmFreePagesFromMdl(v8);
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1600), 0);
    *(_QWORD *)(a1 + 1600) = 0LL;
  }
}
