/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A740
 * Callers:
 *     NdisCmRegisterAddressFamilyEx @ 0x140051A10 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisClOpenAddressFamilyEx @ 0x14005A060 (NdisClOpenAddressFamilyEx.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005A6A0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x14005A8E0 (NdisCmOpenAddressFamilyComplete.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x14005B4D0 (NdisCmCloseAddressFamilyComplete.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008DBB0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A6920 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017FC80 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140182A70 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x140007E60 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x140010990 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140010F10 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x140096020 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140180D10 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMDereferenceOpenLocked(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 a2)
{
  ULONG_PTR v3; // rbx
  ULONG_PTR RefCountTracker; // r8
  __int64 v5; // r9
  int v6; // ebx
  unsigned __int8 i; // al
  _BYTE *v8; // rdx
  char v9; // cl
  ULONG_PTR v10; // rbp
  unsigned int v11; // edx

  v3 = a2;
  KeAcquireSpinLockAtDpcLevel(&a1->RefCountLock);
  RefCountTracker = (ULONG_PTR)a1->RefCountTracker;
  if ( RefCountTracker - 2 <= 1 )
    goto LABEL_8;
  if ( RefCountTracker < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, RefCountTracker, 0LL);
  if ( (_BYTE)v3 == 0xFF )
  {
    if ( (*(_BYTE *)RefCountTracker & 2) == 0 )
      ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0xFFuLL);
    *(_BYTE *)RefCountTracker &= ~2u;
  }
  else
  {
    if ( (unsigned __int8)v3 >= *(_BYTE *)(RefCountTracker + 2) )
      ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, v3);
    if ( *(_BYTE *)(RefCountTracker + 1) )
    {
      if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
      {
        v10 = RefCountTracker + (v3 << 6);
        v11 = *(_DWORD *)(v10 + 64);
        if ( v11 >> 17 < 0x3FFE && (unsigned __int16)v11 >> 1 == (v11 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 8));
          *(_DWORD *)(v10 + 64) &= 0x10001u;
        }
        else
        {
          if ( !((unsigned __int16)v11 >> 1) && (v11 & 1) == 0 )
            goto LABEL_17;
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 8), 0);
        }
      }
    }
    else
    {
      v5 = *(_QWORD *)(RefCountTracker + 8);
      if ( !v5 )
      {
LABEL_7:
        if ( _bittestandreset((signed __int32 *)(RefCountTracker + 16), v3) )
          goto LABEL_8;
LABEL_17:
        ndisReportRefcountImbalance(RefCountTracker, v3);
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *(_BYTE *)(RefCountTracker + 3) )
          goto LABEL_7;
        v8 = (_BYTE *)(v5 + 2LL * i);
        if ( *v8 == (_BYTE)v3 )
        {
          v9 = v8[1];
          if ( v9 )
            break;
        }
      }
      v8[1] = v9 - 1;
    }
  }
LABEL_8:
  v6 = --a1->References;
  KeReleaseSpinLockFromDpcLevel(&a1->RefCountLock);
  if ( !v6 )
    ndisMFinishClose(a1);
}
