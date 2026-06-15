/*
 * XREFs of ??$try_com_query_to@UIAudioSessionDuckingControl@@AEAPEAUIAudioSessionInfo@@@wil@@YA_NAEAPEAUIAudioSessionInfo@@PEAPEAUIAudioSessionDuckingControl@@@Z @ 0x180019588
 * Callers:
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x180013314 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_6.c)
 *     _lambda_a3aac110b84197fe884df272735eece2_::operator() @ 0x18002F3C8 (_lambda_a3aac110b84197fe884df272735eece2_--operator().c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall wil::try_com_query_to<IAudioSessionDuckingControl,IAudioSessionInfo * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, a2) >= 0;
}
