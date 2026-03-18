/*
 * XREFs of IopCleanupFileObjectIosbRange @ 0x1409E2728
 * Callers:
 *     IopCleanupProcessResources @ 0x1409E26D0 (IopCleanupProcessResources.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FFF00 (RtlLookupElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupFileObjectIosbRange(__int64 a1)
{
  char *v2; // rsi
  _QWORD *v3; // rbp
  char *i; // rbx
  PMDL *v5; // rdi
  void *v6; // rcx
  __int64 v7; // rax
  PVOID Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = *(PVOID *)(a1 + 32);
  v2 = 0LL;
  ObfDereferenceObjectWithTag(Buffer[0], 0x70436F49u);
  *(_QWORD *)(a1 + 32) = 0LL;
  ExAcquireFastMutex(&IoStatusBlockRangeTableLock);
  v3 = RtlLookupElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  for ( i = (char *)v3[1]; ; i = (char *)*((_QWORD *)i + 5) )
  {
    v5 = (PMDL *)(i + 24);
    if ( !i )
      break;
    if ( *(PMDL *)(a1 + 16) == *v5 )
    {
      --*(_DWORD *)i;
      break;
    }
    v2 = i;
  }
  if ( !*(_DWORD *)i )
  {
    v6 = (void *)*((_QWORD *)i + 4);
    if ( v6 )
      MmUnmapLockedPages(v6, *v5);
    MmUnlockPages(*v5);
    IoFreeMdl(*v5);
    v7 = *((_QWORD *)i + 5);
    if ( v2 )
      *((_QWORD *)v2 + 5) = v7;
    else
      v3[1] = v7;
    ExFreePoolWithTag(i, 0);
    if ( !v3[1] )
      RtlDeleteElementGenericTableAvl(&IoStatusBlockRangeTable, Buffer);
  }
  KeReleaseGuardedMutex(&IoStatusBlockRangeTableLock);
}
