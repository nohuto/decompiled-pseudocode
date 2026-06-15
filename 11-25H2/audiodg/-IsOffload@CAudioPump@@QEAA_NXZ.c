/*
 * XREFs of ?IsOffload@CAudioPump@@QEAA_NXZ @ 0x140021810
 * Callers:
 *     ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140021520 (-EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z.c)
 *     ?Pause@CAudioPump@@UEAAJXZ @ 0x1400219D0 (-Pause@CAudioPump@@UEAAJXZ.c)
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140021AF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x140027BE0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x14002C010 (-Resume@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAudioPump::IsOffload(__int64 (__fastcall **this)(CAudioPump *this))
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 4680) )
  {
    if ( CAudioPump::OutputPumpWorkRoutine == this[27] )
      return 1;
  }
  return result;
}
