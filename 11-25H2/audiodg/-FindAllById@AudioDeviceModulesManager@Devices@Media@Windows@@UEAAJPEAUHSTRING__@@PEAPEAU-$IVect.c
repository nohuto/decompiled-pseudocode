/*
 * XREFs of ?FindAllById@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14007A890
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@1234@@Z @ 0x14001B668 (--$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudioDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllById(__int64 a1, HSTRING a2, _QWORD *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rbx
  __int64 *v13; // rcx
  __int64 v14; // rax
  HRESULT v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string1[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v23; // [rsp+80h] [rbp+40h] BYREF
  INT32 result; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0;
  v20 = 0LL;
  if ( a3 )
  {
    if ( a2 )
    {
      v9 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Media::Devices::AudioDeviceModule,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>(
             a1,
             &v20);
      v6 = v9;
      if ( v9 < 0 )
      {
        v8 = (unsigned int)v9;
        v7 = 660LL;
        goto LABEL_6;
      }
      v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(
              *(_QWORD *)(a1 + 112),
              &v23);
      v6 = v10;
      if ( v10 < 0 )
      {
        v8 = (unsigned int)v10;
        v7 = 662LL;
        goto LABEL_6;
      }
      v11 = 0;
      v12 = v20;
      while ( v11 < v23 )
      {
        string1[0] = 0LL;
        result = 0;
        v13 = *(__int64 **)(a1 + 112);
        v14 = *v13;
        v19 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v14 + 48))(v13, v11, &v19);
        v6 = v15;
        if ( v15 < 0 )
        {
          v16 = 672LL;
          goto LABEL_23;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v19 + 48LL))(v19, string1);
        v6 = v15;
        if ( v15 < 0 )
        {
          v16 = 673LL;
          goto LABEL_23;
        }
        v15 = WindowsCompareStringOrdinal(string1[0], a2, &result);
        v6 = v15;
        if ( v15 < 0 )
        {
          v16 = 674LL;
          goto LABEL_23;
        }
        if ( !result )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 104LL))(v12, v19);
          v6 = v15;
          if ( v15 < 0 )
          {
            v16 = 678LL;
LABEL_23:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v16,
              (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
              (const char *)(unsigned int)v15);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
            goto LABEL_29;
          }
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v19);
        ++v11;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 64LL))(v12, a3);
      v6 = v17;
      if ( v17 < 0 )
      {
        v8 = (unsigned int)v17;
        v7 = 682LL;
        goto LABEL_6;
      }
      if ( *a3 )
      {
        v6 = 0;
        goto LABEL_29;
      }
      v6 = -2147467259;
      v7 = 683LL;
    }
    else
    {
      v6 = -2147024809;
      v7 = 658LL;
    }
  }
  else
  {
    v6 = -2147467261;
    v7 = 657LL;
  }
  v8 = v6;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v8);
LABEL_29:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v20);
  return v6;
}
