/*
 * XREFs of ?DoesWindowQualifyAsIntermediateWindow@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x1800A8C74
 * Callers:
 *     ?ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z @ 0x18006562C (-ShouldInclude@CapturedWindowRepresentation@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z @ 0x1800AA968 (-LookForSecondaryWindows@CapturedWindowRepresentation@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CapturedWindowRepresentation::DoesWindowQualifyAsIntermediateWindow(
        CapturedWindowRepresentation *this,
        struct CWindowData *a2)
{
  char result; // al

  result = 0;
  if ( *((int *)a2 + 29) < 0 || *((char *)a2 + 120) < 0 )
    return 1;
  return result;
}
