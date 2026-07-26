/*
 * XREFs of ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059CB0
 * Callers:
 *     ?ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z @ 0x1400037D0 (-ndisNsiCopyMemoryWithIfBlockLock@@YAXPEAU_NDIS_IF_BLOCK@@PEAE1K@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140059C40 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall IFBLOCK_DEREFERENCE_MINIPORT_LINK(struct _NDIS_IF_BLOCK *a1, unsigned __int8 a2)
{
  NDIS_REFCOUNT_HANDLE__ *MpRefCountTracker; // r8
  __int64 v4; // r10
  unsigned __int8 i; // al
  _BYTE *v7; // r9
  char v8; // cl
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  NDIS_REFCOUNT_HANDLE__ *v11; // rdi
  unsigned int v12; // r9d

  MpRefCountTracker = a1->MpRefCountTracker;
  if ( (unsigned __int64)MpRefCountTracker - 2 > 1 )
  {
    if ( (unsigned __int64)MpRefCountTracker < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)MpRefCountTracker, 0LL);
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)MpRefCountTracker & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)MpRefCountTracker, 0xFFuLL);
      *(_BYTE *)MpRefCountTracker &= ~2u;
    }
    else
    {
      if ( a2 >= *((_BYTE *)MpRefCountTracker + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)MpRefCountTracker, a2);
      if ( *((_BYTE *)MpRefCountTracker + 1) )
      {
        if ( *((_BYTE *)MpRefCountTracker + 1) != 1 )
          goto LABEL_8;
        v11 = MpRefCountTracker + 16 * (unsigned __int64)a2;
        v12 = *((_DWORD *)v11 + 16);
        if ( v12 >> 17 < 0x3FFE && (unsigned __int16)v12 >> 1 == (v12 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v11 + 2));
          *((_DWORD *)v11 + 16) &= 0x10001u;
          goto LABEL_8;
        }
        if ( (unsigned __int16)v12 >> 1 || (v12 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v11 + 2), 0);
          goto LABEL_8;
        }
        goto LABEL_17;
      }
      v4 = *((_QWORD *)MpRefCountTracker + 1);
      if ( !v4 )
      {
LABEL_7:
        if ( _bittestandreset((signed __int32 *)MpRefCountTracker + 4, a2) )
          goto LABEL_8;
LABEL_17:
        ndisReportRefcountImbalance((ULONG_PTR)MpRefCountTracker, a2);
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_BYTE *)MpRefCountTracker + 3) )
          goto LABEL_7;
        v7 = (_BYTE *)(v4 + 2LL * i);
        if ( *v7 == a2 )
        {
          v8 = v7[1];
          if ( v8 )
            break;
        }
      }
      v7[1] = v8 - 1;
    }
  }
LABEL_8:
  if ( a1->MiniportLinkReference-- == 1 )
  {
    Miniport = a1->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
}
