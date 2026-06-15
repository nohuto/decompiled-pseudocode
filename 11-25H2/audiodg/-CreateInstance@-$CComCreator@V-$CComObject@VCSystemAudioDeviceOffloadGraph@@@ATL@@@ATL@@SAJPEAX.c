/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140072E24
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140072D20 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@AT.c)
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140054D70 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ?SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x14005E0D0 (-SafeIncrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x1400726E4 (--0-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffloadGraph>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  CSystemAudioDeviceOffloadGraph *v6; // rax
  volatile int *v7; // rdi
  int v8; // eax
  unsigned int v9; // esi
  volatile int *v12; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v9 = -2147024882;
    v6 = (CSystemAudioDeviceOffloadGraph *)operator new(0x150uLL);
    v7 = (volatile int *)ATL::CComObject<CSystemAudioDeviceOffloadGraph>::CComObject<CSystemAudioDeviceOffloadGraph>(v6);
    v12 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v9 = -2147024882;
    v7 = v12;
  }
  if ( v7 )
  {
    ATL::SafeIncrementReferenceMultiThread(v7 + 62);
    v8 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v7 + 64));
    v9 = 0;
    if ( v8 < 0 )
      v9 = v8;
    ATL::SafeDecrementReferenceMultiThread(v7 + 62);
    if ( v9 || (v9 = (**(__int64 (__fastcall ***)(volatile int *, __int64, _QWORD *))v7)(v7, v4, v3)) != 0 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)v7 + 144LL))(v7, 1LL);
  }
  return v9;
}
