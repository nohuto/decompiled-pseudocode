/*
 * XREFs of IsSkipAPOFailureCheck @ 0x14003692C
 * Callers:
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x140036540 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 * Callees:
 *     <none>
 */

char IsSkipAPOFailureCheck()
{
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  if ( !byte_1400C5600 )
  {
    pvData = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Policy",
            L"SkipAPOFailureCheck",
            0x10u,
            0LL,
            &pvData,
            &pcbData) )
      byte_1400C56B0 = pvData != 0;
    byte_1400C5600 = 1;
  }
  return byte_1400C56B0;
}
