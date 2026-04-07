/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180059FD0
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x180059E1C (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001EC8C (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18001F50C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x18005A064 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x18005A164 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CMILCOMBase *v5; // rax
  CMILCOMBase *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CWICBitmapWrapper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              248LL);
  if ( v4 && (v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4), (v6 = v5) != 0LL) )
  {
    CMILCOMBase::InternalAddRef(v5);
    v7 = CWICBitmapWrapper::HrInit(v6, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1Au, 0LL);
      CMILCOMBase::InternalRelease(v6);
    }
    else
    {
      *a2 = (CMILCOMBase *)((char *)v6 + 16);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v8;
}
