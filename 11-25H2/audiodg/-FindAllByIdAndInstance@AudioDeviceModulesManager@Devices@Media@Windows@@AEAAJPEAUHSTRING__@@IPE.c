/*
 * XREFs of ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x14007AA6C
 * Callers:
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140055BA0 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@@detail@Internal@Collections@Foundation@Windows@@YAJP8IVectorStatics@Detail@234@EAAJPEBUObjectVectorInfo@6234@PEAPEAUIInspectable@@@ZPEAPEAV?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@1234@@Z @ 0x14001B668 (--$CreateExternalObjectVector@VAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudioDevic.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
        __int64 a1,
        HSTRING a2,
        int a3,
        _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rbx
  HRESULT v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  int v19; // [rsp+20h] [rbp-20h] BYREF
  INT32 result; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v21; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+30h] [rbp-10h] BYREF
  HSTRING string1; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v25; // [rsp+88h] [rbp+48h] BYREF

  v25 = 0;
  v22 = 0LL;
  if ( a4 )
  {
    if ( a2 )
    {
      v22 = 0LL;
      v11 = Windows::Foundation::Collections::Internal::detail::CreateExternalObjectVector<Windows::Media::Devices::AudioDeviceModule,Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>(
              a1,
              &v22);
      v8 = v11;
      if ( v11 < 0 )
      {
        v10 = (unsigned int)v11;
        v9 = 719LL;
        goto LABEL_6;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 112) + 56LL))(
              *(_QWORD *)(a1 + 112),
              &v25);
      v8 = v12;
      if ( v12 < 0 )
      {
        v10 = (unsigned int)v12;
        v9 = 721LL;
        goto LABEL_6;
      }
      v13 = 0;
      v14 = v22;
      while ( v13 < v25 )
      {
        v21 = 0LL;
        string1 = 0LL;
        result = 0;
        v19 = 0;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 112) + 48LL))(
                *(_QWORD *)(a1 + 112),
                v13,
                &v21);
        v8 = v15;
        if ( v15 < 0 )
        {
          v16 = 732LL;
          goto LABEL_26;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v21 + 48LL))(v21, &string1);
        v8 = v15;
        if ( v15 < 0 )
        {
          v16 = 733LL;
          goto LABEL_26;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 64LL))(v21, &v19);
        v8 = v15;
        if ( v15 < 0 )
        {
          v16 = 734LL;
          goto LABEL_26;
        }
        if ( v19 == a3 )
        {
          v15 = WindowsCompareStringOrdinal(string1, a2, &result);
          v8 = v15;
          if ( v15 < 0 )
          {
            v16 = 738LL;
            goto LABEL_26;
          }
          if ( !result )
          {
            v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 104LL))(v14, v21);
            v8 = v15;
            if ( v15 < 0 )
            {
              v16 = 742LL;
LABEL_26:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v16,
                (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
                (const char *)(unsigned int)v15);
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
              goto LABEL_32;
            }
          }
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v21);
        ++v13;
      }
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 64LL))(v14, a4);
      v8 = v17;
      if ( v17 < 0 )
      {
        v10 = (unsigned int)v17;
        v9 = 747LL;
        goto LABEL_6;
      }
      if ( *a4 )
      {
        v8 = 0;
        goto LABEL_32;
      }
      v8 = -2147467259;
      v9 = 748LL;
    }
    else
    {
      v8 = -2147024809;
      v9 = 717LL;
    }
  }
  else
  {
    v8 = -2147467261;
    v9 = 716LL;
  }
  v10 = v8;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
    (const char *)v10);
LABEL_32:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
  return v8;
}
