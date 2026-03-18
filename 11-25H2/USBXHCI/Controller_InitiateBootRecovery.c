/*
 * XREFs of Controller_InitiateBootRecovery @ 0x14003CA68
 * Callers:
 *     Controller_ReportFatalErrorEx @ 0x140042368 (Controller_ReportFatalErrorEx.c)
 * Callees:
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_InitiateBootRecovery(_QWORD *a1, char a2)
{
  ULONG_PTR v2; // rax

  if ( (a2 & 0x1C) != 0 )
  {
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(WdfDriverGlobals, *a1);
    KeBugCheckEx(0x144u, 2uLL, v2, 3uLL, 0LL);
  }
  if ( (a2 & 1) != 0 )
  {
    _InterlockedIncrement(&dword_14006B9D8);
    Controller_InternalReset();
    _InterlockedDecrement(&dword_14006B9D8);
  }
  else if ( (a2 & 2) != 0 )
  {
    ((void (__fastcall *)(__int64, _QWORD))qword_14006BD90)(UcxDriverGlobals, a1[1]);
  }
}
