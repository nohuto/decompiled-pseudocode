/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x140032A1C
 * Callers:
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x1400905E0 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        float **a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx

  v5 = 0;
  v6 = a2;
  if ( !a4 )
  {
    v5 = -2147467261;
    goto LABEL_8;
  }
  v7 = *((_QWORD *)this + 164);
  if ( a3 >= *(_DWORD *)(v7 + 8) || (unsigned int)v6 >= 2 )
  {
    v5 = -2147024809;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer", 0x343u, v5);
    return v5;
  }
  *a4 = (float *)(*(_QWORD *)(v7 + 24 * v6 + 56) + *(_DWORD *)(v7 + 20) * a3);
  if ( a5 )
    *a5 = *(_DWORD *)(v7 + 20) >> 2;
  return v5;
}
