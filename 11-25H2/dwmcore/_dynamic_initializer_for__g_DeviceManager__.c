/*
 * XREFs of _dynamic_initializer_for__g_DeviceManager__ @ 0x1800059A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__g_DeviceManager__()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  InitializeCriticalSection(&CriticalSection);
  qword_180406B38 = 0LL;
  xmmword_180406B40 = 0LL;
  byte_180406B50 = 0;
  v1 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v1, 0LL);
  CDeviceManager::s_bXbox = v1 == 5;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_DeviceManager__);
}
