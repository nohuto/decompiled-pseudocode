/*
 * XREFs of ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x180042B30
 * Callers:
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x1800429C0 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?Initialize@CD2DResource@@MEAAJXZ @ 0x180042AF0 (-Initialize@CD2DResource@@MEAAJXZ.c)
 *     ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x180043910 (-Initialize@CSecondaryD2DBitmap@@MEAAJXZ.c)
 *     ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z @ 0x1801153D8 (-Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x1801FC24C (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x1802D60BC (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsHardwareProtected@CD2DBitmap@@UEBA_NXZ @ 0x180042C10 (-IsHardwareProtected@CD2DBitmap@@UEBA_NXZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802C4C14 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DResourceManager::ManageResource(CD2DResourceManager *this, struct CD2DResource *a2)
{
  __int64 v2; // rax
  bool (__fastcall *v5)(CDeviceTextureTarget *__hidden); // rax
  bool IsHardwareProtected; // al

  v2 = *(_QWORD *)a2;
  *((_BYTE *)a2 + 48) = 1;
  v5 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v2 + 56);
  if ( v5 == CD2DBitmap::IsHardwareProtected )
  {
    IsHardwareProtected = CD2DBitmap::IsHardwareProtected(a2);
  }
  else if ( v5 == CDeviceTextureTarget::IsHardwareProtected )
  {
    IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected(a2);
  }
  else
  {
    IsHardwareProtected = v5(a2);
  }
  if ( IsHardwareProtected )
    *((_BYTE *)a2 + 50) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct CD2DResource *))(*(_QWORD *)a2 + 48LL))(a2) )
  {
    ++*((_DWORD *)this + 4);
    if ( *((_BYTE *)a2 + 50) )
      CD2DContext::AddHwProtectedResource(*((CD2DContext **)this + 3));
  }
}
