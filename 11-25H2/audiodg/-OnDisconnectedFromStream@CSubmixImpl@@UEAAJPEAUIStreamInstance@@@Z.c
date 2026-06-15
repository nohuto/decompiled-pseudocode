/*
 * XREFs of ?OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140029300
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140029560 (-RemoveAt@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140038114 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::OnDisconnectedFromStream(
        CSubmixImpl *this,
        __int64 (__fastcall ***a2)(struct IStreamInstance *, GUID *, __int64 *))
{
  const struct _tlgProvider_t *v4; // rax
  __int64 (__fastcall **v5)(struct IStreamInstance *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  _QWORD *i; // rdi
  int updated; // eax
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  char *v13; // [rsp+28h] [rbp-D8h] BYREF
  char *v14; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v4 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "SrvSubmixImpl_OnDisconnectedFromStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v13 = (char *)this + 176;
  v5 = *a2;
  v12 = 0LL;
  v6 = (*v5)((struct IStreamInstance *)a2, &GUID_715c22ff_b7d8_425e_9db8_ad78c623b67e, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( this != (CSubmixImpl *)-176LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v14 = (char *)this + 32;
    v8 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    for ( i = (_QWORD *)*((_QWORD *)this + 9); i && i[2] != v8; i = (_QWORD *)*i )
      ;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( !i )
    {
      v7 = -2005139430;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x471,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x887C001ALL);
      CSAutoLock<1>::~CSAutoLock<1>(&v14);
LABEL_25:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v12);
      CSAutoLock<1>::~CSAutoLock<1>(&v13);
      goto LABEL_18;
    }
    ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveAt(
      (char *)this + 72,
      i);
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) )
    {
      updated = CSubmixImpl::UpdateActiveStreamCount(this, -1);
      v7 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x477,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)updated);
        goto LABEL_25;
      }
    }
    PublishDeviceGraphWnfState();
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( this != (CSubmixImpl *)-176LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
    v7 = 0;
  }
LABEL_18:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v7;
}
