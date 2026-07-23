/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x14041131C
 * Callers:
 *     ExpUpdateTimerResolution @ 0x1404110E0 (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[33]; // [rsp+48h] [rbp-B8h] BYREF

  memset_0(v14, 0, 0x100uLL);
  v12 = 0LL;
  v13 = 2097153LL;
  memset_0(v14, 0, 0x100uLL);
  v6 = *((_DWORD *)KiGlobalState + (unsigned int)KiClockTimerOwner) & 0x3F;
  v7 = *((_DWORD *)KiGlobalState + (unsigned int)KiClockTimerOwner) >> 6;
  if ( (_DWORD)v7 )
  {
    if ( WORD1(v13) <= (unsigned int)v7 )
      goto LABEL_3;
    LOWORD(v13) = v7 + 1;
  }
  v8 = (unsigned int)v7;
  v9 = v14[v7];
  _bittestandset64(&v9, v6);
  v14[v8] = v9;
LABEL_3:
  v11[0] = a1;
  v11[1] = a2;
  v11[2] = a3;
  KeGenericProcessorCallback(&v13, ExpUpdateTimerConfigurationWorker, (__int64)v11, 1);
  return (unsigned int)v12;
}
