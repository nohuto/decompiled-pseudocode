/*
 * XREFs of ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x140406900
 * Callers:
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x14018EFE4 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F168 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  DXGADAPTER *v4; // r9
  DXGADAPTER *v5; // r8
  DXGADAPTER *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  DXGADAPTERLISTLOCK *v10[3]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v10);
  v4 = (DXGGLOBAL *)((char *)this + 800);
  v5 = (DXGADAPTER *)*((_QWORD *)this + 100);
  while ( v5 != v4 && v5 )
  {
    v6 = v5;
    if ( DXGADAPTER::IsBddFallbackDriver(v5) )
    {
      _m_prefetchw((char *)v6 + 24);
      v7 = *((_QWORD *)v6 + 3);
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          *a2 = -1LL;
          goto LABEL_10;
        }
      }
    }
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 3355;
  DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"BDD Fallback not found!", 3355LL, 0LL, 0LL, 0LL, 0LL);
  v6 = 0LL;
LABEL_10:
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10);
  return v6;
}
