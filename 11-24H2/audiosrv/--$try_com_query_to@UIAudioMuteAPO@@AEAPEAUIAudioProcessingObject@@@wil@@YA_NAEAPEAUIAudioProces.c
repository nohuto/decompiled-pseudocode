/*
 * XREFs of ??$try_com_query_to@UIAudioMuteAPO@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioMuteAPO@@@Z @ 0x180059A10
 * Callers:
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18007D590 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::try_com_query_to<IAudioMuteAPO,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd, a2) >= 0;
}
