/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x14002A990
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14002B98C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(CStreamGroup *this, struct IAudioDeviceGraph *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // [rsp+30h] [rbp-138h] BYREF
  struct IAudioDeviceGraph *v13; // [rsp+38h] [rbp-130h] BYREF
  CStreamGroup *v14; // [rsp+40h] [rbp-128h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v4 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "SrvStreamGroup_DisconnectFromSaDevice", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  if ( *((_BYTE *)this + 337) )
  {
LABEL_6:
    wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 41);
    if ( this != (CStreamGroup *)-200LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
    v6 = 0;
    goto LABEL_9;
  }
  v12 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, __int64 *))a2)(
         a2,
         &GUID_c3876f08_e8f4_47e9_b42f_3bc3418c0675,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 3) + 104LL))((char *)this + 24, v12);
    v8 = AudioDgTelemetryProvider::Provider(v7);
    if ( *(_DWORD *)v8 > 4u
      && (*((_DWORD *)v8 + 4) & 0x200LL) != 0
      && (*((_QWORD *)v8 + 3) & 0x200LL) == *((_QWORD *)v8 + 3) )
    {
      v13 = a2;
      v14 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v8,
        (unsigned int)&unk_1400B092F,
        v9,
        v10,
        (__int64)&v14,
        (__int64)&v13);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC6,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)(unsigned int)v5);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( this != (CStreamGroup *)-200LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 5);
LABEL_9:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v6;
}
