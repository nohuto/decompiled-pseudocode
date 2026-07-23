/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x140A4F9A0
 * Callers:
 *     PpmMediaBufferingWorker @ 0x1402ADB70 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPdcNotifyMediaBufferingUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E67698;
  if ( qword_140E67698 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
