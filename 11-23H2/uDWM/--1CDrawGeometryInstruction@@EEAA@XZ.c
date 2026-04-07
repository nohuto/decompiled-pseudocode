/*
 * XREFs of ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x1800508AC
 * Callers:
 *     ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x180050850 (--_ECDrawGeometryInstruction@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawGeometryInstruction::~CDrawGeometryInstruction(CDrawGeometryInstruction *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CDrawGeometryInstruction::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v2)(v2, 1LL);
  v3 = *((_QWORD *)this + 2);
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v3)(v3, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
