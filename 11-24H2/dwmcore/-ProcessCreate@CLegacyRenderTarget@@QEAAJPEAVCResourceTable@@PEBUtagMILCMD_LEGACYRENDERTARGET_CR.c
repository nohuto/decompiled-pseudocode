/*
 * XREFs of ?ProcessCreate@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_CREATE@@@Z @ 0x18022D25C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180247E9C (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessCreate(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_CREATE *a3)
{
  int v5; // eax

  *((_QWORD *)this + 4138) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 8274) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 6);
  CLegacyRenderTarget::SetSDRBoost(this, 1.0);
  v5 = 3;
  if ( *((_DWORD *)a3 + 7) < 3u )
    v5 = 2;
  *((_DWORD *)this + 8275) = v5;
  return 0LL;
}
