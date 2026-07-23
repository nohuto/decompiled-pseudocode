/*
 * XREFs of SaferpIsDllAllowed @ 0x1800EB17C
 * Callers:
 *     LdrpCodeAuthzCheckDllAllowedSrpV2 @ 0x1800EB000 (LdrpCodeAuthzCheckDllAllowedSrpV2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtDeviceIoControlFile @ 0x180160130 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenFile @ 0x1801606B0 (NtOpenFile.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SaferpIsDllAllowed(__int64 a1, const void **a2)
{
  NTSTATUS v4; // eax
  NTSTATUS v5; // ebx
  ULONG InputBufferLength; // ebx
  _WORD *Heap; // rax
  _WORD *InputBuffer; // rdi
  _QWORD v10[2]; // [rsp+50h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  NTSTATUS OutputBuffer; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v10[0] = 2359330LL;
  FileHandle = 0LL;
  v10[1] = L"\\Device\\SrpDevice";
  OutputBuffer = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtOpenFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 7u, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 || v4 == -1073741810 )
      v5 = 0;
  }
  else
  {
    InputBufferLength = *(unsigned __int16 *)a2 + 10;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, InputBufferLength);
    InputBuffer = Heap;
    if ( Heap )
    {
      memset_thunk_772440563353939046(Heap, 0, InputBufferLength);
      *(_QWORD *)InputBuffer = a1;
      if ( *(_WORD *)a2 )
      {
        InputBuffer[4] = *(_WORD *)a2;
        memmove(InputBuffer + 5, a2[1], *(unsigned __int16 *)a2);
      }
      v5 = NtDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x225804u,
             InputBuffer,
             InputBufferLength,
             &OutputBuffer,
             4u);
      if ( v5 >= 0 )
        v5 = OutputBuffer;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, InputBuffer);
    }
    else
    {
      v5 = -1073741801;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v5;
}
