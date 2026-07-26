/*
 * XREFs of ndisIfUpdateInterfaceFromPersistentStore @ 0x14008B160
 * Callers:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140088780 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1401479DC (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14002A780 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     WPP_RECORDER_SF_I @ 0x1400C9544 (WPP_RECORDER_SF_I_ea_1400C9544.c)
 *     WPP_RECORDER_SF_IL @ 0x1400C95E8 (WPP_RECORDER_SF_IL.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceFromPersistentStore(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  KIRQL v6; // dl
  int v7; // edx
  int v8; // r8d

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 8), 4, a3, 10);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(*(union _NET_LUID_LH *)(a1 + 24));
  if ( InterfaceByNetLuid )
  {
    if ( *(_BYTE *)(a1 + 134) )
    {
      InterfaceByNetLuid->ifConnectorPresent = *(_BYTE *)(a1 + 135);
      InterfaceByNetLuid->AccessType = *(_DWORD *)(a1 + 136);
      InterfaceByNetLuid->ConnectionType = *(_DWORD *)(a1 + 140);
      InterfaceByNetLuid->DirectionType = *(_DWORD *)(a1 + 144);
    }
    InterfaceByNetLuid->IsWDFMiniportInterface = *(_BYTE *)(a1 + 134);
  }
  else
  {
    v4 = -1073741072;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_IL(*((_QWORD *)WPP_GLOBAL_Control + 8), v7, v8, 11);
  return v4;
}
