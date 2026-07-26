/*
 * XREFs of ?ndisNblPoisonScratchFields@@YAXPEAU_NET_BUFFER_LIST@@@Z @ 0x140021AD0
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x140021180 (NdisMSendNetBufferListsComplete.c)
 *     NdisSendNetBufferLists @ 0x140027C10 (NdisSendNetBufferLists.c)
 * Callees:
 *     memset @ 0x1400E7500 (memset.c)
 */

void __fastcall ndisNblPoisonScratchFields(struct _NET_BUFFER_LIST *a1)
{
  struct _NET_BUFFER_LIST *Alignment; // rbx
  char v2; // si
  unsigned int Flags; // eax
  unsigned int v4; // eax
  _NET_BUFFER_LIST_CONTEXT *i; // rdi

  if ( a1 )
  {
    Alignment = a1;
    v2 = byte_14011CEC0;
    do
    {
      Alignment->Scratch = MmBadPointer;
      Flags = Alignment->Flags;
      Alignment->ChildRefCount = -892679478;
      if ( v2 )
      {
        v2 = 0;
        v4 = Flags & 0xFFF0FFFF;
      }
      else
      {
        v2 = 1;
        v4 = Flags | 0xF0000;
      }
      byte_14011CEC0 = v2;
      Alignment->Flags = v4;
      for ( i = Alignment->Context; i; i = i->Next )
        memset(i->ContextData, 202, i->Offset);
      Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    }
    while ( Alignment );
  }
}
