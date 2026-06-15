/*
 * XREFs of ?GetApoNotificationRegistrationInfo@CSystemEffectWrapper@@UEAAJPEAPEAUAPO_NOTIFICATION_DESCRIPTOR@@PEAK@Z @ 0x140045330
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140072B6C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetApoNotificationRegistrationInfo(
        CSystemEffectWrapper *this,
        struct APO_NOTIFICATION_DESCRIPTOR **a2,
        unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct APO_NOTIFICATION_DESCRIPTOR **, unsigned int *))(**((_QWORD **)this + 22)
                                                                                                  + 24LL))(
           *((_QWORD *)this + 22),
           a2,
           a3);
}
