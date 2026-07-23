/*
 * XREFs of IopLiveDumpAllocateFromVMMemoryPartition @ 0x140596198
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404952D4 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140394410 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x14059FFB0 (IopLiveDumpTrace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

PVOID __fastcall IopLiveDumpAllocateFromVMMemoryPartition(__int64 a1, __int64 a2, ULONG_PTR *a3)
{
  PVOID v3; // r15
  ULONG v6; // esi
  ULONG_PTR PartitionNodePagesForMdl; // r14
  bool v8; // al
  bool v10; // [rsp+40h] [rbp-49h] BYREF
  int v11[2]; // [rsp+48h] [rbp-41h] BYREF
  __int64 v12; // [rsp+50h] [rbp-39h] BYREF
  int v13; // [rsp+58h] [rbp-31h]
  int v14; // [rsp+5Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v16; // [rsp+80h] [rbp-9h]
  int v17; // [rsp+88h] [rbp-1h]
  int v18; // [rsp+8Ch] [rbp+3h]
  bool *v19; // [rsp+90h] [rbp+7h]
  int v20; // [rsp+98h] [rbp+Fh]
  int v21; // [rsp+9Ch] [rbp+13h]
  int *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]

  v3 = 0LL;
  *(_QWORD *)v11 = a2;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0xC) != 0 )
    return 0LL;
  v6 = BufferChunkSizeInBytes;
  PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                               0,
                               -1,
                               BufferChunkSizeInBytes,
                               a2,
                               1u,
                               0,
                               101,
                               *(_QWORD *)(a1 + 1104));
  if ( !PartitionNodePagesForMdl )
  {
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                                 0,
                                 -1,
                                 v6,
                                 *(__int64 *)v11,
                                 1u,
                                 0,
                                 37,
                                 *(_QWORD *)(a1 + 1104));
    if ( !PartitionNodePagesForMdl )
    {
      *(_DWORD *)(a1 + 80) |= 8u;
      v11[0] = -1073741801;
      if ( IopLiveDumpIsTracingEnabled() )
      {
        v14 = 0;
        v12 = (__int64)v11;
        v13 = 4;
        IopLiveDumpTrace(LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION_FROM_VM_MEMORY_PARTITION_FAILURE, 1LL, &v12);
      }
      if ( (unsigned int)dword_140E06E80 > 5 && tlgKeywordOn((__int64)&dword_140E06E80, 0x400000000000LL) )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v16 = &v12;
        v8 = (*(_DWORD *)(a1 + 80) & 8) != 0;
        v12 = 0x1000000LL;
        v10 = v8;
        v19 = &v10;
        v22 = v11;
        v17 = 8;
        v20 = 1;
        v11[0] = -1073741801;
        v23 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06E80,
          (unsigned __int8 *)&dword_140045A6C,
          (const GUID *)(a1 + 968),
          (const GUID *)(a1 + 952),
          5u,
          &v15);
      }
      return v3;
    }
  }
  if ( (*(_BYTE *)(PartitionNodePagesForMdl + 10) & 5) != 0 )
    v3 = *(PVOID *)(PartitionNodePagesForMdl + 24);
  else
    v3 = MmMapLockedPagesSpecifyCache((PMDL)PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v3 )
  {
    MiFreePagesFromMdl(PartitionNodePagesForMdl, 0, 0, 0);
    ExFreePoolWithTag((PVOID)PartitionNodePagesForMdl, 0);
    return 0LL;
  }
  *a3 = PartitionNodePagesForMdl;
  return v3;
}
