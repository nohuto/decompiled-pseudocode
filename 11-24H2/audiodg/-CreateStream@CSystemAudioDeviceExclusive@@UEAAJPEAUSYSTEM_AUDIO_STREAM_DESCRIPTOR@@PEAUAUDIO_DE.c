/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CC70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1400494C8 (-ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ??$com_query_to_nothrow@UIAudioDeviceEndpoint2@@AEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@wil@@@wil@@YAJAEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@0@PEAPEAUIAudioDeviceEndpoint2@@@Z @ 0x14006EE80 (--$com_query_to_nothrow@UIAudioDeviceEndpoint2@@AEAV-$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exce.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceExclusive::CreateStream(
        CSystemAudioDeviceExclusive *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // r9
  HRESULT v14; // eax
  __int64 v15; // rdx
  HANDLE v16; // r15
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  GUID v23; // xmm0
  __int64 *v25; // [rsp+40h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+48h] [rbp-19h] BYREF
  void *v27; // [rsp+50h] [rbp-11h] BYREF
  __int64 v28; // [rsp+58h] [rbp-9h] BYREF
  __int128 v29; // [rsp+60h] [rbp-1h]
  __int128 v30; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v29 = *(_OWORD *)((char *)this + 104);
  v30 = v29;
  EtwEventActivityIdControl(4LL, &v30);
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 276LL;
LABEL_48:
    v13 = v8;
    goto LABEL_49;
  }
  if ( a3 )
  {
    v9 = 277LL;
LABEL_47:
    v8 = -2147024809;
    goto LABEL_48;
  }
  v10 = *((_QWORD *)a2 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v10 )
  {
    v9 = 281LL;
    goto LABEL_47;
  }
  *((_DWORD *)a5 + 236) = 0;
  v11 = ValidateAudioStreamDirection(*(_DWORD *)a2);
  v8 = v11;
  if ( v11 < 0 )
  {
    v13 = (unsigned int)v11;
    v9 = 286LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)v13);
    goto LABEL_50;
  }
  if ( (unsigned int)(v12 - 2) <= 1 || *((_DWORD *)a2 + 79) )
  {
    v9 = 292LL;
    goto LABEL_47;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v26 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v25 = 0LL;
  v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v25);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = 297LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)(unsigned int)v14);
LABEL_16:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v25);
    CSAutoLock<1>::~CSAutoLock<1>(&v26);
    goto LABEL_50;
  }
  v14 = CoImpersonateClient();
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = 299LL;
    goto LABEL_15;
  }
  v16 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
  v27 = v16;
  CoRevertToSelf();
  v17 = *((_QWORD *)a2 + 4);
  if ( (*((_DWORD *)this + 20) & 0x40000) != 0 )
  {
    if ( !v17 )
    {
      v18 = 316LL;
LABEL_22:
      v8 = -2005139379;
LABEL_23:
      v19 = v8;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
        (const char *)v19);
LABEL_25:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v27);
      goto LABEL_16;
    }
    if ( v17 < *((_QWORD *)this + 28) || v17 > 50000000 )
    {
      v8 = -2005139386;
      v18 = 319LL;
      goto LABEL_23;
    }
    if ( v17 != *((_QWORD *)a2 + 3) )
    {
      v8 = -2005139371;
      v18 = 322LL;
      goto LABEL_23;
    }
  }
  else
  {
    if ( v17 && (v17 < *((_QWORD *)this + 28) || v17 > 50000000) )
    {
      v8 = -2005139386;
      v18 = 337LL;
      goto LABEL_23;
    }
    if ( *((_QWORD *)a2 + 3) > 0x2FAF080uLL )
    {
      v18 = 344LL;
      goto LABEL_22;
    }
  }
  v20 = *v25;
  v27 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64 *, HANDLE))(v20 + 48))(v25, v16);
  v8 = v21;
  if ( v21 < 0 )
  {
    v19 = (unsigned int)v21;
    v18 = 353LL;
    goto LABEL_24;
  }
  *((_DWORD *)a5 + 236) = 2;
  v28 = 0LL;
  wil::com_query_to_nothrow<IAudioDeviceEndpoint2,wil::com_ptr_t<IAudioDeviceEndpoint,wil::err_exception_policy> &>(
    &v25,
    (__int64)&v28);
  if ( v28 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 64LL))(v28, (char *)a5 + 24);
    v8 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16C,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
        (const char *)(unsigned int)v22);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v28);
      goto LABEL_25;
    }
  }
  if ( *(_DWORD *)a2 )
    v23 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
  else
    v23 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
  *(GUID *)a5 = v23;
  *((_DWORD *)a5 + 234) = 1;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v28);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v27);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v25);
  CSAutoLock<1>::~CSAutoLock<1>(&v26);
  v8 = 0;
LABEL_50:
  EtwEventActivityIdControl(4LL, &v30);
  return v8;
}
