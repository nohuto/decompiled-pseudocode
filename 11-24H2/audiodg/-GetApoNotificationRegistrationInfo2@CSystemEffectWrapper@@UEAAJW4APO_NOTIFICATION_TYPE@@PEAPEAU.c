/*
 * XREFs of ?GetApoNotificationRegistrationInfo2@CSystemEffectWrapper@@UEAAJW4APO_NOTIFICATION_TYPE@@PEAPEAUAPO_NOTIFICATION_DESCRIPTOR@@PEAK@Z @ 0x14004E660
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x140072B6C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::GetApoNotificationRegistrationInfo2(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 184) + 40LL))(*(_QWORD *)(a1 + 184));
}
