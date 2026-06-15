/*
 * XREFs of ?GetFrequency@CSpatialCrossProcessClientEndpoint@@UEAAJPEA_K@Z @ 0x14008F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x14000ABC4 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::GetFrequency(
        CSpatialCrossProcessClientEndpoint *this,
        unsigned __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  LPCRITICAL_SECTION v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v7, (struct _RTL_CRITICAL_SECTION *)((char *)this - 1304));
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this - 310, 1, 1) )
    {
      *a2 = *((unsigned int *)this - 257);
      goto LABEL_7;
    }
    v4 = -2005139437;
  }
  else
  {
    v4 = -2147467261;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::GetFrequency", 243, v4, v5);
LABEL_7:
  ATL::CCritSecLock::~CCritSecLock(v7);
  return v4;
}
