/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140090420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14003780C (-GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14008F640 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x140090CB0 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectMetadata; // ebx
  __int64 v7; // r11
  CSpatialCrossProcessBaseEndpoint *v8; // rsi
  unsigned int *v9; // rdi
  unsigned int v11[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectMetadata = -2005139437;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata",
      202,
      (unsigned int)ObjectMetadata,
      (__int64)a4);
    return (unsigned int)ObjectMetadata;
  }
  if ( !*((_BYTE *)this + 1472) )
  {
    ObjectMetadata = -2004287481;
    goto LABEL_9;
  }
  v11[0] = 0;
  v12 = 0;
  ObjectMetadata = CSparseIndexMapRT::TranslateIndex(
                     (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1336),
                     a2,
                     v11,
                     &v12);
  if ( ObjectMetadata < 0 )
    goto LABEL_9;
  v8 = (CSpatialCrossProcessBaseEndpoint *)(v7 - 16);
  v9 = (unsigned int *)(v7 + 1456);
  if ( v12 )
  {
    ObjectMetadata = CSpatialCrossProcessBaseEndpoint::ZeroOutObject((SpatialBlock **)(v7 - 16), *v9, v11[0]);
    if ( ObjectMetadata < 0 )
      goto LABEL_9;
  }
  ObjectMetadata = CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(v8, *v9, v11[0], a3, a4);
  if ( ObjectMetadata < 0 )
    goto LABEL_9;
  return (unsigned int)ObjectMetadata;
}
