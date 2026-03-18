/*
 * XREFs of ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1801C13AC
 * Callers:
 *     ?UpdateCompositorClock@CComposition@@IEAAXXZ @ 0x1800FCF04 (-UpdateCompositorClock@CComposition@@IEAAXXZ.c)
 * Callees:
 *     ?GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z @ 0x1801C1214 (-GetDefaultVBlankDuration@CScheduler@@SA_KPEBVIMonitorTarget@@@Z.c)
 *     ??0CClockBase@@IEAA@XZ @ 0x1801C1424 (--0CClockBase@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CMonitorClock *__fastcall CMonitorClock::CMonitorClock(CMonitorClock *this, struct IMonitorTarget *a2)
{
  const struct IMonitorTarget *v4; // rdx
  __int64 v5; // rax

  CClockBase::CClockBase(this);
  *((_QWORD *)this + 10) = v4;
  *(_QWORD *)this = &CMonitorClock::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 3) = CScheduler::GetDefaultVBlankDuration(v4);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)v5;
  *((_QWORD *)this + 7) = *(_QWORD *)(v5 + 16);
  *((_DWORD *)this + 16) = *(_DWORD *)(v5 + 24);
  return this;
}
