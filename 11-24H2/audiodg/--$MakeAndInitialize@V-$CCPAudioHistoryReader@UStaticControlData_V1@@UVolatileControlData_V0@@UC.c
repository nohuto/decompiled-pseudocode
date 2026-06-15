/*
 * XREFs of ??$MakeAndInitialize@V?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UICPAudioHistoryReader@@AEA_KAEA_KAEAHAEA_KAEAPEAUVolatileControlData_V0@@AEAPEAUSharedMessageQueueItem@@AEAIAEAIAEAIAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUICPAudioHistoryReader@@AEA_K1AEAH1AEAPEAUVolatileControlData_V0@@AEAPEAUSharedMessageQueueItem@@AEAI551@Z @ 0x14007FA54
 * Callers:
 *     ?GetAudioHistoryReader@?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJ_K0HPEAPEAUICPAudioHistoryReader@@@Z @ 0x14007FD00 (-GetAudioHistoryReader@-$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1400116B4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005555C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@QEAAJ_K0H0PEAUVolatileControlData_V0@@PEAUSharedMessageQueueItem@@III0@Z @ 0x14008009C (-RuntimeClassInitialize@-$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>,ICPAudioHistoryReader,unsigned __int64 &,unsigned __int64 &,int &,unsigned __int64 &,VolatileControlData_V0 * &,SharedMessageQueueItem * &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        __int64 *a11)
{
  char *v15; // rax
  char *v16; // rdi
  int v17; // ebx
  __int64 v18; // rax
  char *v20; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = (char *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  v20 = v15;
  if ( v15 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)v15);
    *(_QWORD *)v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICPAudioHistoryReader>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v16 = &CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v16 + 16), 0, 0);
    *((_QWORD *)v16 + 7) = 0LL;
    *((_QWORD *)v16 + 8) = 0LL;
    *((_QWORD *)v16 + 9) = 0LL;
    *((_DWORD *)v16 + 20) = -1;
    *((_DWORD *)v16 + 21) = -1;
    *((_DWORD *)v16 + 22) = 0;
    *((_DWORD *)v16 + 23) = 0;
    *((_DWORD *)v16 + 24) = 0;
    *((_DWORD *)v16 + 25) = 0;
    *((_QWORD *)v16 + 13) = 0LL;
    v20 = 0LL;
    v17 = CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::RuntimeClassInitialize(
            (_DWORD)v16,
            *a2,
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            *a9,
            *a10,
            *a11);
    v18 = *(_QWORD *)v16;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(char *, GUID *, _QWORD *))v18)(
              v16,
              &GUID_2f112202_919d_48ae_b337_2b9271fe98aa,
              a1);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    else
    {
      (*(void (__fastcall **)(char *))(v18 + 16))(v16);
    }
  }
  else
  {
    v17 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>((void **)&v20);
  return (unsigned int)v17;
}
