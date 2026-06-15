/*
 * XREFs of ?StartStream@CSharedStreamGroupProxy@@UEAAJPEAUIStreamInstance@@@Z @ 0x180078370
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800A4048 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::StartStream(CSharedStreamGroupProxy *this, struct IStreamInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct AudioSrvTelemetryProvider *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v5 + 1),
    "StreamGroup_StreamStart",
    0LL);
  v6 = (*(__int64 (__fastcall **)(struct IStreamInstance *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x578,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v7;
  }
  else
  {
    ++*((_DWORD *)this + 90);
    CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
