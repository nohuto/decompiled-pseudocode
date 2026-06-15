/*
 * XREFs of ?StartStream@CStreamInstanceProxyImpl@@IEAAJXZ @ 0x18000B2F0
 * Callers:
 *     ?StartStream@CStreamInstanceProxy@@UEAAJXZ @ 0x180080510 (-StartStream@CStreamInstanceProxy@@UEAAJXZ.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstanceProxyImpl::StartStream(CStreamInstanceProxyImpl *this)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(&PerformanceCount, *((const struct _tlgProvider_t **)v2 + 1), "StreamInstance_Start", 0LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 96LL))(
         *((_QWORD *)this + 3),
         *((_QWORD *)this + 2));
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3,
      PerformanceCount.LowPart);
  else
    v4 = 0;
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v4;
}
