/*
 * XREFs of ??1CRecalcProp@@AEAA@XZ @ 0x1C005CFCC
 * Callers:
 *     ??_GCRecalcProp@@AEAAPEAXI@Z @ 0x1C005CF9C (--_GCRecalcProp@@AEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRecalcProp::~CRecalcProp(CRecalcProp *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)this = &CRecalcProp::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 4);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 5);
  if ( v3 )
    (**v3)(v3, 1LL);
}
