/*
 * XREFs of Register_UnmapSecureMmio @ 0x1400492C0
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A0C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall Register_UnmapSecureMmio(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 128);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  v4 = 0LL;
  v5 = 0LL;
  v7 = 9LL;
  v6 = v1;
  return SecureChannel_SendRequestSynchronously(v2, (GUID *)&v4, 40, 0LL, 0);
}
