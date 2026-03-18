/*
 * XREFs of ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402AB630
 * Callers:
 *     ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402AB5C4 (-PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA-AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D5304 (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D70FC (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x140098C18 (ScaleDPIRect.c)
 *     CalculateLogicalMonitorRect @ 0x14014DA2C (CalculateLogicalMonitorRect.c)
 */

struct tagRECT *__fastcall CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
        CMonitorTopology::MonitorData *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        unsigned int a4)
{
  unsigned __int16 v7; // di
  __m128i v8; // xmm0
  __m128i v10[2]; // [rsp+30h] [rbp-28h] BYREF

  *retstr = *(struct tagRECT *)a3;
  v7 = (a4 >> 8) & 0x1FF;
  if ( v7 )
  {
    v8 = *CalculateLogicalMonitorRect(
            v10,
            (__m128i *)((char *)this + 8),
            *((_WORD *)this + 20),
            v7,
            *((_WORD *)this + 32));
    ScaleDPIRect(retstr, a3, v7, *((_WORD *)this + 20), v8.m128i_i64[0], *((_QWORD *)this + 1));
  }
  return retstr;
}
