/*
 * XREFs of CmosTranslatePNPIDToEnum @ 0x140042F10
 * Callers:
 *     CmosGetOpRegionType @ 0x140028FBC (CmosGetOpRegionType.c)
 * Callees:
 *     CmosConfigSpaceHandlerWorker @ 0x140042FA4 (CmosConfigSpaceHandlerWorker.c)
 */

__int64 __fastcall CmosTranslatePNPIDToEnum(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int i; // ebx
  const char *v7; // rdx

  if ( a2 < 0 )
    return (unsigned int)a2;
  for ( i = 0; ; ++i )
  {
    v7 = (&CmosTypeTranslationTable)[2 * i];
    if ( !v7 )
      break;
    if ( strstr(*(const char **)(a4 + 64), v7) )
    {
      CmosDeviceType = (int)(&CmosTypeTranslationTable)[2 * i + 1];
      return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, a4);
    }
  }
  return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, a4);
}
