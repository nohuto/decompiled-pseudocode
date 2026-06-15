/*
 * XREFs of ??$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x1800B4E0C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_b344cb29cbcca53182114ed25d377543__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x1800B51C0 (std--_Func_impl_no_alloc__lambda_b344cb29cbcca53182114ed25d377543__long_IAudioProce_ea_1800B51C0.c)
 *     std::_Func_impl_no_alloc__lambda_ee167359dc0369243a794f18fc9c9513__long_IAudioProcessingObject____GUID_unsigned_int_::_Do_call @ 0x180139940 (std--_Func_impl_no_alloc__lambda_ee167359dc0369243a794f18fc9c9513__long_IAudioProce_ea_180139940.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::try_com_query_to<IAudioSystemEffects3,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17, a2) >= 0;
}
