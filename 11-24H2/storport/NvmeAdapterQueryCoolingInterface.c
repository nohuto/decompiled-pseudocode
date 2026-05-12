/*
 * XREFs of NvmeAdapterQueryCoolingInterface @ 0x1401304AC
 * Callers:
 *     NvmeAdapterQueryInterfaceIrp @ 0x1400D5F3C (NvmeAdapterQueryInterfaceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterQueryCoolingInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v3 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 8) = a1;
  *(_QWORD *)(v3 + 16) = RaidNullReference;
  *(_QWORD *)(v3 + 24) = RaidNullReference;
  *(_QWORD *)(v3 + 48) = NvmeAdapterPassiveCoolingCallback;
  *(_DWORD *)v3 = 65592;
  return 0LL;
}
