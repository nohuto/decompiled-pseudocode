/*
 * XREFs of ?InitializeFromSharedHandle@CHolographicInteropTextureProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z @ 0x1800C4588
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z @ 0x1800B5EA0 (--$CreateProxyFromSharedHandle@VCHolographicInteropTextureProxy@@@CCompositor@@IEAAJPEAXPEAPEAVC.c)
 * Callees:
 *     ?InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N@Z @ 0x1800236D8 (-InitializeFromSharedHandle@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAX_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHolographicInteropTextureProxy::InitializeFromSharedHandle(
        CHolographicInteropTextureProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CResourceProxy::InitializeFromSharedHandle((__int64)this, 0x10u, (__int64 *)a2, a3, 0);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xEu, 0LL);
  else
    return 0;
  return v4;
}
