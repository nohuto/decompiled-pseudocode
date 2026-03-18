/*
 * XREFs of ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801F192C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18019C0B4 (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x18024B1AC (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CGenericInk::ProcessTipPointBuffer(
        CDrawListCache **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_TIPPOINTBUFFER *a3)
{
  CDrawListCache **v3; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // edx
  struct CSharedSectionBase *Resource; // rbx
  int v10; // eax

  v3 = this + 11;
  v6 = 0;
  Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(this + 11);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CSharedSectionBase *)CResourceTable::GetResource((__int64)a2, v7, 0x9Eu);
    if ( Resource )
    {
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(v3);
      v10 = CGenericInkTipPointSource::Create(
              Resource,
              *((_DWORD *)a3 + 3),
              *((_DWORD *)a3 + 4),
              *((_DWORD *)a3 + 5),
              v3);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x94u, 0LL);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x8Fu, 0LL);
    }
  }
  return v6;
}
