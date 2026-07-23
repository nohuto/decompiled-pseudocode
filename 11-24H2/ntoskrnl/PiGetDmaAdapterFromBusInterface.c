/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x14071DE54
 * Callers:
 *     IoGetDmaAdapter @ 0x14071DB60 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(ULONG_PTR MaxDataSize, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rcx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rsi
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE v15[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+58h] [rbp-20h]

  memset_0(v15, 0, 0x40uLL);
  v4 = 0LL;
  if ( !MaxDataSize )
    goto LABEL_20;
  v5 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
  if ( !v5 || (*(_DWORD *)(v5 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v8 = *(_QWORD *)(MaxDataSize + 8);
    if ( v8 )
    {
      IoAddTriageDumpDataBlock(v8, (PVOID)(unsigned int)*(__int16 *)(v8 + 2));
      v9 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v10 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v10 )
    {
      v11 = (unsigned __int16 *)(v10 + 40);
      IoAddTriageDumpDataBlock(v10, (PVOID)0x388);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v11 + 1), (PVOID)*v11);
      }
      v12 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
      }
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
      if ( v13 && *(_WORD *)(v13 + 56) )
      {
        IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface((PVOID)MaxDataSize, 0LL, v15) >= 0 )
  {
    if ( v17 )
      v4 = guard_dispatch_icall_no_overrides(v16, a2);
    guard_dispatch_icall_no_overrides(v16, v6);
  }
  return v4;
}
