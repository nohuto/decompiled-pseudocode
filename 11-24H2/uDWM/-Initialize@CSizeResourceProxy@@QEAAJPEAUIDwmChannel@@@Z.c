/*
 * XREFs of ?Initialize@CSizeResourceProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x18007457C
 * Callers:
 *     ??$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x1800744A0 (--$CreateProxy@VCSizeResourceProxy@@@CCompositor@@IEAAJPEAPEAVCSizeResourceProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180025564 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSizeResourceProxy::Initialize(CSizeResourceProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 0x22u, (__int64)a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
  else
    return 0;
  return v3;
}
