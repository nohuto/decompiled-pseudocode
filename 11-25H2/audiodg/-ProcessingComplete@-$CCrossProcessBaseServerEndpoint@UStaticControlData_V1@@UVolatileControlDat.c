/*
 * XREFs of ?ProcessingComplete@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAXXZ @ 0x140051E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDB8 (McGenEventWrite_EventWriteTransfer.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140011684 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001D5AC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::ProcessingComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  char v4; // al
  int v5; // esi
  __int64 v6; // rcx
  wil::details *v7; // r15
  wil::details **v8; // rax
  wil::details **v9; // rdi
  int v10; // r14d
  wil::details **v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  wil::details ***v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  __int64 *v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v3 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
    goto LABEL_15;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 164LL), 0, 0);
  v5 = v4 & 1;
  if ( (v4 & 1) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 440);
    if ( v6 )
    {
      _InterlockedExchange64((volatile __int64 *)(v3 + 432), v6);
      v7 = *(wil::details **)(v3 + 432);
      wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)(v3 + 424));
      *(_QWORD *)(v3 + 424) = 0LL;
      v8 = (wil::details **)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      v11 = v8;
      if ( v8 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)v8);
        *v9 = (wil::details *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICrossProcessEvent>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v9 = (wil::details *)&CStandardEvent::`vftable';
        v9[2] = 0LL;
        _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
          v9 + 2,
          v7);
        v10 = (*(__int64 (__fastcall **)(wil::details **, GUID *, __int64))*v9)(
                v9,
                &GUID_189fdfb0_8b12_4d87_af0b_30194b800cd6,
                v3 + 424);
        (*((void (__fastcall **)(wil::details **))*v9 + 2))(v9);
        if ( v10 >= 0 )
          goto LABEL_10;
      }
      else
      {
        Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v11);
        v10 = -2147024882;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3FB,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
        (const char *)(unsigned int)v10);
LABEL_10:
      *(_QWORD *)(v3 + 440) = 0LL;
    }
  }
  a1 = *(_QWORD *)(v3 + 432);
  if ( a1 && ((*(_BYTE *)(v3 + 184) & 1) == 0 || v5) )
    SetEvent((HANDLE)a1);
LABEL_15:
  if ( (byte_1400C45C1 & 4) != 0 )
  {
    v13 = *(_QWORD *)(v3 + 432);
    LODWORD(v11) = *(_DWORD *)(v3 + 452);
    v12 = v3 - 8;
    v15 = &v12;
    v16 = 8LL;
    v17 = &v11;
    v18 = 4LL;
    v19 = &v13;
    v20 = 8LL;
    McGenEventWrite_EventWriteTransfer(a1, &AudioCore_CrossProcess_SignalPumpPassCompletion, a3, 4u, &v14);
  }
}
