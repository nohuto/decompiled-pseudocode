/*
 * XREFs of ??1?$CAutoPtr@VCConstraintModel@@@ATL@@QEAA@XZ @ 0x1800E654C
 * Callers:
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x180166117 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAutoPtr<CConstraintModel>::~CAutoPtr<CConstraintModel>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (**v2)(v2, 1LL);
  *a1 = 0LL;
  return result;
}
