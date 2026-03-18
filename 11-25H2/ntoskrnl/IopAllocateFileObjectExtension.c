/*
 * XREFs of IopAllocateFileObjectExtension @ 0x1402A2840
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A22A0 (FsRtlInsertPerFileObjectContext.c)
 *     IoSetShadowFileInformation @ 0x1402A2730 (IoSetShadowFileInformation.c)
 *     IoGetFileObjectFilterContext @ 0x1402A27C0 (IoGetFileObjectFilterContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1404C5740 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSetFileObjectIosbRange @ 0x140706CF8 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140708F44 (IopSetFileMemoryPartitionInformation.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408EFBD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 **a2, char a3)
{
  __int64 *v3; // rax
  unsigned int v8; // ebp
  __int64 *Pool2; // rcx
  __int64 *v10; // rax

  v3 = *(__int64 **)(a1 + 208);
  if ( v3 )
  {
    if ( v3 == qword_1400140F0 )
    {
      return 3221225626LL;
    }
    else
    {
      *a2 = v3;
      return 0LL;
    }
  }
  else
  {
    v8 = 0;
    Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      v10 = qword_1400140F0;
      v8 = -1073741670;
      if ( !a3 )
        v10 = 0LL;
      Pool2 = v10;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 && Pool2 != qword_1400140F0 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = *(__int64 **)(a1 + 208);
    }
    *a2 = Pool2;
    return v8;
  }
}
