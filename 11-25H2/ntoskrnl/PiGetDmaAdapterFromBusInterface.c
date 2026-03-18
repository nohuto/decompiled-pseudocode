/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x1407141C4
 * Callers:
 *     IoGetDmaAdapter @ 0x140713ED0 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(ULONG_PTR MaxDataSize)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rsi
  _WORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _BYTE v12[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+38h] [rbp-40h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  memset_0(v12, 0, 0x40uLL);
  v2 = 0LL;
  if ( !MaxDataSize )
    goto LABEL_20;
  v3 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v5 = *(_QWORD *)(MaxDataSize + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)(unsigned int)*(__int16 *)(v5 + 2));
      v6 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v7 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v7 )
    {
      v8 = (unsigned __int16 *)(v7 + 40);
      IoAddTriageDumpDataBlock(v7, (PVOID)0x388);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v8 + 1), (PVOID)*v8);
      }
      v9 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
      }
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
      if ( v10 && *(_WORD *)(v10 + 56) )
      {
        IoAddTriageDumpDataBlock(v10 + 56, (PVOID)2);
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v11 + 64), (PVOID)*(unsigned __int16 *)(v11 + 56));
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface((PVOID)MaxDataSize, 0LL, v12) >= 0 )
  {
    if ( v14 )
      v2 = guard_dispatch_icall_no_overrides(v13);
    guard_dispatch_icall_no_overrides(v13);
  }
  return v2;
}
