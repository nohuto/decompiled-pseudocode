/*
 * XREFs of NdisAdvanceNetBufferListDataStart @ 0x140041540
 * Callers:
 *     NdisFreeReassembledNetBufferList @ 0x1400C6CE0 (NdisFreeReassembledNetBufferList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __stdcall NdisAdvanceNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlMdlHandler)
{
  _NET_BUFFER *FirstNetBuffer; // rbx
  void (__fastcall *v7)(_NET_BUFFER *); // rdi
  _NET_BUFFER *MdlChain; // rdx
  _MDL *CurrentMdl; // rcx
  ULONG i; // eax
  _MDL *v11; // rax
  unsigned int DataOffset; // r8d
  ULONG ByteCount; // edx

  FirstNetBuffer = NetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    v7 = (void (__fastcall *)(_NET_BUFFER *))ndisFreeMdlInternal;
    if ( FreeMdlMdlHandler )
      v7 = (void (__fastcall *)(_NET_BUFFER *))FreeMdlMdlHandler;
    do
    {
      FirstNetBuffer->DataOffset += DataOffsetDelta;
      FirstNetBuffer->DataLength -= DataOffsetDelta;
      MdlChain = (_NET_BUFFER *)FirstNetBuffer->MdlChain;
      if ( FreeMdl )
      {
        CurrentMdl = FirstNetBuffer->MdlChain;
        if ( MdlChain )
        {
          v11 = FirstNetBuffer->MdlChain;
          do
          {
            DataOffset = FirstNetBuffer->DataOffset;
            CurrentMdl = v11;
            if ( MdlChain->DataOffset > DataOffset )
              break;
            if ( MdlChain == &FirstNetBuffer[1] )
              break;
            FirstNetBuffer->MdlChain = (_MDL *)MdlChain->Link.Alignment;
            FirstNetBuffer->DataOffset = DataOffset - MdlChain->DataOffset;
            v7(MdlChain);
            MdlChain = (_NET_BUFFER *)FirstNetBuffer->MdlChain;
            v11 = (_MDL *)MdlChain;
            CurrentMdl = (_MDL *)MdlChain;
          }
          while ( MdlChain );
        }
        i = FirstNetBuffer->DataOffset;
      }
      else
      {
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        for ( i = DataOffsetDelta + FirstNetBuffer->CurrentMdlOffset; CurrentMdl; i -= ByteCount )
        {
          ByteCount = CurrentMdl->ByteCount;
          if ( ByteCount > i )
            break;
          CurrentMdl = CurrentMdl->Next;
        }
      }
      FirstNetBuffer->Link.Region = (unsigned __int64)CurrentMdl;
      FirstNetBuffer->CurrentMdlOffset = i;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
  }
}
