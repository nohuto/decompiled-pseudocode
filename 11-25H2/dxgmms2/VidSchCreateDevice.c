/*
 * XREFs of VidSchCreateDevice @ 0x1400D8060
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiCreateDeviceInternal @ 0x1400D80E0 (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateDevice(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx

  *a3 = 0LL;
  if ( a1 && a2 )
    return VidSchiCreateDeviceInternal(*(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(a1 + 16) + 744LL));
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 3592;
  DxgkLogInternalTriageEvent(v4, 0x40000LL);
  return 3221225485LL;
}
