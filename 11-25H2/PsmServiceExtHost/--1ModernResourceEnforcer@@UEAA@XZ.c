/*
 * XREFs of ??1ModernResourceEnforcer@@UEAA@XZ @ 0x180084BB8
 * Callers:
 *     ??_EModernResourceEnforcer@@UEAAPEAXI@Z @ 0x180084C00 (--_EModernResourceEnforcer@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ModernResourceEnforcer::~ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
    TpReleaseWork(v2);
  ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>((__int64 *)this + 36);
}
