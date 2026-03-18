/*
 * XREFs of ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z @ 0x18005C6B8
 * Callers:
 *     ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1801A6438 (-EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18005BC84 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CDecodeBitmap::Create(struct CDecodeBitmap **a1)
{
  unsigned int v2; // edi
  char *v3; // rax
  char *v4; // rbx

  v2 = 0;
  v3 = (char *)operator new(0x90uLL);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x90uLL);
    CRenderTargetBitmap::CRenderTargetBitmap((CRenderTargetBitmap *)v4, 0LL);
    v4[136] = 0;
    *((_QWORD *)v4 + 2) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
    *(_QWORD *)v4 = &CDecodeBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
    *((_QWORD *)v4 + 10) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
    *((_QWORD *)v4 + 11) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 8));
  }
  else
  {
    v4 = 0LL;
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  *a1 = (struct CDecodeBitmap *)v4;
  return v2;
}
