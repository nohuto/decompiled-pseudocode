/*
 * XREFs of ?Stop@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x14000ABC4 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031670 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400855D8 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Stop(CSpatialCrossProcessControl *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  LPCRITICAL_SECTION v8[3]; // [rsp+30h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v8,
    (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL));
  v3 = *((_QWORD *)this + 1);
  v4 = 0;
  if ( !*(_BYTE *)(v3 + 96) )
  {
    v4 = -2005139437;
LABEL_7:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Stop", 161, v4, v2);
    goto LABEL_10;
  }
  v2 = 1LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 1304) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v4 = -2005139387;
    goto LABEL_7;
  }
  if ( !CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139433;
    goto LABEL_7;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 128LL), v2);
  v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 1304LL);
  _InterlockedAnd((volatile signed __int32 *)(v6 + 64), 0xFFFFFFF5);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v6, v5, (__int64)this, 7);
LABEL_10:
  ATL::CCritSecLock::~CCritSecLock(v8);
  return v4;
}
