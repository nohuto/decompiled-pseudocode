/*
 * XREFs of IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x1800A72A4
 * Callers:
 *     ?OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z @ 0x180106670 (-OnDeviceFormatChanged@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800A7A46 (ApiSetQueryApiSetPresence_0.c)
 */

char IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1801DB040 == 1 )
    return 1;
  if ( dword_1801DB040 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"RT", &v1) < 0 )
    return 0;
  result = v1;
  dword_1801DB040 = 2 - (v1 != 0);
  return result;
}
