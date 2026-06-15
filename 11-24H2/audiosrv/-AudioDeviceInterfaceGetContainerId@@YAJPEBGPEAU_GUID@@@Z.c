/*
 * XREFs of ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x1800E93FC
 * Callers:
 *     s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800E9AE0 (s_ccCreateHandsfreeHidFileFromAudioId.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioDeviceInterfaceGetContainerId(const unsigned __int16 *a1, struct _GUID *a2)
{
  int ObjectProperties; // ebx

  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  if ( ObjectProperties >= 0 )
    return (unsigned int)-2147024894;
  return (unsigned int)ObjectProperties;
}
