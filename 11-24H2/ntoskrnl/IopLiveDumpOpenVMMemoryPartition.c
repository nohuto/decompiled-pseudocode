/*
 * XREFs of IopLiveDumpOpenVMMemoryPartition @ 0x14059C448
 * Callers:
 *     IoCaptureLiveDump @ 0x1404E6068 (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404FA9A4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1405A3070 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x1406A8A30 (ZwOpenPartition.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopLiveDumpOpenVMMemoryPartition(__int64 a1)
{
  NTSTATUS v2; // ebx
  void *v3; // rcx
  bool v4; // al
  bool v6; // [rsp+38h] [rbp-69h] BYREF
  PVOID Object; // [rsp+40h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-59h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v10; // [rsp+60h] [rbp-41h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-39h]
  int v12; // [rsp+70h] [rbp-31h]
  int v13; // [rsp+74h] [rbp-2Dh]
  __int128 v14; // [rsp+78h] [rbp-29h]
  __int64 p_Object; // [rsp+88h] [rbp-19h] BYREF
  int v16; // [rsp+90h] [rbp-11h]
  int v17; // [rsp+94h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+98h] [rbp-9h] BYREF
  __int64 *p_p_Object; // [rsp+B8h] [rbp+17h]
  int v20; // [rsp+C0h] [rbp+1Fh]
  int v21; // [rsp+C4h] [rbp+23h]
  bool *v22; // [rsp+C8h] [rbp+27h]
  int v23; // [rsp+D0h] [rbp+2Fh]
  int v24; // [rsp+D4h] [rbp+33h]
  PVOID *v25; // [rsp+D8h] [rbp+37h]
  int v26; // [rsp+E0h] [rbp+3Fh]
  int v27; // [rsp+E4h] [rbp+43h]

  v13 = 0;
  v9[1] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  v10 = 0LL;
  p_DestinationString = &DestinationString;
  v9[0] = 48;
  v12 = 512;
  v14 = 0LL;
  v2 = ZwOpenPartition(a1 + 1096, 2LL, v9);
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
      v17 = 0;
      p_Object = (__int64)&Object;
      v16 = 4;
      IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_OPEN_VM_MEMORY_PARTITION_FAILURE, 1LL, &p_Object);
    }
    if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x200000000000LL) )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      p_p_Object = &p_Object;
      v4 = (*(_DWORD *)(a1 + 80) & 4) != 0;
      p_Object = 0x1000000LL;
      v6 = v4;
      v22 = &v6;
      v25 = &Object;
      v20 = 8;
      v23 = 1;
      LODWORD(Object) = v2;
      v26 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E06E80,
        (unsigned __int8 *)byte_140045CD5,
        (const GUID *)(a1 + 968),
        (const GUID *)(a1 + 952),
        5u,
        &v18);
    }
  }
  return (unsigned int)v2;
}
