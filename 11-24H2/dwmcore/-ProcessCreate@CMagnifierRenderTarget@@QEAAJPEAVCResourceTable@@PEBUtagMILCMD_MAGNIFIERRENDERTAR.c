/*
 * XREFs of ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x180283D2C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18015A618 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCreate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_CREATE *a3)
{
  int updated; // eax
  unsigned int v6; // ebx

  *((_QWORD *)this + 340) = *((_QWORD *)a3 + 1);
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((_DWORD *)a3 + 5));
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x52u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 30) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 31) = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)a3 + 4) <= 6u )
    {
      *((_OWORD *)this + 171) = *((_OWORD *)a3 + 1);
      *((_OWORD *)this + 172) = *((_OWORD *)a3 + 2);
      *((_OWORD *)this + 173) = *((_OWORD *)a3 + 3);
      *((_OWORD *)this + 174) = *((_OWORD *)a3 + 4);
      *((_OWORD *)this + 175) = *((_OWORD *)a3 + 5);
      *((_OWORD *)this + 176) = *((_OWORD *)a3 + 6);
      *((_OWORD *)this + 177) = *((_OWORD *)a3 + 7);
      *((_OWORD *)this + 178) = *((_OWORD *)a3 + 8);
      *((_OWORD *)this + 179) = *((_OWORD *)a3 + 9);
      *((_OWORD *)this + 180) = *((_OWORD *)a3 + 10);
      *((_OWORD *)this + 181) = *((_OWORD *)a3 + 11);
      *((_OWORD *)this + 182) = *((_OWORD *)a3 + 12);
      *((_OWORD *)this + 183) = *((_OWORD *)a3 + 13);
    }
    else
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x59u, 0LL);
    }
  }
  return v6;
}
