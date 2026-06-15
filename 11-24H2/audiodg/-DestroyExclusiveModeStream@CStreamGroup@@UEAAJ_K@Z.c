/*
 * XREFs of ?DestroyExclusiveModeStream@CStreamGroup@@UEAAJ_K@Z @ 0x14006E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x140005558 (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140018E68 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?RemoveAt@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140029260 (-RemoveAt@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?Find@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@PEAU3@@Z @ 0x1400451A4 (-Find@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$CEl.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 */

__int64 __fastcall CStreamGroup::DestroyExclusiveModeStream(CStreamGroup *this, __int64 a2)
{
  unsigned int v2; // esi
  const struct _tlgProvider_t *v6; // rax
  struct IStreamInstanceInternal *Stream; // rax
  _QWORD *v8; // rbx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v2 = 0;
  if ( *((_BYTE *)this + 337) )
  {
    v6 = AudioDgTelemetryProvider::Provider((__int64)this);
    CPerfTracker::CPerfTracker(&PerformanceCount, v6, "SrvSubmixImpl_DestroyStream", 0LL);
    EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
    v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
    Stream = CSubmixImpl::FindStream((CStreamGroup *)((char *)this + 24), a2);
    wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
      &v9,
      (__int64)Stream);
    if ( v9 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
      v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v10,
        v9);
      v8 = ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::Find(
             (_QWORD *)this + 12,
             &v10);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v10);
      ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveAt(
        (_QWORD *)this + 12,
        v8);
      CSAutoLock<1>::~CSAutoLock<1>(&v11);
    }
    else
    {
      v2 = -2005139430;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x86,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)0x887C001ALL);
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v9);
    CSAutoLock<1>::~CSAutoLock<1>(&v12);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return v2;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)0x80004001LL);
    return 2147500033LL;
  }
}
