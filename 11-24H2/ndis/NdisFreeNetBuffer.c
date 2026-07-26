/*
 * XREFs of NdisFreeNetBuffer @ 0x14001A2D0
 * Callers:
 *     NdisFreeFragmentNetBufferList @ 0x140021FE0 (NdisFreeFragmentNetBufferList.c)
 *     NdisFreeCloneNetBufferList @ 0x140022D10 (NdisFreeCloneNetBufferList.c)
 * Callees:
 *     ndisFreeToLookasideList @ 0x14001A660 (ndisFreeToLookasideList.c)
 *     ndisPplLazyInitializeLookaside @ 0x14005E1E0 (ndisPplLazyInitializeLookaside.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisFreeNetBuffer(PNET_BUFFER NetBuffer)
{
  _DWORD *NdisPoolHandle; // rdi
  _MDL *MdlChain; // rcx
  unsigned __int64 v4; // rax
  char *v5; // rsi
  volatile signed __int32 *v6; // rdi

  NdisPoolHandle = NetBuffer->NdisPoolHandle;
  if ( (NdisPoolHandle[20] & 1) != 0 )
  {
    MdlChain = NetBuffer->MdlChain;
    if ( (MdlChain->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(MdlChain->MappedSystemVa, MdlChain);
  }
  if ( (NdisPoolHandle[1] & 1) != 0 )
  {
    if ( (unsigned __int64)NetBuffer < 0x20 )
      ndisBugCheckEx(0x31uLL, 3uLL, (ULONG_PTR)NetBuffer, 0LL);
    ExFreePoolWithTag(&NetBuffer[-1].MiniportReserved[2], 0);
  }
  else
  {
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_9;
    v4 = (unsigned __int64)LODWORD(NetBuffer[-1].SharedMemoryInfo) << 8;
    v5 = (char *)NdisPoolHandle + v4 + 384;
    if ( !v5[216] )
      ndisPplLazyInitializeLookaside((PLOOKASIDE_LIST_EX)((char *)NdisPoolHandle + v4 + 384));
    if ( !(unsigned __int8)ndisFreeToLookasideList(v5, NetBuffer) )
    {
LABEL_9:
      v6 = NdisPoolHandle + 32;
      _InterlockedIncrement(v6 + 7);
      if ( ExQueryDepthSList((PSLIST_HEADER)v6) >= *((_WORD *)v6 + 8) )
      {
        _InterlockedIncrement(v6 + 8);
        (*((void (__fastcall **)(PNET_BUFFER, volatile signed __int32 *))v6 + 7))(NetBuffer, v6);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v6, (PSLIST_ENTRY)NetBuffer);
      }
    }
  }
}
