/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14006F660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x14001CF70 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1400497C8 (-ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14005E8F4 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix@@@details@wil@@QEAA_NXZ @ 0x140071F00 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStr.c)
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
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // r9
  HRESULT v13; // eax
  __int64 v14; // rdx
  HANDLE v15; // r15
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  void (__fastcall **v19)(_QWORD *, GUID *, __int64 *); // rax
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  GUID v26; // xmm0
  int v28; // [rsp+20h] [rbp-41h]
  _QWORD *v29; // [rsp+40h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+48h] [rbp-19h] BYREF
  __int64 v31; // [rsp+50h] [rbp-11h] BYREF
  void *v32; // [rsp+58h] [rbp-9h] BYREF
  __int128 v33; // [rsp+60h] [rbp-1h]
  __int128 v34; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v33 = *(_OWORD *)((char *)this + 104);
  v34 = v33;
  EtwEventActivityIdControl(4LL, &v34);
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 278LL;
LABEL_55:
    v12 = v8;
    goto LABEL_56;
  }
  if ( a3 )
  {
    v9 = 279LL;
LABEL_54:
    v8 = -2147024809;
    goto LABEL_55;
  }
  if ( *((_QWORD *)a2 + 8) != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || *((_QWORD *)a2 + 9) != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    v9 = 283LL;
    goto LABEL_54;
  }
  *((_DWORD *)a5 + 236) = 0;
  v10 = ValidateAudioStreamDirection(*(_DWORD *)a2);
  v8 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v9 = 288LL;
LABEL_56:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)v12);
    goto LABEL_57;
  }
  if ( (unsigned int)(v11 - 2) <= 1 || *((_DWORD *)a2 + 79) )
  {
    v9 = 294LL;
    goto LABEL_54;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v30 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v29 = 0LL;
  v13 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD **))this + 11))(
          *((_QWORD *)this + 11),
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v29);
  v8 = v13;
  if ( v13 < 0 )
  {
    v14 = 299LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)(unsigned int)v13);
LABEL_14:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
    CSAutoLock<1>::~CSAutoLock<1>(&v30);
LABEL_57:
    EtwEventActivityIdControl(4LL, &v34);
    return v8;
  }
  v13 = CoImpersonateClient();
  v8 = v13;
  if ( v13 < 0 )
  {
    v14 = 301LL;
    goto LABEL_13;
  }
  v15 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
  v32 = v15;
  CoRevertToSelf();
  v16 = *((_QWORD *)a2 + 4);
  if ( (*((_DWORD *)this + 20) & 0x40000) != 0 )
  {
    if ( !v16 )
    {
      v17 = 318LL;
LABEL_20:
      v8 = -2005139379;
LABEL_21:
      v18 = v8;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
        (const char *)v18);
LABEL_23:
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v32);
      goto LABEL_14;
    }
    if ( v16 < *((_QWORD *)this + 28) || v16 > 50000000 )
    {
      v8 = -2005139386;
      v17 = 321LL;
      goto LABEL_21;
    }
    if ( v16 != *((_QWORD *)a2 + 3) )
    {
      v8 = -2005139371;
      v17 = 324LL;
      goto LABEL_21;
    }
  }
  else
  {
    if ( v16 && (v16 < *((_QWORD *)this + 28) || v16 > 50000000) )
    {
      v8 = -2005139386;
      v17 = 339LL;
      goto LABEL_21;
    }
    if ( *((_QWORD *)a2 + 3) > 0x2FAF080uLL )
    {
      v17 = 346LL;
      goto LABEL_20;
    }
  }
  v19 = (void (__fastcall **)(_QWORD *, GUID *, __int64 *))*v29;
  v20 = *((_DWORD *)this + 58);
  v32 = 0LL;
  v28 = v20;
  v21 = ((__int64 (__fastcall *)(_QWORD *, HANDLE))v19[6])(v29, v15);
  v8 = v21;
  if ( v21 < 0 )
  {
    v18 = (unsigned int)v21;
    v17 = 355LL;
    goto LABEL_22;
  }
  *((_DWORD *)a5 + 236) = 2;
  v31 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_RemoteAudioExclusiveStreamFix>::GetImpl'::`2'::impl) )
  {
    v22 = v31;
    v31 = 0LL;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    (*(void (__fastcall **)(_QWORD *, GUID *, __int64 *))*v29)(v29, &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63, &v31);
  }
  else
  {
    v24 = v31;
    v31 = 0LL;
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v25 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v29)(
            v29,
            &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
            &v31);
    if ( v25 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        1361LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
        (const char *)(unsigned int)v25,
        v28);
  }
  if ( v31 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v31 + 64LL))(v31, (char *)a5 + 24);
    v8 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
        (const char *)(unsigned int)v23);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v31);
      goto LABEL_23;
    }
  }
  if ( *(_DWORD *)a2 )
    v26 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
  else
    v26 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
  *(GUID *)a5 = v26;
  *((_DWORD *)a5 + 234) = 1;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v31);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v32);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v29);
  CSAutoLock<1>::~CSAutoLock<1>(&v30);
  EtwEventActivityIdControl(4LL, &v34);
  return 0LL;
}
