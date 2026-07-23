/*
 * XREFs of IopAllocateFileObjectExtension @ 0x1403B4640
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1403B40C0 (FsRtlInsertPerFileObjectContext.c)
 *     IoSetShadowFileInformation @ 0x1403B4530 (IoSetShadowFileInformation.c)
 *     IoGetFileObjectFilterContext @ 0x1403B45C0 (IoGetFileObjectFilterContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1404BF350 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSetFileObjectIosbRange @ 0x140710988 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140712BD4 (IopSetFileMemoryPartitionInformation.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408AAEC0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    if ( v3 == &qword_1400145A0 )
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
    Pool2 = (__int64 *)ExAllocatePool2(0x40uLL, 0x60uLL, 0x45466F49u);
    if ( !Pool2 )
    {
      v10 = &qword_1400145A0;
      v8 = -1073741670;
      if ( !a3 )
        v10 = 0LL;
      Pool2 = v10;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 208), (signed __int64)Pool2, 0LL) )
    {
      if ( Pool2 && Pool2 != &qword_1400145A0 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = *(__int64 **)(a1 + 208);
    }
    *a2 = Pool2;
    return v8;
  }
}
