/*
 * XREFs of ?GetRegistrationProperties@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x1400403C0
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140072B6C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetRegistrationProperties(
        CSystemEffectWrapper *this,
        struct APO_REG_PROPERTIES **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct APO_REG_PROPERTIES **))(**((_QWORD **)this + 22) + 40LL))(
           *((_QWORD *)this + 22),
           a2);
}
