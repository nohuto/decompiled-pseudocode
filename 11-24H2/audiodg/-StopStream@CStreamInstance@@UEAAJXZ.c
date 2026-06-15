/*
 * XREFs of ?StopStream@CStreamInstance@@UEAAJXZ @ 0x14003FC70
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

__int64 __fastcall CStreamInstance::StopStream(__int64 this)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // eax
  unsigned int v4; // edi
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v2 = AudioDgTelemetryProvider::Provider(this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v2, "SrvStreamInstance_StopStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 216));
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(this - 8) + 32LL))(this - 8)
    && ((*(void (__fastcall **)(__int64))(*(_QWORD *)(this - 8) + 48LL))(this - 8),
        v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(this + 96) + 192LL))(
               *(_QWORD *)(this + 96),
               this & -(__int64)(this != 8)),
        v4 = v3,
        v3 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AC,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v3);
    if ( this != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 216));
  }
  else
  {
    if ( this != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 216));
    v4 = 0;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v4;
}
