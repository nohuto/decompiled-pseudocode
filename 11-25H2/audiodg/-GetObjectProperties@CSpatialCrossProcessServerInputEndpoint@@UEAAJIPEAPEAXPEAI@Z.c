/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140031260
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectProperties(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax

  v4 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v4 = -2005139437;
    goto LABEL_12;
  }
  if ( !*((_BYTE *)this + 1496) )
  {
    v4 = -2147418113;
    goto LABEL_12;
  }
  if ( a2 >= *((_DWORD *)this + 373) )
  {
    v4 = -2147024809;
    goto LABEL_12;
  }
  if ( !a3 )
  {
    v4 = -2147467261;
    goto LABEL_11;
  }
  v6 = *((_QWORD *)this + 162);
  if ( a2 >= *(_DWORD *)(v6 + 8) || (v7 = *((unsigned int *)this + 372), (unsigned int)v7 >= 2) )
  {
    v4 = -2147024809;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectProperties", 0x35Cu, v4);
LABEL_12:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetObjectProperties", 0x5Du, v4);
    return v4;
  }
  *a3 = (void *)(*(_QWORD *)(v6 + 24 * v7 + 40) + *(_DWORD *)(v6 + 12) * a2);
  if ( a4 )
    *a4 = *(_DWORD *)(v6 + 12);
  return v4;
}
