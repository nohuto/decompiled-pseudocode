/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x140029F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140016300 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix(
        __int64 this,
        __int64 (__fastcall ***a2)(struct ISubmix *, GUID *, __int64 *))
{
  const struct _tlgProvider_t *v4; // rax
  __int64 (__fastcall **v5)(struct ISubmix *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v9; // esi
  __int64 v10; // rcx
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  const struct _tlgProvider_t *v14; // r8
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  struct ISubmix *v19; // [rsp+50h] [rbp-B0h] BYREF
  char *v20; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v4 = AudioDgTelemetryProvider::Provider(this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "SrvStreamInstance_Disconnect", 0LL);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 216));
  v5 = *a2;
  v17 = 0LL;
  v6 = (*v5)((struct ISubmix *)a2, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v6);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( this != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 216));
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(this - 8) + 72LL))(this - 8) )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(this - 8) + 64LL))(this - 8, v17);
      v9 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x213,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)(unsigned int)v16);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_17:
        if ( this != -216 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(this + 216));
        v7 = v9;
        goto LABEL_13;
      }
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 208LL))(v17, this & -(__int64)(this != 8));
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x216,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v8);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      goto LABEL_17;
    }
    wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)(this + 96));
    PublishDeviceGraphWnfState();
    v11 = AudioDgTelemetryProvider::Provider(v10);
    v14 = v11;
    if ( *(_DWORD *)v11 > 4u
      && (*((_DWORD *)v11 + 4) & 0x200LL) != 0
      && (*((_QWORD *)v11 + 3) & 0x200LL) == *((_QWORD *)v11 + 3) )
    {
      v18 = *(_QWORD *)(this + 264);
      v19 = (struct ISubmix *)a2;
      v20 = (char *)(this - 8);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (int)v11,
        (int)&unk_1400B0990,
        (__int64)v11,
        v13,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18);
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64, __int64, const struct _tlgProvider_t *))(*(_QWORD *)v17 + 16LL))(v17, v12, v14);
    if ( this != -216 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 216));
    v7 = 0;
  }
LABEL_13:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v7;
}
