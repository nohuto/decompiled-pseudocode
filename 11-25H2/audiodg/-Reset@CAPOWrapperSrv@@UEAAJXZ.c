/*
 * XREFs of ?Reset@CAPOWrapperSrv@@UEAAJXZ @ 0x140064380
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::Reset(CAPOWrapperSrv *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  v2 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v2, "SrvSystemEffect_Reset", (const char *const)this + 132);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  else
    v4 = -2147467263;
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v4;
}
