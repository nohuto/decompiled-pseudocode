/*
 * XREFs of ?StartStream@CProcessSubmixProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x18000AF70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProcessSubmixProxy::StartStream(unsigned __int64 this, struct IStreamInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct AudioSrvTelemetryProvider *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  v5 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v5 + 1),
    "ProcessSubmix_StreamStart",
    0LL);
  v6 = (*(__int64 (__fastcall **)(struct IStreamInstance *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6,
      PerformanceCount.LowPart);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
  else
  {
    v8 = *(_DWORD *)(this - 8 + 128);
    *(_DWORD *)(this - 8 + 128) = v8 + 1;
    if ( !v8 )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(this - 8 + 200) + 344LL))(
        *(_QWORD *)(this - 8 + 200),
        this & -(__int64)(this != 8));
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
