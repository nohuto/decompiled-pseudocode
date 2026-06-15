/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@UEAAJPEAUISubmix@@@Z @ 0x14002B030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140016300 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??$com_copy_to_nothrow@UISubmixInternal@@AEAPEAUISubmix@@@wil@@YAJAEAPEAUISubmix@@PEAPEAUISubmixInternal@@@Z @ 0x14002B498 (--$com_copy_to_nothrow@UISubmixInternal@@AEAPEAUISubmix@@@wil@@YAJAEAPEAUISubmix@@PEAPEAUISubmix.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(unsigned __int64 this, struct ISubmix *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 (__fastcall **v5)(struct ISubmix *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  char *v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  const struct _tlgProvider_t *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  const struct _tlgProvider_t *v21; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+40h] [rbp-19h] BYREF
  struct ISubmix *v27; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v29[2]; // [rsp+60h] [rbp+7h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v27 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 216));
  v28[0] = v4;
  v5 = *(__int64 (__fastcall ***)(struct ISubmix *, GUID *, __int64 *))a2;
  v26 = 0LL;
  v6 = (*v5)(a2, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, &v26);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
      (const char *)(unsigned int)v6);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  else
  {
    v8 = v26;
    v9 = (char *)(this - 8);
    v10 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(this - 8) + 128LL))(this - 8);
    if ( v10 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D9,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)0x80070057LL);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      goto LABEL_35;
    }
    if ( *(_BYTE *)(this + 256)
      && ((unsigned int)(*(_DWORD *)(this + 104) - 2) > 1
       || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 120LL))(v26)) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DE,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)0x80070057LL);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
      CSAutoLock<1>::~CSAutoLock<1>(v28);
      return 2147942487LL;
    }
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v26 + 152LL))(v26, v29);
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD *))(*(_QWORD *)v9 + 136LL))(this - 8, v28);
    v13 = *v12 - *v11;
    if ( *v12 == *v11 )
      v13 = v12[1] - v11[1];
    if ( v13 )
    {
      v23 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _BYTE *))(*(_QWORD *)v9 + 136LL))(this - 8, v30);
      v24 = *v23 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *v23 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v24 = v23[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v24 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E5,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)0x80070057LL);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_35:
        if ( v4 )
          LeaveCriticalSection(v4);
        return 2147942487LL;
      }
    }
    v14 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(
            this - 8,
            v26,
            0LL,
            0LL);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E8,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v14);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v26 + 200LL))(
              v26,
              this & -(__int64)(this != 8));
      v7 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F1,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)(unsigned int)v15);
        v25 = v26;
        if ( v26 )
        {
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v9 + 64LL))(this - 8, v26);
          v25 = v26;
        }
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      else
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)(this + 96));
        v16 = wil::com_copy_to_nothrow<ISubmixInternal,ISubmix * &>(&v27, this + 96);
        v7 = v16;
        if ( v16 >= 0 )
        {
          PublishDeviceGraphWnfState();
          v18 = AudioDgTelemetryProvider::Provider(v17);
          v21 = v18;
          if ( *(_DWORD *)v18 > 4u
            && (*((_DWORD *)v18 + 4) & 0x200LL) != 0
            && (*((_QWORD *)v18 + 3) & 0x200LL) == *((_QWORD *)v18 + 3) )
          {
            v27 = *(struct ISubmix **)(this + 264);
            v28[0] = a2;
            v29[0] = this - 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              (int)v18,
              (int)&unk_1400B094A,
              (__int64)v18,
              v20,
              (__int64)v29,
              (__int64)v28,
              (__int64)&v27);
          }
          if ( v26 )
            (*(void (__fastcall **)(__int64, __int64, const struct _tlgProvider_t *))(*(_QWORD *)v26 + 16LL))(
              v26,
              v19,
              v21);
          if ( v4 )
            LeaveCriticalSection(v4);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F5,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)(unsigned int)v16);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v7;
}
