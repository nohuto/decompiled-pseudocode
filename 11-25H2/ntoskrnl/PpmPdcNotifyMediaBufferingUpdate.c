/*
 * XREFs of PpmPdcNotifyMediaBufferingUpdate @ 0x140A548F8
 * Callers:
 *     PpmMediaBufferingWorker @ 0x140203C20 (PpmMediaBufferingWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmPdcNotifyMediaBufferingUpdate(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E67248;
  if ( qword_140E67248 )
    return guard_dispatch_icall_no_overrides(a1);
  return result;
}
