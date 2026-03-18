/*
 * XREFs of HalpMapTransferV3 @ 0x140336994
 * Callers:
 *     IoMapTransferInternal @ 0x140333E20 (IoMapTransferInternal.c)
 *     IopMapTransfer @ 0x140334310 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403353E0 (HalpAllocateAdapterCallbackV2.c)
 * Callees:
 *     HalpDmaMapScatterTransferV3 @ 0x140497828 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404CCF54 (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaZeroMapBuffers @ 0x14054CFBC (HalpDmaZeroMapBuffers.c)
 */

__int64 __fastcall HalpMapTransferV3(__int64 a1, int a2, __int64 a3, __int16 a4, _DWORD *a5, char a6, char a7)
{
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v12[0] = 0LL;
  if ( !*a5 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 512) )
  {
    *a5 = 0;
    return 0LL;
  }
  v9 = *(_QWORD *)(a3 + 56);
  if ( *(_BYTE *)(a1 + 442) )
    HalpDmaMapScatterTransferV3(a1, a2, a3, a4, (__int64)a5, a6, a7, (__int64)v12);
  else
    HalpDmaMapContiguousTransferV3(a1, a2, a3, a4, (__int64)a5, a6, a7, (__int64)v12);
  if ( !*(_BYTE *)(a1 + 441) && !a6 )
  {
    if ( *(_BYTE *)(a1 + 444) )
      HalpDmaZeroMapBuffers(v10, v9, a4 & 0xFFF, (unsigned int)*a5);
  }
  return v12[0];
}
