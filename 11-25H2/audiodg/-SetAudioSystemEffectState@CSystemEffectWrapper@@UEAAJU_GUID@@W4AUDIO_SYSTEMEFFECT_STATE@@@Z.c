/*
 * XREFs of ?SetAudioSystemEffectState@CSystemEffectWrapper@@UEAAJU_GUID@@W4AUDIO_SYSTEMEFFECT_STATE@@@Z @ 0x140075A30
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::SetAudioSystemEffectState(__int64 a1, _OWORD *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  _OWORD v5[3]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(__int64 **)(a1 + 184);
  v3 = *v2;
  v5[0] = *a2;
  return (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v3 + 40))(v2, v5);
}
