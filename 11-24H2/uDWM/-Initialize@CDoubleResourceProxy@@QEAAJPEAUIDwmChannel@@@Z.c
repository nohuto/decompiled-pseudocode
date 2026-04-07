/*
 * XREFs of ?Initialize@CDoubleResourceProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x18007CEA8
 * Callers:
 *     ??$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z @ 0x18007CDCC (--$CreateProxy@VCDoubleResourceProxy@@@CCompositor@@IEAAJPEAPEAVCDoubleResourceProxy@@@Z.c)
 * Callees:
 *     ?Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x180025564 (-Initialize@CResourceProxy@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDoubleResourceProxy::Initialize(CDoubleResourceProxy *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResourceProxy::Initialize((__int64)this, 0xAu, (__int64)a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xEu, 0LL);
  return v3;
}
