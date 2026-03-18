/*
 * XREFs of ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1801DCBB8
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1801DC7EC (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1801DCA6C (-Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1801DCC8C (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1801DCCF8 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ?Release@CBitmapLock@@UEAAKXZ @ 0x1801DD4C0 (-Release@CBitmapLock@@UEAAKXZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
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
