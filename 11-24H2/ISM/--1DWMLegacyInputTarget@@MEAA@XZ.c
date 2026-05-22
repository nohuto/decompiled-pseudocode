/*
 * XREFs of ??1DWMLegacyInputTarget@@MEAA@XZ @ 0x18006F3F0
 * Callers:
 *     ??_GDWMLegacyInputTarget@@MEAAPEAXI@Z @ 0x18006F3A0 (--_GDWMLegacyInputTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DWMLegacyInputTarget::~DWMLegacyInputTarget(DWMLegacyInputTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 2) = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 3) = &DWMLegacyInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)this + 4) = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
}
