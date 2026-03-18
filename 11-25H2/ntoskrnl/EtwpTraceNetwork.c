/*
 * XREFs of EtwpTraceNetwork @ 0x14044AFB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     EtwpNetProvTraceNetwork @ 0x14044B038 (EtwpNetProvTraceNetwork.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceNetwork(__int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a2;
  UserData.Size = a3;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 0x10000) != 0 )
    EtwpNetProvTraceNetwork(&UserData);
  return EtwTraceKernelEvent((int)&UserData, 1, 0x10000u, a1, 5249026);
}
