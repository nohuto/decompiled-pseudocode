/*
 * XREFs of ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140028C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140018E68 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?GetFreeNode@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@AEAAXXZ @ 0x140028F8C (-GetFreeNode@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140037E14 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CSubmixImpl::OnConnectedToStream(CSubmixImpl *this, __int64 (***a2)(void))
{
  const struct _tlgProvider_t *v4; // rax
  __int64 (**v5)(void); // rax
  __int64 (*v6)(void); // rax
  int v7; // eax
  unsigned int v8; // ebx
  char *v9; // rsi
  __int64 *v10; // r14
  __int64 v11; // rdi
  const char *v12; // r9
  __int64 result; // rax
  int updated; // eax
  unsigned int v15; // ebx
  __int64 v16; // [rsp+20h] [rbp-158h] BYREF
  __int64 v17; // [rsp+28h] [rbp-150h]
  _QWORD v18[4]; // [rsp+30h] [rbp-148h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-128h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v4 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "SrvSubmixImpl_OnConnectedToStream", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v18[0] = (char *)this + 176;
  v5 = *a2;
  v16 = 0LL;
  v6 = *v5;
  try
  {
    v7 = v6();
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x453,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v7);
      if ( this != (CSubmixImpl *)-176LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      result = v8;
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v18[1] = (char *)this + 32;
      v9 = (char *)this + 72;
      v18[2] = v16;
      v17 = *((_QWORD *)this + 9);
      ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::GetFreeNode((char *)this + 72);
      v10 = (__int64 *)*((_QWORD *)this + 13);
      v11 = *v10;
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        v10 + 2,
        v16);
      *((_QWORD *)this + 13) = v11;
      v10[1] = 0LL;
      *v10 = v17;
      ++*((_QWORD *)this + 11);
      if ( *((_QWORD *)this + 9) )
        *(_QWORD *)(*(_QWORD *)v9 + 8LL) = v10;
      else
        *((_QWORD *)this + 10) = v10;
      *(_QWORD *)v9 = v10;
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16)
        && (updated = CSubmixImpl::UpdateActiveStreamCount(this, 1), v15 = updated, updated < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45D,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)updated);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v16);
        CSAutoLock<1>::~CSAutoLock<1>(v18);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        result = v15;
      }
      else
      {
        PublishDeviceGraphWnfState();
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( this != (CSubmixImpl *)-176LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        result = 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x463,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                           v12);
  }
  return result;
}
