/*
 * XREFs of ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x14001A500
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@1234@@Z @ 0x14001B368 (--$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudioDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetAudioModules(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  unsigned int v16; // r14d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  unsigned int v18; // [rsp+58h] [rbp+38h] BYREF
  __int64 v19; // [rsp+60h] [rbp+40h] BYREF
  __int64 v20; // [rsp+68h] [rbp+48h] BYREF

  v18 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    v20 = 0LL;
    v4 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Media::Devices::AudioDeviceModule,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>(
           a1,
           &v20);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x58E,
        (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 56LL))(*(_QWORD *)(a1 + 64), &v18);
      v6 = 0;
      v7 = v20;
      while ( v6 < v18 )
      {
        v11 = *(__int64 **)(a1 + 64);
        v12 = *v11;
        v19 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v12 + 48))(v11, v6, &v19);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x598,
            (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
            (const char *)(unsigned int)v13);
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          return v14;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, v7);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x59C,
            (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
            (const char *)(unsigned int)v15);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
          v5 = v16;
          goto LABEL_22;
        }
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        ++v6;
      }
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v7)(
             v7,
             &GUID_325cb078_f603_522b_8afe_04b0bfcfa0e9,
             a2);
      v9 = v8;
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A0,
        (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)v8);
      v5 = v9;
    }
LABEL_22:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v20);
  }
  else
  {
    v5 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58A,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)0x80004003LL);
  }
  return v5;
}
