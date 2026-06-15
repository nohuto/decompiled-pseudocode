/*
 * XREFs of ?GetEffectsList@CAPOWrapperClient@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x18000A510
 * Callers:
 *     ?GetEffectsList@CAPOWrapperClient@@W7EAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x1800AF590 (-GetEffectsList@CAPOWrapperClient@@W7EAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A5F68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v15; // [rsp+20h] [rbp-158h]
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
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
          (const char *)(unsigned int)v9,
          v15);
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
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL,
      v15);
  }
  return LastError;
}
