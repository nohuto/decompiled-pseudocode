/*
 * XREFs of ?Start@CSpatialCrossProcessControl@@UEAAJXZ @ 0x14008F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x14000ABC4 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031670 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400855D8 (McTemplateU0pqx_EventWriteTransfer.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpatialCrossProcessControl::Start(CSpatialCrossProcessControl *this)
{
  __int64 v2; // r9
  _BYTE *v3; // rcx
  int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  LPCRITICAL_SECTION v8[3]; // [rsp+30h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v8,
    (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 1) + 32LL));
  v3 = (_BYTE *)*((_QWORD *)this + 1);
  if ( !v3[96] )
  {
    v4 = -2005139437;
LABEL_3:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessControl::Start", 116, (unsigned int)v4, v2);
    goto LABEL_4;
  }
  v4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 72LL))(v3);
  if ( v4 < 0 )
    goto LABEL_3;
  v2 = 1LL;
  if ( (_InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)this + 1) + 1304LL) + 64LL),
          0,
          0) & 0xFFFFFF81) != 1 )
  {
    v4 = -2005139387;
    goto LABEL_3;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning(*((CSpatialCrossProcessBaseEndpoint **)this + 1)) )
  {
    v4 = -2005139434;
    goto LABEL_3;
  }
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 128LL), v2);
  v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 1304LL);
  _InterlockedOr((volatile signed __int32 *)(v7 + 64), 2u);
  v4 = 0;
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqx_EventWriteTransfer(v7, v6, (__int64)this, 6);
LABEL_4:
  ATL::CCritSecLock::~CCritSecLock(v8);
  return (unsigned int)v4;
}
