/*
 * XREFs of ?ConnectToDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14002B790
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400192CC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14002BC8C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamGroup::ConnectToDeviceGraph(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v10; // eax
  __int64 v11; // rcx
  const struct _tlgProvider_t *v12; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v6 = AudioDgTelemetryProvider::Provider(a1);
  CPerfTracker::CPerfTracker(&PerformanceCount, v6, "SrvStreamGroup_ConnectToDeviceGraph", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v15 = 0LL;
  v7 = (**a2)(a2, &GUID_c3876f08_e8f4_47e9_b42f_3bc3418c0675, &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v7);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_4:
    if ( a1 != -200 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    goto LABEL_6;
  }
  if ( *(_QWORD *)(a1 + 328) )
  {
    v8 = -2005139410;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)0x887C002ELL);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_4;
  }
  if ( *(_BYTE *)(a1 + 337) )
  {
    wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 328), v15);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 24) + 240LL))(a1 + 24, v15, a3);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v10);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_4;
    }
    v12 = AudioDgTelemetryProvider::Provider(v11);
    if ( *(_DWORD *)v12 > 4u
      && (*((_DWORD *)v12 + 4) & 0x200LL) != 0
      && (*((_QWORD *)v12 + 3) & 0x200LL) == *((_QWORD *)v12 + 3) )
    {
      v16 = a2;
      v17 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v12,
        (unsigned int)&unk_1400B08C9,
        v13,
        v14,
        (__int64)&v17,
        (__int64)&v16);
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( a1 != -200 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  v8 = 0;
LABEL_6:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v8;
}
