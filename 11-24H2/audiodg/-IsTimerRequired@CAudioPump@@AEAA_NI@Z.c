/*
 * XREFs of ?IsTimerRequired@CAudioPump@@AEAA_NI@Z @ 0x140043EA4
 * Callers:
 *     ?Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEventManager@@@Z @ 0x1400278E0 (-Initialize@CAudioPump@@UEAAJIKPEAUIAudioProcessRT@@PEAUIAudioEndpointRT@@PEAUICrossProcessEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall CAudioPump::IsTimerRequired(CAudioPump *this, char a2)
{
  bool v2; // bl
  bool v3; // cl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF
  DWORD pdwType; // [rsp+68h] [rbp+20h] BYREF

  v2 = 1;
  if ( *((_QWORD *)this + 39) )
  {
    if ( *((_BYTE *)this + 4680) )
      v2 = *((_QWORD *)this + 27) != (_QWORD)CAudioPump::OutputPumpWorkRoutine;
    v3 = 0;
    pcbData = 4;
    if ( (a2 & 8) == 0 )
      v3 = v2;
    pdwType = 0;
    pvData = 0;
    v2 = v3;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"DisablePumpBackupTimer",
            0x10u,
            &pdwType,
            &pvData,
            &pcbData) )
      return pvData == 0;
  }
  return v2;
}
