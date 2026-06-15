/*
 * XREFs of ?GetDesiredReferenceStreamProperties@CAPOWrapperClient@@UEAAJPEAW4APO_REFERENCE_STREAM_PROPERTIES@@@Z @ 0x1800ABDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::GetDesiredReferenceStreamProperties(
        CAPOWrapperClient *this,
        enum APO_REFERENCE_STREAM_PROPERTIES *a2)
{
  struct AudioSrvTelemetryProvider *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  if ( *((_QWORD *)this + 4) && g_ADGProcess )
  {
    v4 = AudioSrvTelemetryProvider::Instance();
    CPerfTracker::CPerfTracker(
      &PerformanceCount,
      *((const struct _tlgProvider_t **)v4 + 1),
      "SystemEffect_GetDesiredReferenceStreamProperties",
      (const char *const)this + 76);
    v5 = (*(__int64 (__fastcall **)(_QWORD, enum APO_REFERENCE_STREAM_PROPERTIES *))(**((_QWORD **)this + 4) + 112LL))(
           *((_QWORD *)this + 4),
           a2);
    v6 = v5;
    if ( v5 >= 0 )
      v6 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
        (const char *)(unsigned int)v5);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
  }
  return v6;
}
