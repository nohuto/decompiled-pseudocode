/*
 * XREFs of ?LockForProcess@CSystemEffectWrapper@@UEAAJIPEAPEAUAPO_CONNECTION_DESCRIPTOR@@I0@Z @ 0x14003DB10
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::LockForProcess(
        CSystemEffectWrapper *this,
        unsigned int a2,
        struct APO_CONNECTION_DESCRIPTOR **a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct APO_CONNECTION_DESCRIPTOR **))(**((_QWORD **)this + 22)
                                                                                          + 24LL))(
             *((_QWORD *)this + 22),
             a2,
             a3);
  if ( (int)result >= 0 )
    _InterlockedExchange((volatile __int32 *)this + 66, 1);
  return result;
}
