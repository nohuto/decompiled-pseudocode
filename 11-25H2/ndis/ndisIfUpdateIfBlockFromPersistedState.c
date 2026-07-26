/*
 * XREFs of ndisIfUpdateIfBlockFromPersistedState @ 0x14015269C
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x14008CAF0 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14000E590 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D500 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14007F010 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1400963C0 (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x140099100 (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1400D0400 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400D04AC (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1400D08E4 (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid__guid__guid_ @ 0x1400D09B8 (WPP_RECORDER_SF__guid__guid__guid_.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ndisIfReadHiddenFlag @ 0x140140CE0 (ndisIfReadHiddenFlag.c)
 *     ndisIfUpdateStringIfNeeded @ 0x140152960 (ndisIfUpdateStringIfNeeded.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x140168750 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401695A0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x140172C30 (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(
        struct _NDIS_IF_BLOCK *a1,
        struct KRegKey *this,
        __int64 a3,
        struct NdisNetworkInterfacePersistedState *a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  struct _NDIS_MINIPORT_BLOCK *v9; // rdi
  _DEVICE_OBJECT *PhysicalDeviceObject; // rdx
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  NTSTATUS v12; // esi
  int v13; // edx
  int v14; // r8d
  int updated; // eax
  int v16; // r8d
  int v17; // [rsp+20h] [rbp-E0h]
  char v18[8]; // [rsp+30h] [rbp-D0h]
  bool v19; // [rsp+40h] [rbp-C0h] BYREF
  struct KRegKey *v20; // [rsp+48h] [rbp-B8h] BYREF
  void *v21; // [rsp+50h] [rbp-B0h] BYREF
  void *v22; // [rsp+58h] [rbp-A8h] BYREF
  struct KRegKey v23; // [rsp+60h] [rbp-A0h] BYREF
  struct KRegKey v24[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+90h] [rbp-70h]
  struct _GUID v28; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v29; // [rsp+A4h] [rbp-5Ch]
  int v30; // [rsp+ACh] [rbp-54h]
  __int128 v31; // [rsp+B0h] [rbp-50h]
  __int128 v32; // [rsp+C0h] [rbp-40h]
  __int16 v33; // [rsp+D0h] [rbp-30h]
  __int128 v34; // [rsp+D2h] [rbp-2Eh]
  __int128 v35; // [rsp+E2h] [rbp-1Eh]
  int v36; // [rsp+F2h] [rbp-Eh]
  __int16 v37; // [rsp+F6h] [rbp-Ah]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+100h] [rbp+0h]

  v25 = 0;
  *(_OWORD *)&v24[0].m_ptr = 0LL;
  v26 = 0LL;
  v27 = 0;
  v29 = 0LL;
  v30 = 0;
  v33 = 0;
  v28 = 0LL;
  v36 = 0;
  v31 = 0LL;
  v37 = 0;
  v32 = 0LL;
  v38 = 0LL;
  v34 = 0LL;
  v39 = 0;
  v35 = 0LL;
  v23.m_ptr = 0LL;
  Ndis::BindRegistry::ReadNetworkInterfaceV2(this, &v23, v24, a4);
  v20 = this;
  v22 = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString(&v20, &NETSETUPPKEY_Interface_IfAlias, &v22) >= 0 )
  {
    v17 = 20;
    ndisIfUpdateStringIfNeeded(a1, v24[0].m_ptr, &a1->ifAlias, 0LL);
  }
  v21 = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString(&v20, &NETSETUPPKEY_Interface_IfDescr, &v21) >= 0 )
  {
    v17 = 4;
    ndisIfUpdateStringIfNeeded(a1, v24[1].m_ptr, &a1->ifDescr, 2LL);
  }
  if ( (int)ndisIfReadNetworkGuidFromKey(this, &v28) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v28, 0) < 0
    && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid__guid__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&v28,
      v6,
      v7,
      v17,
      (__int64)&a1->InterfaceGuid,
      (__int64)a1->Network + 32,
      (__int64)&v28);
  }
  v19 = 0;
  v8 = ndisIfReferenceMiniport(a1, 0x15u);
  v9 = v8;
  if ( v8 )
    PhysicalDeviceObject = v8->PhysicalDeviceObject;
  else
    PhysicalDeviceObject = 0LL;
  v12 = ndisIfReadHiddenFlag((NetSetupPropertyBag *)&v20, PhysicalDeviceObject, &v19);
  if ( v12 < 0 )
  {
    if ( !v9 )
      goto LABEL_22;
    goto LABEL_16;
  }
  ndisIfUpdateInterfaceHiddenFlag(a1, v19);
  if ( v9 )
  {
    ndisMUpdateHiddenFlag(v9, v19);
LABEL_16:
    ndisIfDereferenceMiniport(a1, v11, 0x15u);
    if ( v12 < 0 )
      goto LABEL_22;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      (__int64)&a1->InterfaceGuid);
  updated = ndisIfUpdateInterfaceFromPersistentStore((__int64)v24, v13, v14);
  if ( updated < 0 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = updated;
    WPP_RECORDER_SF__guid_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      v16,
      0x15u,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      (__int64)&a1->InterfaceGuid,
      *(_QWORD *)v18);
  }
LABEL_22:
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v21, 0LL);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v22, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v23.m_ptr);
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(&v24[0].m_ptr);
}
