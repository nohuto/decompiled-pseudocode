/*
 * XREFs of IopAllocateFileObjectExtension @ 0x1403C5A80
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1403C5500 (FsRtlInsertPerFileObjectContext.c)
 *     IoSetShadowFileInformation @ 0x1403C5970 (IoSetShadowFileInformation.c)
 *     IoGetFileObjectFilterContext @ 0x1403C5A00 (IoGetFileObjectFilterContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1404C3E20 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140715044 (IopSetFileMemoryPartitionInformation.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408A2820 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
    if ( v3 == qword_140014770 )
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
      v10 = qword_140014770;
      v8 = -1073741670;
      if ( !a3 )
        v10 = 0LL;
      Pool2 = v10;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 && Pool2 != qword_140014770 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = *(__int64 **)(a1 + 208);
    }
    *a2 = Pool2;
    return v8;
  }
}
