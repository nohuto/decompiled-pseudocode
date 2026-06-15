/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800640A0
 * Callers:
 *     ?GetEffectsList@CAPOWrapperClient@@W7EAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800ABE90 (-GetEffectsList@CAPOWrapperClient@@W7EAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A23A4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::GetEffectsList(
        CAPOWrapperClient *this,
        struct _GUID **a2,
        unsigned int *a3,
        void *a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  int v9; // eax
  unsigned int LastError; // ebx
  void *v12; // rbx
  HANDLE CurrentProcess; // rax
  const char *v14; // r9
  HANDLE TargetHandle; // [rsp+40h] [rbp-138h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  if ( *((_QWORD *)this + 9) && g_ADGProcess )
  {
    v8 = AudioSrvTelemetryProvider::Instance();
    CPerfTracker::CPerfTracker(
      &PerformanceCount,
      *((const struct _tlgProvider_t **)v8 + 1),
      "SystemEffect_GetEffectsList",
      (const char *const)this + 116);
    TargetHandle = 0LL;
    if ( !a4
      || (v12 = *(void **)&g_ADGProcess[2].LockCount,
          CurrentProcess = GetCurrentProcess(),
          DuplicateHandle(CurrentProcess, a4, v12, &TargetHandle, 0, 0, 2u)) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID **, unsigned int *))(**((_QWORD **)this + 9) + 48LL))(
             *((_QWORD *)this + 9),
             a2,
             a3);
      LastError = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF7,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
          (const char *)(unsigned int)v9);
      else
        LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xF4,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
                    v14);
    }
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  }
  else
  {
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
  }
  return LastError;
}
