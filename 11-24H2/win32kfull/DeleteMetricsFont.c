/*
 * XREFs of DeleteMetricsFont @ 0x1401CD284
 * Callers:
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     ?ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x140287260 (-ClearDpiServerInfo@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     ClearDpiMetrics @ 0x140287298 (ClearDpiMetrics.c)
 *     EnsureDpiServerInfoForDpiOld @ 0x1402875D0 (EnsureDpiServerInfoForDpiOld.c)
 * Callees:
 *     GreMarkDeletableFont @ 0x1401CDE34 (GreMarkDeletableFont.c)
 */

__int64 __fastcall DeleteMetricsFont(struct HLFONT__ *a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    GreMarkDeletableFont(a1);
    return GreDeleteObject(a1);
  }
  return result;
}
