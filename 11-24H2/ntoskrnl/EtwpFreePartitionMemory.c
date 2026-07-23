/*
 * XREFs of EtwpFreePartitionMemory @ 0x14047EA6C
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x14047E9DC (EtwpFreeTraceBuffer.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     EtwpUnregisterPartitionPages @ 0x14047EACC (EtwpUnregisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePartitionMemory(__int64 a1, void *a2)
{
  struct _MDL *v3; // rax
  struct _MDL *v4; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v3 = (struct _MDL *)EtwpUnregisterPartitionPages(&v5);
  v4 = v3;
  if ( v3 )
  {
    MmUnmapLockedPages(a2, v3);
    MiFreePagesFromMdl((ULONG_PTR)v4, 0, 0, 0);
    ExFreePoolWithTag(v4, 0);
  }
}
