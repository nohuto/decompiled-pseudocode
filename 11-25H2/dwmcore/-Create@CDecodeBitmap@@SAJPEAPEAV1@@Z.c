/*
 * XREFs of ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z @ 0x180043968
 * Callers:
 *     ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x180102648 (-EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x180043074 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
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
