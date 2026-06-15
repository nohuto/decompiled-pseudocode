/*
 * XREFs of ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x1800A44A4
 * Callers:
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x1800916C8 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z @ 0x18007F2D0 (-sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z.c)
 */

_BOOL8 __fastcall sndRegQueryUserValue(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        DWORD a3,
        unsigned __int16 *a4)
{
  const unsigned __int16 *v7; // r8
  BOOL Value; // ebx
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  hKey = 0LL;
  *a4 = 0;
  if ( RegOpenCurrentUser(1u, &hKey) )
    return 0LL;
  Value = sndRegQueryValue(hKey, a1, v7, a3, a4);
  RegCloseKey(hKey);
  return Value;
}
