/*
 * XREFs of ?GetRegistrationProperties@CAPOWrapperSrv@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x1400642D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetRegistrationProperties(CAPOWrapperSrv *this, struct APO_REG_PROPERTIES **a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF

  v4 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    v4,
    "SrvSystemEffect_GetRegistrationProps",
    (const char *const)this + 132);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
    v6 = (*(__int64 (__fastcall **)(__int64, struct APO_REG_PROPERTIES **))(*(_QWORD *)v5 + 40LL))(v5, a2);
  else
    v6 = -2147467263;
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v6;
}
