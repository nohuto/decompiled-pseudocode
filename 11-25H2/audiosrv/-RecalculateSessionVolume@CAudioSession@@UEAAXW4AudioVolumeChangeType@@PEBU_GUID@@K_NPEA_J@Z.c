/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180064430
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180009FC0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _lambda_c1484885cbbce228ad1e61609886ff14_::_lambda_c1484885cbbce228ad1e61609886ff14_ @ 0x1800C2340 (_lambda_c1484885cbbce228ad1e61609886ff14_--_lambda_c1484885cbbce228ad1e61609886ff14_.c)
 *     _lambda_c1484885cbbce228ad1e61609886ff14_::operator() @ 0x1800C25D4 (_lambda_c1484885cbbce228ad1e61609886ff14_--operator().c)
 */

__int64 __fastcall CAudioSession::RecalculateSessionVolume(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v8 = a2;
  v5 = lambda_c1484885cbbce228ad1e61609886ff14_::_lambda_c1484885cbbce228ad1e61609886ff14_(
         (unsigned int)&v7,
         a1 - 8,
         (unsigned int)&v9,
         (unsigned int)&a5,
         (__int64)&v8,
         (__int64)&v10);
  return lambda_c1484885cbbce228ad1e61609886ff14_::operator()(v5);
}
