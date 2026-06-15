/*
 * XREFs of ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180067310
 * Callers:
 *     ?DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800672A0 (-DeviceArrivalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800486D0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180089860 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall KsNotifications_AudioInterfaceArrival(const unsigned __int16 *a1)
{
  __int64 v2; // rax
  struct IUnknown *v3; // rcx
  const unsigned __int16 *v4; // r8
  struct IUnknown *v5; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown *v6; // [rsp+48h] [rbp+18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  if ( g_DeviceEnumerator )
  {
    ((void (__fastcall *)(struct IMMDeviceEnumerator *, GUID *, __int64 *))g_DeviceEnumerator->lpVtbl->QueryInterface)(
      g_DeviceEnumerator,
      &GUID_3e52272f_3c89_45f8_be26_cb3b91ab42a0,
      &v7);
    v2 = v7;
  }
  v5 = 0LL;
  v3 = 0LL;
  v6 = 0LL;
  pv = 0LL;
  if ( v2 )
  {
    if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, struct IUnknown **))(*(_QWORD *)v2 + 40LL))(
           v2,
           a1,
           &v5) >= 0 )
    {
      v3 = v6;
      if ( v6 != v5 )
      {
        ATL::AtlComQIPtrAssign(&v6, v5, &GUID_d666063f_1587_4e43_81f1_b948e807363f);
        v3 = v6;
      }
      if ( !v3 )
        goto LABEL_11;
      if ( ((int (__fastcall *)(struct IUnknown *, LPVOID *))v3->lpVtbl[1].Release)(v3, &pv) >= 0 )
        KsNotifications_ProcessPnpInterface((struct IMMDevice *)v6, a1, v4);
    }
    v3 = v6;
LABEL_11:
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      v3 = v6;
    }
    v2 = v7;
  }
  if ( v3 )
  {
    ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->Release)(v3);
    v2 = v7;
  }
  if ( v5 )
  {
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
    v2 = v7;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
