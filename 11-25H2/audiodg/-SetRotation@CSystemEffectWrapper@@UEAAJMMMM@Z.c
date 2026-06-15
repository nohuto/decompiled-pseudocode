/*
 * XREFs of ?SetRotation@CSystemEffectWrapper@@UEAAJMMMM@Z @ 0x140075B80
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetRotation(CSystemEffectWrapper *this, float a2, float a3, float a4)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 48LL))(*((_QWORD *)this + 24));
}
