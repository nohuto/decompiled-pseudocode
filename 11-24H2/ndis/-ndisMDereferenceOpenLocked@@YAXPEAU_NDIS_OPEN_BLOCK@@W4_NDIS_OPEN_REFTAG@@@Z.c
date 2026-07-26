/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006BB0
 * Callers:
 *     NdisCmCloseAddressFamilyComplete @ 0x1400068E0 (NdisCmCloseAddressFamilyComplete.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x14005F930 (NdisCmOpenAddressFamilyComplete.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EA60 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x140088D60 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x140089330 (NdisCmRegisterAddressFamilyEx.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x14009DE70 (-ndisMReset@@YAHPEAX@Z.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1401738D0 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140173CB0 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 * Callees:
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x14000C6D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1400136E0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x140013990 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x14017BA40 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
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
