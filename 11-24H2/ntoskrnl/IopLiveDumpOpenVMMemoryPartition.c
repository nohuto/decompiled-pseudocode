/*
 * XREFs of IopLiveDumpOpenVMMemoryPartition @ 0x1405993C8
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x1406A99D0 (ZwOpenPartition.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopLiveDumpOpenVMMemoryPartition(__int64 a1)
{
  NTSTATUS v2; // ebx
  void *v3; // rcx
  bool v4; // al
  bool v6; // [rsp+38h] [rbp-69h] BYREF
  PVOID Object; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-49h] BYREF
  __int64 p_Object; // [rsp+88h] [rbp-19h] BYREF
  int v11; // [rsp+90h] [rbp-11h]
  int v12; // [rsp+94h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+98h] [rbp-9h] BYREF
  __int64 *p_p_Object; // [rsp+B8h] [rbp+17h]
  int v15; // [rsp+C0h] [rbp+1Fh]
  int v16; // [rsp+C4h] [rbp+23h]
  bool *v17; // [rsp+C8h] [rbp+27h]
  int v18; // [rsp+D0h] [rbp+2Fh]
  int v19; // [rsp+D4h] [rbp+33h]
  PVOID *v20; // [rsp+D8h] [rbp+37h]
  int v21; // [rsp+E0h] [rbp+3Fh]
  int v22; // [rsp+E4h] [rbp+43h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenPartition((PHANDLE)(a1 + 1096), 2u, &ObjectAttributes);
  if ( v2 < 0
    || (v3 = *(void **)(a1 + 1096),
        Object = 0LL,
        v2 = ObReferenceObjectByHandle(v3, 2u, PsPartitionType, 0, &Object, 0LL),
        *(_QWORD *)(a1 + 1104) = Object,
        v2 < 0) )
  {
    LODWORD(Object) = v2;
    *(_DWORD *)(a1 + 80) |= 4u;
    if ( IopLiveDumpIsTracingEnabled() )
    {
      v12 = 0;
      p_Object = (__int64)&Object;
      v11 = 4;
      IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_OPEN_VM_MEMORY_PARTITION_FAILURE, 1LL, &p_Object);
    }
    if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x200000000000LL) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      p_p_Object = &p_Object;
      v4 = (*(_DWORD *)(a1 + 80) & 4) != 0;
      p_Object = 0x1000000LL;
      v6 = v4;
      v17 = &v6;
      v20 = &Object;
      v15 = 8;
      v18 = 1;
      LODWORD(Object) = v2;
      v21 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06E80,
        (unsigned __int8 *)&word_140045ADE,
        (const GUID *)(a1 + 968),
        (const GUID *)(a1 + 952),
        5u,
        &v13);
    }
  }
  return (unsigned int)v2;
}
