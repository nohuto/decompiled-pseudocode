/*
 * XREFs of ?StartStream@CStreamInstance@@UEAAJXZ @ 0x140005600
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStreamInstance::StartStream(CStreamInstance *this)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = AudioDgTelemetryProvider::Provider();
  CPerfTracker::CPerfTracker(&PerformanceCount, v2, "SrvStreamInstance_StartStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 40LL))((char *)this - 8);
  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 12) + 184LL))(
         *((_QWORD *)this + 12),
         (unsigned __int64)this & -(__int64)(this != (CStreamInstance *)8));
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( this != (CStreamInstance *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v3,
      PerformanceCount.LowPart);
    if ( this != (CStreamInstance *)-216LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v4;
}
