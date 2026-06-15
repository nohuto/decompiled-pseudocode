/*
 * XREFs of ?HandleNotification@CSystemEffectWrapper@@UEAAXPEAUAPO_NOTIFICATION@@@Z @ 0x1400395B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSystemEffectWrapper::HandleNotification(CSystemEffectWrapper *this, struct APO_NOTIFICATION *a2)
{
  (*(void (__fastcall **)(_QWORD, struct APO_NOTIFICATION *))(**((_QWORD **)this + 22) + 32LL))(
    *((_QWORD *)this + 22),
    a2);
}
