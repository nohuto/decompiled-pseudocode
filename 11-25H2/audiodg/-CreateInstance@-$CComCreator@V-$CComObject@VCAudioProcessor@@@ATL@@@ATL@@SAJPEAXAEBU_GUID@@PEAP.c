/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioProcessor@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003D13C
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F470 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D010 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0CAudioProcessor@@QEAA@XZ @ 0x14003D26C (--0CAudioProcessor@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140054D70 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005E0D0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioProcessor>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v4; // esi
  void *v5; // rdx
  int v6; // r8d
  CAudioProcessor *v7; // rax
  CAudioProcessor *v8; // rdi
  int v9; // eax
  int v10; // edx

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = (void *)AERTGetDLLRTHeap();
  v7 = (CAudioProcessor *)AERTAllocate(0x340uLL, v5, v6);
  v8 = v7;
  if ( v7 )
  {
    CAudioProcessor::CAudioProcessor(v7);
    *(_QWORD *)v8 = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessor'};
    *((_QWORD *)v8 + 1) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioProcessRT'};
    *((_QWORD *)v8 + 2) = &ATL::CComObject<CAudioProcessor>::`vftable'{for `IAudioLogging'};
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  }
  if ( v8 )
  {
    ATL::SafeIncrementReferenceMultiThread((volatile int *)v8 + 6);
    v9 = ATL::CComSafeDeleteCriticalSection::Init((CAudioProcessor *)((char *)v8 + 32));
    v10 = 0;
    if ( v9 < 0 )
      v10 = v9;
    v4 = 0;
    if ( v10 < 0 )
      v4 = v10;
    ATL::SafeDecrementReferenceMultiThread((volatile int *)v8 + 6);
    if ( v4
      || (v4 = (**(__int64 (__fastcall ***)(CAudioProcessor *, GUID *, _QWORD *))v8)(
                 v8,
                 &GUID_cfbc31a5_5756_48a3_aa45_b6b6dd4c363e,
                 a3)) != 0 )
    {
      (*(void (__fastcall **)(CAudioProcessor *, __int64))(*(_QWORD *)v8 + 136LL))(v8, 1LL);
    }
  }
  return v4;
}
