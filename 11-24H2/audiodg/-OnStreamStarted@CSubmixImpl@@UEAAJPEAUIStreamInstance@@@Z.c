/*
 * XREFs of ?OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140005710
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x140005558 (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140037E14 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::OnStreamStarted(
        CSubmixImpl *this,
        __int64 (__fastcall ***a2)(struct IStreamInstance *, GUID *, __int64 *))
{
  const struct _tlgProvider_t *v4; // rax
  __int64 (__fastcall **v5)(struct IStreamInstance *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int updated; // eax
  __int64 v11; // [rsp+20h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v4 = AudioDgTelemetryProvider::Provider();
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "SrvSubmixImpl_OnStreamStarted", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *a2;
  v11 = 0LL;
  v6 = (*v5)((struct IStreamInstance *)a2, &GUID_715c22ff_b7d8_425e_9db8_ad78c623b67e, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x433,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6,
      v11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
  if ( !CSubmixImpl::FindStream(this, v8) )
  {
    v7 = -2005139430;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x434,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL,
      v11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_5:
    if ( this != (CSubmixImpl *)-176LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    goto LABEL_7;
  }
  updated = CSubmixImpl::UpdateActiveStreamCount(this, 1);
  v7 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x437,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)updated,
      v11);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_5;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( this != (CSubmixImpl *)-176LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v7 = 0;
LABEL_7:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v7;
}
