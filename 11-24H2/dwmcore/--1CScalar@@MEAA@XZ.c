/*
 * XREFs of ??1CScalar@@MEAA@XZ @ 0x1802A3430
 * Callers:
 *     ??_ECScalar@@MEAAPEAXI@Z @ 0x180275C90 (--_ECScalar@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x1802A3570 (-UpdateAnimateValues@CScalar@@UEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScalar::~CScalar(CScalar *this)
{
  CScalar *v2; // rcx
  bool v3; // zf
  unsigned int i; // esi
  __int64 v5; // rcx

  *(_QWORD *)this = &CScalar::`vftable'{for `CResource'};
  v2 = (CScalar *)((char *)this + 72);
  v3 = *((_BYTE *)this + 112) == 0;
  *(_QWORD *)v2 = &CScalar::`vftable'{for `IAnimationResource'};
  if ( !v3 )
    CScalar::UpdateAnimateValues(v2);
  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 10) + 16LL * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)this + 26) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 80, 0x10u);
  CBaseAnimation::~CBaseAnimation(this);
}
