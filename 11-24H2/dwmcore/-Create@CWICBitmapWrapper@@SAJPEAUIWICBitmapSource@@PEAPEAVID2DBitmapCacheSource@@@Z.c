/*
 * XREFs of ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1801CEA44
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1801CE678 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1801CE8F8 (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?Release@CBitmapLock@@UEAAKXZ @ 0x18004AF70 (-Release@CBitmapLock@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1801CEB18 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1801CEB84 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CWICBitmapWrapper::Create(struct IWICBitmapSource *a1, struct ID2DBitmapCacheSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CWICBitmapWrapper *v5; // rbx
  CWICBitmapWrapper *v6; // rax
  CWICBitmapWrapper *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  *a2 = 0LL;
  v4 = (CWICBitmapWrapper *)operator new(0x90uLL);
  v5 = v4;
  if ( v4 && (memset_0(v4, 0, 0x90uLL), v6 = CWICBitmapWrapper::CWICBitmapWrapper(v5), (v7 = v6) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CWICBitmapWrapper *)((char *)v6 + 8));
    v8 = CWICBitmapWrapper::HrInit(v7, a1);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1Bu, 0LL);
      CBitmapLock::Release(v7);
    }
    else
    {
      *a2 = (CWICBitmapWrapper *)((char *)v7 + 120);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x19u, 0LL);
  }
  return v9;
}
