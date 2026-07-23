/*
 * XREFs of DbgkPostModuleMessage @ 0x140480C54
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     DbgkPostEnclaveModuleMessages @ 0x14057B9BC (DbgkPostEnclaveModuleMessages.c)
 *     DbgkpPostModuleMessages @ 0x140A41618 (DbgkpPostModuleMessages.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     DbgkpQueueMessage @ 0x1408F3750 (DbgkpQueueMessage.c)
 *     MmGetFileNameForAddress @ 0x140A15B1C (MmGetFileNameForAddress.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall DbgkPostModuleMessage(PVOID Object, PVOID a2, void *a3, int a4, int a5, PRKEVENT Event)
{
  NTSTATUS v10; // eax
  HANDLE v11; // r8
  NTSTATUS result; // eax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[40]; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+A8h] [rbp-58h]
  HANDLE FileHandle[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C4h] [rbp-3Ch]

  IoStatusBlock = 0LL;
  *(_OWORD *)P = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_0(v16, 0, 0x110uLL);
  v20 = a5;
  v17 = 5;
  FileHandle[1] = a3;
  v19 = a4;
  if ( (int)MmGetFileNameForAddress(a3, P) >= 0 )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
    v11 = FileHandle[0];
    if ( v10 < 0 )
      v11 = 0LL;
    FileHandle[0] = v11;
    ExFreePoolWithTag(P[1], 0);
  }
  if ( Event )
  {
    result = DbgkpQueueMessage(Object, a2, Event);
    if ( result >= 0 )
      return result;
  }
  else
  {
    result = DbgkpSendApiMessage(Object);
  }
  if ( FileHandle[0] )
    return ObCloseHandle(FileHandle[0], 0);
  return result;
}
