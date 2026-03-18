/*
 * XREFs of ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x140100040
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400FFE44 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(
        QueryFontTreeRequest *this,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int *v3; // r9

  v3 = (unsigned int *)*((_QWORD *)this + 11);
  if ( ((unsigned __int8)v3 & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  *a2 = *v3;
  *a3 = v3[3];
  return 1;
}
