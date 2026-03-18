/*
 * XREFs of ?ProcessSetAncestorClipVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL@@@Z @ 0x18028EF90
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180036D70 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18003BAAC (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::ProcessSetAncestorClipVisual(
        CProjectedShadowCaster *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWCASTER_SETANCESTORCLIPVISUAL *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  __int64 Resource; // rax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)a2, v5, 0xB8u)) != 0 )
  {
    if ( *((_QWORD *)this + 10) != Resource )
    {
      *((_QWORD *)this + 10) = Resource;
      CProjectedShadowCaster::RequestRedraw(this);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x6Cu, 0LL);
  }
  return v4;
}
