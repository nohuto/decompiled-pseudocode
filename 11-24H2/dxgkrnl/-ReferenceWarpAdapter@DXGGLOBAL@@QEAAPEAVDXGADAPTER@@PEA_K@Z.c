/*
 * XREFs of ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1401D6728
 * Callers:
 *     ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x14018EFE4 (-DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z.c)
 * Callees:
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceWarpAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  char *v4; // r9
  char *v5; // r8
  char *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  DXGADAPTERLISTLOCK *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v10);
  v4 = (char *)this + 800;
  v5 = (char *)*((_QWORD *)this + 100);
  while ( v5 != v4 && v5 )
  {
    v6 = v5;
    v5 = *(char **)v5;
    if ( (*((_DWORD *)v6 + 111) & 0x10) != 0 )
    {
      _m_prefetchw(v6 + 24);
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
  WdLogSingleEntry0(3LL);
  v6 = 0LL;
  WdLogGlobalForLineNumber = 3389;
LABEL_10:
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v10);
  return (struct DXGADAPTER *)v6;
}
