/*
 * XREFs of ExpUpdateTimerConfiguration @ 0x1402772AC
 * Callers:
 *     ExpUpdateTimerResolution @ 0x140276C80 (ExpUpdateTimerResolution.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall ExpUpdateTimerConfiguration(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h]
  _DWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v14[33]; // [rsp+48h] [rbp-B8h] BYREF

  memset_0(v14, 0, 0x100uLL);
  v12 = 0LL;
  v13[1] = 0;
  v13[0] = 2097153;
  memset_0(v14, 0, 0x100uLL);
  v6 = *((_DWORD *)KiGlobalState + (unsigned int)KiClockTimerOwner) & 0x3F;
  v7 = *((_DWORD *)KiGlobalState + (unsigned int)KiClockTimerOwner) >> 6;
  if ( (_DWORD)v7 )
  {
    if ( HIWORD(v13[0]) <= (unsigned int)v7 )
      goto LABEL_3;
    LOWORD(v13[0]) = v7 + 1;
  }
  v8 = (unsigned int)v7;
  v9 = v14[v7];
  _bittestandset64(&v9, v6);
  v14[v8] = v9;
LABEL_3:
  v11[0] = a1;
  v11[1] = a2;
  v11[2] = a3;
  KeGenericProcessorCallback(v13, ExpUpdateTimerConfigurationWorker, v11, 1LL);
  return (unsigned int)v12;
}
