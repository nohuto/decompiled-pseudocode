/*
 * XREFs of CmpDoFileRead @ 0x14047546C
 * Callers:
 *     CmpFileRead @ 0x140A4E030 (CmpFileRead.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     CmpCreateEvent @ 0x140932EC0 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileRead(HANDLE FileHandle, __int64 a2, ULONG a3, char *a4, ULONG a5, int a6, __int64 a7)
{
  ULONG v7; // edi
  ULONG v9; // r15d
  int v10; // eax
  NTSTATUS Status; // ebx
  char *Buffer; // rcx
  ULONG Length; // edi
  int Information; // ecx
  __int64 result; // rax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h]
  HANDLE Event; // [rsp+60h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-18h] BYREF
  ULONG v21; // [rsp+C0h] [rbp+40h]

  v21 = a3;
  ByteOffset.QuadPart = 0LL;
  Event = 0LL;
  v7 = a3;
  Object = 0LL;
  v9 = 0x10000000;
  IoStatusBlock = 0LL;
  v10 = CmpCreateEvent(SynchronizationEvent);
  Status = v10;
  if ( v10 >= 0 )
  {
    Buffer = a4;
    while ( a5 )
    {
      ByteOffset.QuadPart = v7;
      Length = v9;
      if ( a5 <= v9 )
        Length = a5;
      Status = ZwReadFile(FileHandle, Event, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 || v9 <= 0x10000 )
      {
        a5 -= Length;
        v21 = Length + ByteOffset.LowPart;
        Buffer = &a4[Length];
        a4 = Buffer;
        if ( Status < 0 )
        {
          if ( a7 )
          {
            *(_DWORD *)(a7 + 208) = 1;
            *(_QWORD *)(a7 + 216) = FileHandle;
            *(_DWORD *)(a7 + 224) = Status;
          }
          CmRegistryIODebug = 1;
          qword_140FD9EE0 = (__int64)FileHandle;
          dword_140FD9EE8 = Status;
          goto LABEL_17;
        }
        if ( IoStatusBlock.Information != Length )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          ZwClose(Event);
          Information = IoStatusBlock.Information;
          if ( a7 )
          {
            *(_DWORD *)(a7 + 208) = 1;
            *(_QWORD *)(a7 + 216) = FileHandle;
            *(_DWORD *)(a7 + 224) = Information - Length;
          }
          CmRegistryIODebug = 1;
          dword_140FD9EE8 = Information - Length;
          result = 3221225489LL;
          qword_140FD9EE0 = (__int64)FileHandle;
          return result;
        }
      }
      else
      {
        Buffer = a4;
        v9 >>= 1;
      }
      v7 = v21;
    }
    Status = 0;
LABEL_17:
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    ZwClose(Event);
    return (unsigned int)Status;
  }
  SetFailureLocation(a7, 1, 12, v10, 16);
  return (unsigned int)Status;
}
