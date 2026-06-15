/*
 * XREFs of ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x1800488A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMuteControlBase::GetMute(CMuteControlBase *this, int *a2)
{
  if ( a2 )
  {
    *a2 = *((_DWORD *)this + 6);
    return 0LL;
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::GetMute", 253, -2147467261);
    return 2147500035LL;
  }
}
