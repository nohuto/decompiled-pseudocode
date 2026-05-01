/*
 * XREFs of ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AA184
 * Callers:
 *     ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x180068954 (-CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00K_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z @ 0x1802AA268 (-DelayAllocateTLS_AllocateInternal@@YAXPEAKPEBG@Z.c)
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x1802AA2C4 (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z @ 0x18067D604 (-CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetThreadThumbnailCache(const struct _GUID *a1, void **a2, const struct _GUID *a3)
{
  HRESULT Interface; // ebx
  const struct _GUID *v6; // [rsp+50h] [rbp+20h] BYREF
  int v7; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *ppv; // [rsp+68h] [rbp+38h] BYREF

  v6 = a1;
  if ( g_tlsThumbnailCache == -1 )
    DelayAllocateTLS_AllocateInternal(&a1->Data1, (const unsigned __int16 *)a2);
  LODWORD(v6) = 0;
  Interface = CachedSTAObject_QueryInterface((unsigned int)a1, (int *)&v6, a3, a2);
  if ( Interface == 1 )
  {
    v7 = 0;
    Interface = GetThreadFlags(1LL, &v7);
    if ( Interface >= 0 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
      Interface = CoCreateInstance(
                    &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
                    0LL,
                    1u,
                    &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                    (LPVOID *)&ppv);
      if ( Interface >= 0 )
      {
        if ( (_DWORD)v6 && v7 != 1 )
          CachedSTAObject_SetObject(g_tlsThumbnailCache, ppv);
        Interface = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, void **))ppv->lpVtbl->QueryInterface)(
                      ppv,
                      &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                      a2);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppv);
    }
  }
  return (unsigned int)Interface;
}
