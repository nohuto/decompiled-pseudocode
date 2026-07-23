/*
 * XREFs of IopFreeCopyObjectsFromDataBuffer @ 0x14025F988
 * Callers:
 *     IopFreeCopyObjectsFromIrp @ 0x14025F930 (IopFreeCopyObjectsFromIrp.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline @ 0x1405948FC (Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline.c)
 *     IopExceptionCleanupEx @ 0x140958E38 (IopExceptionCleanupEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeCopyObjectsFromDataBuffer(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  IRP *v4; // rsi
  ULONG_PTR v5; // rdi
  void *v6; // rcx
  void *v7; // rcx

  v3 = a1 - 80;
  if ( a2 )
  {
    v4 = *(IRP **)(v3 + 32);
    v5 = *(_QWORD *)(v3 + 48);
    if ( v4 )
    {
      LOBYTE(a3) = 1;
      IopFreeIrpExtension(*(_QWORD *)(v3 + 32), 9LL, a3);
      IopExceptionCleanupEx(v5, v4, v4->UserEvent, 0LL, 0);
      return;
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 48), 0x746C6644u);
  }
  v6 = *(void **)(v3 + 56);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  if ( (unsigned int)Feature_CopyFileChunk_BufferAlignment__private_IsEnabledDeviceUsageNoInline() )
    v7 = *(void **)(v3 + 72);
  else
    v7 = (void *)v3;
  ExFreePoolWithTag(v7, 0);
}
