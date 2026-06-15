/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400413E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C78 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14005C52C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  int v6; // edi
  _DWORD *v7; // rbx

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = operator new(0x48uLL);
  v7[2] = 0;
  *((_OWORD *)v7 + 1) = 0LL;
  *((_OWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  *((_BYTE *)v7 + 56) = 0;
  *(_QWORD *)v7 = &ATL::CComObjectCached<ATL::CComClassFactory>::`vftable';
  if ( v7 )
  {
    *((_QWORD *)v7 + 8) = a1;
    v6 = ATL::CComSafeDeleteCriticalSection::Init((ATL::CComSafeDeleteCriticalSection *)(v7 + 4));
    if ( v6 < 0 || (v6 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v7)(v7, a2, a3)) != 0 )
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v7);
  }
  return (unsigned int)v6;
}
