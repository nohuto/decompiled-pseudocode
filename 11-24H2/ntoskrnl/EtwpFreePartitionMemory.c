/*
 * XREFs of EtwpFreePartitionMemory @ 0x1404835A0
 * Callers:
 *     EtwpFreeTraceBuffer @ 0x140483510 (EtwpFreeTraceBuffer.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 *     EtwpUnregisterPartitionPages @ 0x140483600 (EtwpUnregisterPartitionPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
