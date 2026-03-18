/*
 * XREFs of ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802D6860
 * Callers:
 *     ?LockAndRead@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802D6EE0 (-LockAndRead@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAXPEBVID2DContext.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18018F490 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1802B8378 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DBitmap::LockAndRead(CD2DBitmap *this, const struct ID2DContextOwner *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  int v6; // eax
  struct ID3D11Texture2D *v7; // rcx
  int v8; // eax

  if ( (*((_DWORD *)this + 26) & 0x400000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024891, 0xAEu, 0LL);
  }
  else
  {
    if ( a2 )
    {
      v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 9) + 40LL))((char *)this - 72);
      v6 = CD2DContext::FlushD2D((CD2DContext *)(v4 + 16), a2, v5);
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xA3u, 0LL);
    }
    v7 = (struct ID3D11Texture2D *)*((_QWORD *)this + 4);
    if ( v7 )
    {
      v8 = DebugInspectTexture(v7, *((_DWORD *)this + 40));
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xA8u, 0LL);
    }
  }
}
