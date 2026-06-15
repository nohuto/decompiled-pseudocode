/*
 * XREFs of ?GetEffectsListRemote@CAPOWrapperSrv@@UEAAJPEAPEAU_GUID@@PEAI_K@Z @ 0x140049850
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetEffectsListRemote(
        CAPOWrapperSrv *this,
        struct _GUID **a2,
        unsigned int *a3,
        __int64 a4)
{
  const struct _tlgProvider_t *v8; // rax
  unsigned int v9; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-128h] BYREF

  v8 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v8, "SrvSystemEffect_GetEffectsList", (const char *const)this + 140);
  v9 = (*(__int64 (__fastcall **)(char *, struct _GUID **, unsigned int *, __int64))(*((_QWORD *)this + 2) + 24LL))(
         (char *)this + 16,
         a2,
         a3,
         a4);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v9;
}
