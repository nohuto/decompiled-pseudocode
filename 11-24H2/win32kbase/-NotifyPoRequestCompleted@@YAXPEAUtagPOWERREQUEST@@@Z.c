/*
 * XREFs of ?NotifyPoRequestCompleted@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400E9BE0
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1400E96D0 (xxxUserPowerCalloutWorker.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1401AD8F0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall NotifyPoRequestCompleted(struct tagPOWERREQUEST *a1)
{
  int v1; // eax
  _DWORD InputBuffer[4]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_DWORD *)a1 + 22);
  if ( v1 != 32 )
  {
    InputBuffer[1] = 0;
    InputBuffer[0] = 96;
    InputBuffer[2] = v1;
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0);
    *((_DWORD *)a1 + 22) = 32;
  }
}
