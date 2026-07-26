/*
 * XREFs of ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400D04AC
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x14015269C (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x140168750 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1400729C0 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1400D4850 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z @ 0x140141100 (--0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x14014DDF0 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReadNetworkGuidFromKey(struct KRegKey *a1, struct _GUID *a2)
{
  int v3; // esi
  int Guid; // eax
  int v5; // edx
  unsigned int v6; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  KIRQL v9; // r8
  struct _GUID v10; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID v11; // [rsp+40h] [rbp-28h] BYREF

  v11 = 0LL;
  NetSetupPropertyBag::NetSetupPropertyBag((NetSetupPropertyBag *)&v10, a1);
  v3 = NetSetupPropertyBag::ReadGuid(
         (NetSetupPropertyBag *)&v10,
         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsolationCompartmentId,
         &v11);
  Guid = NetSetupPropertyBag::ReadGuid(
           (NetSetupPropertyBag *)&v10,
           (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IsolationNetworkId,
           a2);
  v6 = 0;
  if ( v3 < 0 )
  {
    if ( Guid >= 0 )
      return v6;
    if ( v3 == -1073741772 && Guid == -1073741772 )
    {
      *a2 = *ndisIfGetDefaultNetworkGuid(&v10);
      return v6;
    }
    return (unsigned int)-1073741823;
  }
  if ( Guid >= 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        22,
        17,
        (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(&v11);
  if ( CompartmentBlockByGuid )
  {
    *a2 = *(struct _GUID *)(*((_QWORD *)CompartmentBlockByGuid + 7) + 32LL);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
    return v6;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      (__int64)&v11);
  return 3221225473LL;
}
