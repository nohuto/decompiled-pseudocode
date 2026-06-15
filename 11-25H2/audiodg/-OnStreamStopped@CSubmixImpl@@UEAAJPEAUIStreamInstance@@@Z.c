/*
 * XREFs of ?OnStreamStopped@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140037F30
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x140005528 (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140038114 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::OnStreamStopped(
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

  v4 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "SrvSubmixImpl_OnStreamStopped", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *a2;
  v11 = 0LL;
  v6 = (*v5)((struct IStreamInstance *)a2, &GUID_715c22ff_b7d8_425e_9db8_ad78c623b67e, &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x445,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 88LL))(v11);
    if ( CSubmixImpl::FindStream(this, v8) )
    {
      updated = CSubmixImpl::UpdateActiveStreamCount(this, -1);
      v7 = updated;
      if ( updated >= 0 )
      {
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        if ( this != (CSubmixImpl *)-176LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
        v7 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x449,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)updated);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      v7 = -2005139430;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x446,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x887C001ALL);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( this != (CSubmixImpl *)-176LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
LABEL_9:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v7;
}
