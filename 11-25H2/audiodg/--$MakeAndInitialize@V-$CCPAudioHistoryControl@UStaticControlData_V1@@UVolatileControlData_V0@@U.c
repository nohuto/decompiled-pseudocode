/*
 * XREFs of ??$MakeAndInitialize@V?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryControl@@AEAPEAUICrossProcessMemory@@@Z @ 0x140081710
 * Callers:
 *     ??$CreateAudioHistoryControlHelper@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@YAJPEAPEAUICPAudioHistoryControl@@PEAUICrossProcessMemory@@@Z @ 0x1400816F0 (--$CreateAudioHistoryControlHelper@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140011684 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAAJPEAUICrossProcessMemory@@@Z @ 0x140081D74 (-RuntimeClassInitialize@-$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>,ICPAudioHistoryControl,ICrossProcessMemory * &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  __int64 v7; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v9 = v4;
  if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)v4);
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICPAudioHistoryControl>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
    v5[2] = 0LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    *((_DWORD *)v5 + 11) = 0;
    *((_DWORD *)v5 + 12) = 0;
    *((_DWORD *)v5 + 13) = 0;
    v5[7] = 0LL;
    v10 = v5;
    v9 = 0LL;
    v6 = CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::RuntimeClassInitialize(
           v5,
           *a2);
    v7 = *v5;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))v7)(
             v5,
             &GUID_e14eb825_78cf_46fa_9c77_3b7330248ba0,
             a1);
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v7 + 16))(v5);
    }
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v9);
  return (unsigned int)v6;
}
