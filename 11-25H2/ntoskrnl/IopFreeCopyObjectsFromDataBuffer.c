/*
 * XREFs of IopFreeCopyObjectsFromDataBuffer @ 0x140484034
 * Callers:
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x140252920 (IopFreeIrpExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     IopExceptionCleanupEx @ 0x1409887B0 (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
