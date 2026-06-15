/*
 * XREFs of ?GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z @ 0x14008FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14008E5FC (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetGrantedDynamicObjectCount(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int GrantedDynamicObjectCount; // ebx

  if ( !a2 )
  {
    GrantedDynamicObjectCount = -2147467261;
LABEL_6:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientEndpoint::GetGrantedDynamicObjectCount",
      196,
      GrantedDynamicObjectCount,
      a4);
    return GrantedDynamicObjectCount;
  }
  if ( !*((_BYTE *)this - 1232) )
  {
    GrantedDynamicObjectCount = -2005139437;
    goto LABEL_6;
  }
  GrantedDynamicObjectCount = CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(
                                (SpatialBlock **)this - 166,
                                a2);
  if ( (GrantedDynamicObjectCount & 0x80000000) != 0 )
    goto LABEL_6;
  return GrantedDynamicObjectCount;
}
