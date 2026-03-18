/*
 * XREFs of NtReadFile @ 0x14084E5D0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1406012B8 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 */

NTSTATUS __stdcall NtReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  NTSTATUS result; // eax
  PVOID v10; // rcx
  _DWORD *v11; // rax
  char IsProcessAppContainer; // al
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             1u,
             (POBJECT_TYPE)IoFileObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v10 = Object;
    v11 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v11
      && (*v11 & 4) != 0
      && (IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process),
          v10 = Object,
          IsProcessAppContainer) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    else
    {
      return IopReadFile(
               (ULONG_PTR)v10,
               (__int64)IoStatusBlock,
               Buffer,
               Length,
               (__int64)ByteOffset,
               (__int64)Key,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
    }
  }
  return result;
}
