/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x18009B420
 * Callers:
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x1801983B0 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBA@EAAKXZ @ 0x1801983C0 (-Release@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WBI@EAAKXZ @ 0x1801983D0 (-Release@MouseProcessor@@WBI@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCA@EAAKXZ @ 0x1801983E0 (-Release@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?Release@MouseProcessor@@WCI@EAAKXZ @ 0x1801983F0 (-Release@MouseProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  return InputContext::Release((GazeProcessor *)((char *)this + 40));
}
