/*
 * XREFs of EngDeleteClip @ 0x1400F83B0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1400F8150 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1400F82C0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x1400F8300 (EngCreateClip.c)
 * Callees:
 *     EngFreeMem @ 0x14001A6C0 (EngFreeMem.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  if ( pco )
  {
    RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&pco[2].rclBounds.top);
    EngFreeMem(pco);
  }
}
