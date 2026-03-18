/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x1407202C4
 * Callers:
 *     IoGetDmaAdapter @ 0x14071FFD0 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(ULONG_PTR MaxDataSize, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rsi
  _WORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _BYTE v19[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+58h] [rbp-20h]

  memset_0(v19, 0, 0x40uLL);
  v6 = 0LL;
  if ( !MaxDataSize )
    goto LABEL_20;
  v7 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
  if ( !v7 || (*(_DWORD *)(v7 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v12 = *(_QWORD *)(MaxDataSize + 8);
    if ( v12 )
    {
      IoAddTriageDumpDataBlock(v12, (PVOID)(unsigned int)*(__int16 *)(v12 + 2));
      v13 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v14 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v14 )
    {
      v15 = (unsigned __int16 *)(v14 + 40);
      IoAddTriageDumpDataBlock(v14, (PVOID)0x388);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v15 + 1), (PVOID)*v15);
      }
      v16 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL);
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
      }
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
      if ( v17 && *(_WORD *)(v17 + 56) )
      {
        IoAddTriageDumpDataBlock(v17 + 56, (PVOID)2);
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface((PVOID)MaxDataSize, 0LL, v19) >= 0 )
  {
    if ( v21 )
      v6 = guard_dispatch_icall_no_overrides(v20, a2, a3, v10);
    guard_dispatch_icall_no_overrides(v20, v8, v9, v10);
  }
  return v6;
}
