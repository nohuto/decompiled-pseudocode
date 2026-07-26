/*
 * XREFs of ?ndisVerifierAllocatePacketPoolEx@@YAXPEAHPEAPEAXIII@Z @ 0x1400CCF40
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocatePacketPoolEx @ 0x1400302A0 (NdisAllocatePacketPoolEx.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1400CD114 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

void __fastcall ndisVerifierAllocatePacketPoolEx(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT NumberOfOverflowDescriptors,
        UINT ProtocolReservedLength)
{
  unsigned __int8 v9; // cl
  PVOID v10; // [rsp+30h] [rbp-18h] BYREF
  PVOID v11; // [rsp+38h] [rbp-10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  RtlGetCallersAddress(&v10, &v11);
  if ( ndisVerifierInjectResourceFailure(v9) )
  {
    *PoolHandle = 0LL;
    *Status = -1073741670;
  }
  else
  {
    NdisAllocatePacketPoolEx(
      Status,
      PoolHandle,
      NumberOfDescriptors,
      NumberOfOverflowDescriptors,
      ProtocolReservedLength);
    if ( !*Status )
      *((_QWORD *)*PoolHandle + 3) = v10;
  }
}
