/*
 * XREFs of WPP_RECORDER_SF__guid_q @ 0x1400DCCBC
 * Callers:
 *     ?FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z @ 0x140135A50 (-FindModuleByGuidLocked@KLoader@@AEAAPEAUKModule@@AEBU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF__guid_q(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ((void (__fastcall *)(_QWORD, __int64, const struct _GUID *, __int64, __int64, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      43LL,
      &WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids,
      24LL,
      a6,
      16LL,
      va,
      8LL,
      0LL);
  LOWORD(v8) = 24;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids, v8, a6, 16LL, va, 8LL, 0LL);
}
