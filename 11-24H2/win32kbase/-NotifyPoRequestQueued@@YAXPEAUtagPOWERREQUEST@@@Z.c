/*
 * XREFs of ?NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400EA884
 * Callers:
 *     QueuePowerRequest @ 0x1400E98F0 (QueuePowerRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall NotifyPoRequestQueued(struct tagPOWERREQUEST *a1)
{
  __int64 v2; // rax
  _DWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]

  InputBuffer[1] = 0;
  v2 = *((_QWORD *)a1 + 10);
  InputBuffer[0] = 95;
  if ( v2 )
    v4 = *(_DWORD *)(v2 + 16);
  else
    v4 = *(_DWORD *)(W32GetUserSessionState(a1) + 3040) + 17;
  if ( ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0xCu, 0LL, 0) >= 0 )
    *((_DWORD *)a1 + 22) = v4;
}
