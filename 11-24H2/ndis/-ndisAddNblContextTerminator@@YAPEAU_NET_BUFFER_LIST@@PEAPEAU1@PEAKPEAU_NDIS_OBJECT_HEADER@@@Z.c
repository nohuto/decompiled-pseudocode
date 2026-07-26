/*
 * XREFs of ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140072EC0
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400D39F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     NdisAllocateNetBufferListContext @ 0x1400433B0 (NdisAllocateNetBufferListContext.c)
 *     TrackNblContextVerifierFailure @ 0x1400A2970 (TrackNblContextVerifierFailure.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisAddNblContextTerminator(
        struct _NET_BUFFER_LIST **a1,
        unsigned int *a2,
        struct _NDIS_OBJECT_HEADER *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rbx
  _SLIST_HEADER *v9; // r15
  _SLIST_HEADER *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-1A0h]
  _QWORD v14[48]; // [rsp+30h] [rbp-198h] BYREF

  v13 = &v12;
  v6 = 0;
  v12 = 0LL;
  v7 = 0LL;
  memset(&v14[1], 0, 0x178uLL);
  Alignment = *a1;
  v9 = (_SLIST_HEADER *)v14;
  v14[0] = Alignment;
  if ( Alignment )
  {
    do
    {
      if ( NdisAllocateNetBufferListContext(Alignment, 8u, 0, 0x6376444Eu) )
      {
        TrackNblContextVerifierFailure(Alignment, a3);
        v9->Alignment = Alignment->Link.Alignment;
        Alignment->Link.Alignment = 0LL;
        *v13 = (__int64)Alignment;
        v13 = (__int64 *)Alignment;
        Alignment = (struct _NET_BUFFER_LIST *)v9->Alignment;
      }
      else
      {
        v9 = (_SLIST_HEADER *)Alignment;
        *(_QWORD *)&Alignment->Context->ContextData[Alignment->Context->Offset] = a3;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
    }
    while ( Alignment );
    v7 = v12;
    Alignment = (struct _NET_BUFFER_LIST *)v14[0];
  }
  if ( a2 )
  {
    v10 = (_SLIST_HEADER *)Alignment;
    if ( Alignment )
    {
      do
      {
        v10 = (_SLIST_HEADER *)v10->Alignment;
        ++v6;
      }
      while ( v10 );
    }
    *a2 = v6;
  }
  *a1 = Alignment;
  return (struct _NET_BUFFER_LIST *)v7;
}
