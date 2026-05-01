/*
 * XREFs of ?TargetMonitorChanged@CDragVisual@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180543E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180542784 (-IUnknown_GetScaleFactor@@YAJPEAUIUnknown@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDragVisual::TargetMonitorChanged(CDragVisual *this, IUnknown *a2)
{
  __int64 v3; // rcx
  int v5; // [rsp+40h] [rbp-18h] BYREF
  void *ppvOut[2]; // [rsp+48h] [rbp-10h] BYREF

  v5 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( !v3 || (*(int (__fastcall **)(__int64, IUnknown *, int *))(*(_QWORD *)v3 + 96LL))(v3, a2, &v5) >= 0 && !v5 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      *((_DWORD *)this + 30) = -1;
      *((_BYTE *)this + 250) = 1;
    }
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
    ppvOut[0] = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
    if ( IUnknown_QueryService(
           a2,
           (const GUID *const)&SID_ImmersiveLayout,
           &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
           ppvOut) < 0
      || (*(int (__fastcall **)(void *, __int64, char *))(*(_QWORD *)ppvOut[0] + 56LL))(
           ppvOut[0],
           10LL,
           (char *)this + 168) < 0 )
    {
      ((void (__fastcall *)(IUnknown *, char *))a2->lpVtbl[3].QueryInterface)(a2, (char *)this + 168);
    }
    IUnknown_GetScaleFactor(a2, (enum DEVICE_SCALE_FACTOR *)this + 80);
    SetWindowPos(*((HWND *)this + 16), 0LL, 0, 0, 0, 0, 0x13u);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)ppvOut);
  }
}
