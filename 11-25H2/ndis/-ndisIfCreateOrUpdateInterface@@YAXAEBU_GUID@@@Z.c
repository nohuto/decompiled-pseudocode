/*
 * XREFs of ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x14008CAF0
 * Callers:
 *     ndisPnpRefresh @ 0x1401748B0 (ndisPnpRefresh.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14004B2E0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x14004C210 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x14007C0C0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x14015269C (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x140167650 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x140168300 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(const struct _GUID *a1, __int64 a2, unsigned int a3)
{
  unsigned int ifIndex; // ebx
  int v5; // eax
  HANDLE v6; // rcx
  KIRQL v7; // bp
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  struct _NDIS_IF_BLOCK *v9; // rsi
  KIRQL v10; // bl
  KIRQL v11; // di
  HANDLE v12; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  ifIndex = 0;
  v12 = 0LL;
  v5 = ndisIfOpenInterfacePersistedStorage(a1, (struct KRegKey *)&v12, a3);
  if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741772 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
    v9 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid->RefCountTracker, 0xFu);
      ++v9->Ref;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v7);
    if ( !v12 )
      goto LABEL_13;
    if ( v9 )
    {
      ndisIfUpdateIfBlockFromPersistedState(v9, (struct KRegKey *)&v12);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
      IFBLOCK_DECREMENT_REF((char *)v9, 0xFu);
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v10);
      goto LABEL_18;
    }
    if ( v12 )
    {
      Handle = 0LL;
      ndisLoadNetworkInterfaceFromPersistedState(a1, (struct KRegKey *)&v12, (struct KRegKey *)&Handle);
      if ( Handle )
        ZwClose(Handle);
    }
    else
    {
LABEL_13:
      if ( v9 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
        if ( v9->Source == NdisIfBlockSourcePersistedNetSetup )
          ifIndex = v9->ifIndex;
        IFBLOCK_DECREMENT_REF((char *)v9, 0xFu);
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v11);
        if ( ifIndex )
          ndisIfDeregisterInterfaceEx(ifIndex, RunAsynchronous);
      }
    }
LABEL_18:
    v6 = v12;
    if ( !v12 )
      return;
    goto LABEL_19;
  }
  v6 = v12;
  if ( v12 )
LABEL_19:
    ZwClose(v6);
}
