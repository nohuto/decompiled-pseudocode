/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14006F4A0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14006F360 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C78 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005DFE0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x14006EEA0 (--0CSystemAudioDeviceExclusive@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceExclusive>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  volatile int *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  volatile int *v11; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v8 = -2147024882;
    v6 = (volatile int *)operator new(0xF8uLL);
    CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive((CSystemAudioDeviceExclusive *)v6);
    *(_QWORD *)v6 = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioDeviceGraph'};
    *((_QWORD *)v6 + 1) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioGraphCallback'};
    *((_QWORD *)v6 + 2) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `IAudioProtectedOutput'};
    *((_QWORD *)v6 + 3) = &ATL::CComObject<CSystemAudioDeviceExclusive>::`vftable'{for `ISubmix'};
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    v11 = v6;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v8 = -2147024882;
    v6 = v11;
  }
  if ( v6 )
  {
    ATL::SafeIncrementReferenceMultiThread(v6 + 38);
    v7 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v6 + 40));
    v8 = 0;
    if ( v7 < 0 )
      v8 = v7;
    ATL::SafeDecrementReferenceMultiThread(v6 + 38);
    if ( v8 || (v8 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v6)((void *)v6, v4, v3)) != 0 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)v6 + 144LL))(v6, 1LL);
  }
  return v8;
}
