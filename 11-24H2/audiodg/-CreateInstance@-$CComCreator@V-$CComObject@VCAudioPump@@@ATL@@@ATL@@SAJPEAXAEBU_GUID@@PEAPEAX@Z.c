/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioPump@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004194C
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F3D0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C78 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??0CAudioPump@@QEAA@XZ @ 0x1400576D4 (--0CAudioPump@@QEAA@XZ.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005DFE0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAudioPump>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // esi
  void *v5; // rdx
  int v6; // r8d
  CAudioPump *v7; // rax
  CAudioPump *v8; // rdi
  int v9; // eax
  int v10; // edx

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = -2147024882;
  v5 = (void *)AERTGetDLLRTHeap();
  v7 = (CAudioPump *)AERTAllocate(0x12A8uLL, v5, v6);
  v8 = v7;
  if ( v7 )
  {
    CAudioPump::CAudioPump(v7);
    *(_QWORD *)v8 = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPump'};
    *((_QWORD *)v8 + 1) = &ATL::CComObject<CAudioPump>::`vftable'{for `IAudioPumpLogging'};
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  }
  if ( v8 )
  {
    ATL::SafeIncrementReferenceMultiThread((volatile int *)v8 + 4);
    v9 = ATL::CComSafeDeleteCriticalSection::Init((CAudioPump *)((char *)v8 + 24));
    v10 = 0;
    if ( v9 < 0 )
      v10 = v9;
    v4 = 0;
    if ( v10 < 0 )
      v4 = v10;
    ATL::SafeDecrementReferenceMultiThread((volatile int *)v8 + 4);
    if ( v4
      || (v4 = (**(__int64 (__fastcall ***)(CAudioPump *, GUID *, _QWORD *))v8)(
                 v8,
                 &GUID_2823d585_8d44_4969_8653_fca6e4afab6b,
                 a3)) != 0 )
    {
      (*(void (__fastcall **)(CAudioPump *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
    }
  }
  return v4;
}
