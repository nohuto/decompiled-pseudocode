/*
 * XREFs of NdisAllocatePacketPool @ 0x140042160
 * Callers:
 *     ?ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z @ 0x1400C5D70 (-ndisVerifierAllocatePacketPool@@YAXPEAHPEAPEAXII@Z.c)
 * Callees:
 *     NdisAllocatePacketPoolEx @ 0x1400421F0 (NdisAllocatePacketPoolEx.c)
 */

void __stdcall NdisAllocatePacketPool(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT ProtocolReservedLength)
{
  PVOID v8; // [rsp+30h] [rbp-18h] BYREF
  PVOID v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  RtlGetCallersAddress(&v9, &v8);
  NdisAllocatePacketPoolEx(Status, PoolHandle, NumberOfDescriptors, 0, ProtocolReservedLength);
  if ( !*Status )
    *((_QWORD *)*PoolHandle + 3) = v9;
}
