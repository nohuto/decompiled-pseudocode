/*
 * XREFs of ?APOProcess@CSystemEffectWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x14002BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSystemEffectWrapper::APOProcess(
        CSystemEffectWrapper *this,
        unsigned int a2,
        struct APO_CONNECTION_PROPERTY **a3)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, struct APO_CONNECTION_PROPERTY **))(**((_QWORD **)this + 20) + 24LL))(
    *((_QWORD *)this + 20),
    a2,
    a3);
}
