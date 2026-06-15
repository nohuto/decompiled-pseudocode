/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AE64
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamInstance@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamInstance@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003AE50 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamInstance@@@ATL@@@ATL@@V-$CCo.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@_JKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@11U_GUID@@@Z @ 0x14006E3D8 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@_JKW4SYSTEM_AUDIO_STRE.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0CStreamInstance@@QEAA@XZ @ 0x14003AF80 (--0CStreamInstance@@QEAA@XZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140054D70 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005E0D0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CStreamInstance>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v5; // esi
  volatile int *v6; // rdi
  int v7; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v5 = -2147024882;
  v6 = (volatile int *)operator new(0x118uLL);
  CStreamInstance::CStreamInstance((CStreamInstance *)v6);
  *(_QWORD *)v6 = &ATL::CComObject<CStreamInstance>::`vftable'{for `IStreamInstanceInternal'};
  *((_QWORD *)v6 + 1) = &ATL::CComObject<CStreamInstance>::`vftable'{for `IStreamInstance'};
  *((_QWORD *)v6 + 2) = &ATL::CComObject<CStreamInstance>::`vftable'{for `IFastRundown'};
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  if ( v6 )
  {
    ATL::SafeIncrementReferenceMultiThread(v6 + 6);
    v7 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v6 + 8));
    v5 = 0;
    if ( v7 < 0 )
      v5 = v7;
    ATL::SafeDecrementReferenceMultiThread(v6 + 6);
    if ( v5 || (v5 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v6)((void *)v6, a2, a3)) != 0 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)v6 + 160LL))(v6, 1LL);
  }
  return v5;
}
