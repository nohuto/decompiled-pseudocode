/*
 * XREFs of ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x1800D88CC
 * Callers:
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800D5EA4 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800D6160 (-EnableHeadEventHandler@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180051F08 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x180073304 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z @ 0x1800D1930 (-AddHeadEventOccurred@MPCHeadUpdateListener@@QEAAXPEAUIHeadEventHandler@@PEA_K@Z.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x1800D1C04 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::SetOwner(
        SpatialRimDeviceCollectionHeadEventHandler *this,
        struct SpatialRimDeviceCollection *a2,
        struct IMessageSession *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 *v8; // rdi
  MPCHeadUpdateListener *Instance; // rax
  struct _RTL_CRITICAL_SECTION *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( a2 && *((_QWORD *)this + 3) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    if ( v6 )
      LeaveCriticalSection(v6);
    return 2147549183LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 9, (__int64)a3);
    *((_QWORD *)this + 3) = a2;
    v8 = (__int64 *)((char *)this + 16);
    if ( a2 )
    {
      if ( !*v8 )
      {
        Instance = MPCHeadUpdateListener::GetInstance();
        MPCHeadUpdateListener::AddHeadEventOccurred(Instance, this, (unsigned __int64 *)this + 2);
      }
    }
    else if ( *v8 )
    {
      v10 = (struct _RTL_CRITICAL_SECTION *)MPCHeadUpdateListener::GetInstance();
      MPCHeadUpdateListener::RemoveHeadEventOccurred(v10, *v8);
      *v8 = 0LL;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    return 0LL;
  }
}
