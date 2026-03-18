/*
 * XREFs of ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x18005D028
 * Callers:
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x18005CE20 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z.c)
 *     ?EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180196A30 (-EnsureDisplaySurface@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD3DTexture::GetDXGIResource(CD3DTexture *this, struct IDXGIResource **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 24LL))(this);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x18Au, 0LL);
  }
  else
  {
    v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 15))(
           *((_QWORD *)this + 15),
           &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x18Du, 0LL);
  }
  return v5;
}
