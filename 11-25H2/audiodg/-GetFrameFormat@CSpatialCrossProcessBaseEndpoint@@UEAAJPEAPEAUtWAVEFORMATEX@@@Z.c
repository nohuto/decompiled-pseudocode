/*
 * XREFs of ?GetFrameFormat@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x14008E530
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetFrameFormat(
        CSpatialCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  if ( !*((_BYTE *)this + 96) )
  {
    v4 = -2005139437;
LABEL_6:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetFrameFormat", 451, v4, a4);
    return v4;
  }
  if ( !a2 )
  {
    v4 = -2147467261;
    goto LABEL_6;
  }
  v4 = CloneWaveFormat((const struct tWAVEFORMATEX *)((char *)this + 300), a2);
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_6;
  return v4;
}
