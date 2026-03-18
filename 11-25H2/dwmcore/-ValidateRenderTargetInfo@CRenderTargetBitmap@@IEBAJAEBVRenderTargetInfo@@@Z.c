/*
 * XREFs of ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x18003F550
 * Callers:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802E0970 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?GetAdapterLuid@CRenderTargetBitmap@@UEBA?AU_LUID@@XZ @ 0x18003F700 (-GetAdapterLuid@CRenderTargetBitmap@@UEBA-AU_LUID@@XZ.c)
 *     ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18003F750 (-IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ.c)
 *     ?GetDisplayId@CRenderTargetBitmap@@UEBA?AVDisplayId@@XZ @ 0x18003F7B0 (-GetDisplayId@CRenderTargetBitmap@@UEBA-AVDisplayId@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::ValidateRenderTargetInfo(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2)
{
  struct _LUID (__fastcall *v5)(CRenderTargetBitmap *__hidden); // rax
  CRenderTargetBitmap *v6; // rcx
  __int64 AdapterLuid; // rax
  int v8; // ebp
  char *v9; // rcx
  __int64 (__fastcall *v10)(char *, char *); // rax
  int *DisplayId; // rax
  int v12; // eax
  bool (__fastcall *v13)(CRenderTargetBitmap *__hidden); // rax
  CRenderTargetBitmap *v14; // rcx
  bool IsHardwareProtected; // al
  char v16; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 15) )
  {
    if ( *((_BYTE *)this + 128) )
    {
      v5 = *(struct _LUID (__fastcall **)(CRenderTargetBitmap *__hidden))(*((_QWORD *)this + 10) + 64LL);
      v6 = (CRenderTargetBitmap *)((char *)this + 80);
      if ( v5 == CRenderTargetBitmap::GetAdapterLuid )
        AdapterLuid = (__int64)CRenderTargetBitmap::GetAdapterLuid(v6);
      else
        AdapterLuid = ((__int64 (__fastcall *)(CRenderTargetBitmap *, char *))v5)(v6, &v16);
      if ( *(_DWORD *)a2 == *(_DWORD *)AdapterLuid
        && *((_DWORD *)a2 + 1) == *(_DWORD *)(AdapterLuid + 4)
        && ((v8 = *((_DWORD *)a2 + 2),
             v9 = (char *)this + 88,
             v10 = *(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this + 11) + 48LL),
             (char *)v10 != (char *)CRenderTargetBitmap::GetDisplayId)
          ? (DisplayId = (int *)v10(v9, &v16))
          : (DisplayId = (int *)CRenderTargetBitmap::GetDisplayId(v9, &v16)),
            (v12 = *DisplayId, v12 == -1) || v12 == v8 || v8 == -3) )
      {
        v13 = *(bool (__fastcall **)(CRenderTargetBitmap *__hidden))(*((_QWORD *)this + 10) + 56LL);
        v14 = (CRenderTargetBitmap *)((char *)this + 80);
        if ( v13 == CRenderTargetBitmap::IsHardwareProtected )
          IsHardwareProtected = CRenderTargetBitmap::IsHardwareProtected(v14);
        else
          IsHardwareProtected = v13(v14);
        if ( !IsHardwareProtected || *((_BYTE *)a2 + 20) )
        {
          return 0LL;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024891, 0x1DBu, 0LL);
          return 2147942405LL;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304287, 0x1D6u, 0LL);
        return 2291663009LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x1E1u, 0LL);
    return 2291674884LL;
  }
}
