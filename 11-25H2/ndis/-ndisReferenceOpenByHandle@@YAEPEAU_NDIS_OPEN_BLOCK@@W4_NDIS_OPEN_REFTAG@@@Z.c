/*
 * XREFs of ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140012F50
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140012DA0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x14005B6B0 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x140077B10 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1400B1638 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@@Z @ 0x1400B31D0 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisMTryReferenceOpen@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1400A4F7C (-ndisMTryReferenceOpen@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 */

__int64 __fastcall ndisReferenceOpenByHandle(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 a2)
{
  unsigned __int8 v3; // di
  KIRQL v5; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rcx
  KIRQL v7; // r14
  bool v8; // zf
  volatile unsigned int OpenFlags; // eax
  int v10; // edx

  v3 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x71u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v7 = v5;
  if ( ndisGlobalOpenList )
  {
    while ( NextGlobalOpen != a1 )
    {
      NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
      if ( !NextGlobalOpen )
        goto LABEL_14;
    }
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
    v8 = (unsigned int)Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline() == 0;
    OpenFlags = a1->OpenFlags;
    if ( v8 )
    {
      if ( (OpenFlags & 0x8000) == 0 && a1->References )
      {
        ndisMReferenceOpen(a1, a2);
        v3 = 1;
      }
    }
    else if ( (OpenFlags & 0x8000) == 0 )
    {
      v3 = ndisMTryReferenceOpen(a1, a2);
    }
    KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
  }
LABEL_14:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v7);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      20,
      114,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      a2,
      v3);
  return v3;
}
