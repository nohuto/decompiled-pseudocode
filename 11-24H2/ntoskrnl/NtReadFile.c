/*
 * XREFs of NtReadFile @ 0x140846640
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x14060B8A4 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
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
