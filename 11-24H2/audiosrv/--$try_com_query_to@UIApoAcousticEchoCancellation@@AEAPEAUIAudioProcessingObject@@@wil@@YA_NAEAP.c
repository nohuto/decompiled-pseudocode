/*
 * XREFs of ??$try_com_query_to@UIApoAcousticEchoCancellation@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAcousticEchoCancellation@@@Z @ 0x18005B8B0
 * Callers:
 *     _lambda_a8a3ec141be49a0429a3d190c13e56dc_::operator() @ 0x180132330 (_lambda_a8a3ec141be49a0429a3d190c13e56dc_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::try_com_query_to<IApoAcousticEchoCancellation,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_25385759_3236_4101_a943_25693dfb5d2d, a2) >= 0;
}
