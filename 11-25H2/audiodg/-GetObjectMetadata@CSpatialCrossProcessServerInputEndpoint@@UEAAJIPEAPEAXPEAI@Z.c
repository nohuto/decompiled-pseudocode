/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140036410
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectMetadata(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // r11d
  void *v9; // rax

  v4 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v4 = -2005139437;
    goto LABEL_15;
  }
  if ( !*((_BYTE *)this + 1496) )
  {
    v4 = -2147418113;
    goto LABEL_15;
  }
  if ( a2 >= *((_DWORD *)this + 373) )
  {
    v4 = -2147024809;
    goto LABEL_15;
  }
  v6 = *((_QWORD *)this + 162);
  if ( !a3 )
  {
    v4 = -2147467261;
    goto LABEL_14;
  }
  if ( a2 >= *(_DWORD *)(v6 + 8) || (v7 = *((unsigned int *)this + 372), (unsigned int)v7 >= 2) )
  {
    v4 = -2147024809;
LABEL_14:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectMetadata", 0x375u, v4);
LABEL_15:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetObjectMetadata", 0x77u, v4);
    return v4;
  }
  v8 = *(_DWORD *)(v6 + 16);
  if ( v8 )
    v9 = (void *)(*(_QWORD *)(v6 + 24 * (v7 + 2)) + a2 * v8);
  else
    v9 = 0LL;
  *a3 = v9;
  if ( a4 )
    *a4 = *(_DWORD *)(v6 + 16);
  return v4;
}
