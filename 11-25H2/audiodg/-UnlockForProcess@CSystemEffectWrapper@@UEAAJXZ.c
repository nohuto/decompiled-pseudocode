/*
 * XREFs of ?UnlockForProcess@CSystemEffectWrapper@@UEAAJXZ @ 0x140041630
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::UnlockForProcess(CSystemEffectWrapper *this)
{
  while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 66, 0, 1) != 1 )
    Sleep(1u);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 32LL))(*((_QWORD *)this + 22));
}
