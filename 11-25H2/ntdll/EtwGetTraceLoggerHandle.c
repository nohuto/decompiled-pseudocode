/*
 * XREFs of EtwGetTraceLoggerHandle @ 0x1800F3700
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     EtwpGetMaxLogger @ 0x1800F3808 (EtwpGetMaxLogger.c)
 */

__int64 __fastcall EtwGetTraceLoggerHandle(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  if ( !a1 )
  {
    v3 = 87LL;
LABEL_6:
    RtlSetLastWin32Error(v3);
    return -1LL;
  }
  if ( *(_DWORD *)a1 < 0x30u )
  {
    v3 = 24LL;
    goto LABEL_6;
  }
  v1 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int16)v1 >= (unsigned int)EtwpGetMaxLogger() && (_WORD)v1 != 0xFFFF )
  {
    v1 = -1LL;
    RtlSetLastWin32Error(6LL);
  }
  return v1;
}
