/*
 * XREFs of ?GetHeadTracking@CSystemEffectWrapper@@UEAAJPEAH@Z @ 0x140075470
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetHeadTracking(CSystemEffectWrapper *this, int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 24) + 40LL))(*((_QWORD *)this + 24), a2);
}
