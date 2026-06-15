/*
 * XREFs of ?Reset@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F820
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x14000AB94 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031970 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?CommitState@PingPongState@@AEAA?AW4State@1@PEBW421@@Z @ 0x140031CA4 (-CommitState@PingPongState@@AEAA-AW4State@1@PEBW421@@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140039274 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x140085F3C (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Reset(CSpatialCrossProcessControl *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  LPCRITICAL_SECTION v13[3]; // [rsp+30h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v13,
    (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL));
  v3 = *((_QWORD *)this + 1);
  v4 = 0;
  if ( !*(_BYTE *)(v3 + 96) )
  {
    v4 = -2005139437;
LABEL_7:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Reset", 64, v4, v2);
    goto LABEL_12;
  }
  v2 = 1LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 1304) + 64LL), 0, 0) & 0xFFFFFF81) != 1 )
  {
    v4 = -2005139387;
    goto LABEL_7;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139434;
    goto LABEL_7;
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) = 0LL;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 128LL), v2);
  v5 = *((_QWORD *)this + 1);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v5 + 1304) + 64LL), 0x10u);
  v6 = *(_QWORD *)(v5 + 1304);
  v8 = *(_QWORD *)(v6 + 32);
  v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 32), 0LL, v8);
  if ( v8 != v7 )
  {
    do
    {
      v9 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 32), 0LL, v7);
    }
    while ( v7 != v9 );
  }
  PingPongState::CommitState(v5 + 576, (__int64)&`PingPongState::Reset'::`2'::nextState);
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v11, v10, (__int64)this, 8);
LABEL_12:
  ATL::CCritSecLock::~CCritSecLock(v13);
  return v4;
}
