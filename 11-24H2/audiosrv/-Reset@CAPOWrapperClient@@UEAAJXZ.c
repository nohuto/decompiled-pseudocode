/*
 * XREFs of ?Reset@CAPOWrapperClient@@UEAAJXZ @ 0x1800AC730
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::Reset(CAPOWrapperClient *this)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  v2 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v2 + 1),
    "SystemEffect_Reset",
    (const char *const)this + 124);
  v3 = *((_QWORD *)this + 11);
  if ( v3 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  else
    v4 = -2147467263;
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v4;
}
