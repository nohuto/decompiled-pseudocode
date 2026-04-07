/*
 * XREFs of ?Initialize@CMeshGeometry2dProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800751AC
 * Callers:
 *     ??$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z @ 0x1800750CC (--$CreateProxy@VCMeshGeometry2dProxy@@@CCompositor@@IEAAJPEAPEAVCMeshGeometry2dProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180025564 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMeshGeometry2dProxy::Initialize(CMeshGeometry2dProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 0x18u, (__int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
