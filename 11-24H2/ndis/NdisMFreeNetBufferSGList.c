/*
 * XREFs of NdisMFreeNetBufferSGList @ 0x140028B80
 * Callers:
 *     <none>
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x140028CB0 (PplpLazyInitializeLookasideList.c)
 *     ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1400C6F74 (-RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMFreeNetBufferSGList(
        NDIS_HANDLE NdisMiniportDmaHandle,
        PSCATTER_GATHER_LIST pSGL,
        PNET_BUFFER NetBuffer)
{
  unsigned __int16 Reserved; // ax
  void *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdi
  struct _MDL *v9; // rsi
  char *v10; // rdi
  unsigned __int64 CurrentMdlOffset; // r8
  unsigned __int64 DataLength; // r9
  struct _MDL *CurrentMdl; // rdx
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSCATTER_GATHER_LIST, bool))(*(_QWORD *)(*((_QWORD *)NdisMiniportDmaHandle + 5) + 8LL)
                                                             + 96LL))(
    *((_QWORD *)NdisMiniportDmaHandle + 5),
    pSGL,
    (NetBuffer->Reserved & 4) != 0);
  Reserved = NetBuffer->Reserved;
  if ( (Reserved & 1) != 0 )
  {
    v6 = NetBuffer->NdisReserved[0];
    NetBuffer->NdisReserved[0] = 0LL;
    NetBuffer->Reserved = Reserved & 0xFFFE;
    v7 = *((_QWORD *)NdisMiniportDmaHandle + 10);
    v8 = v7 + ((unsigned __int64)(KeGetPcr()->Prcb.Number + 1) << 7);
    if ( !*(_BYTE *)(v8 + 176) )
      PplpLazyInitializeLookasideList(v7, v8 + 64);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v8 + 64), v6);
  }
  else if ( (Reserved & 2) != 0 )
  {
    v9 = (struct _MDL *)NetBuffer->NdisReserved[0];
    v10 = (char *)v9->StartVa + v9->ByteOffset;
    if ( (Reserved & 4) == 0 )
    {
      CurrentMdlOffset = NetBuffer->CurrentMdlOffset;
      DataLength = NetBuffer->DataLength;
      CurrentMdl = NetBuffer->CurrentMdl;
      v14 = 0LL;
      RtlCopyBufferToMdl(&v10[48 * CurrentMdlOffset], CurrentMdl, CurrentMdlOffset, DataLength, &v14);
    }
    NetBuffer->Reserved &= ~2u;
    NetBuffer->NdisReserved[0] = 0LL;
    IoFreeMdl(v9);
    ExFreePoolWithTag(v10, 0);
  }
  NetBuffer->Reserved &= ~4u;
}
