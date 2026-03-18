/*
 * XREFs of IopFreeCopyObjectsFromDataBuffer @ 0x1404845AC
 * Callers:
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     NtCopyFileChunk @ 0x1409886C0 (NtCopyFileChunk.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x14031B360 (IopFreeIrpExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     IopExceptionCleanupEx @ 0x140970628 (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeCopyObjectsFromDataBuffer(__int64 a1, char a2)
{
  __int64 v2; // rbx
  void *v3; // rcx
  IRP *v4; // rsi
  ULONG_PTR v5; // rdi

  v2 = a1 - 72;
  if ( a2 )
  {
    v4 = *(IRP **)(v2 + 32);
    v5 = *(_QWORD *)(v2 + 48);
    if ( v4 )
    {
      IopFreeIrpExtension(*(_QWORD *)(v2 + 32), 9, 1);
      IopExceptionCleanupEx(v5, v4, v4->UserEvent, 0LL, 0);
      return;
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v2 + 48), 0x746C6644u);
  }
  v3 = *(void **)(v2 + 56);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  ExFreePoolWithTag((PVOID)v2, 0);
}
