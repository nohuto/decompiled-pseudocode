/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1400F82C0
 * Callers:
 *     <none>
 * Callees:
 *     EngUnlockSurface @ 0x140035B00 (EngUnlockSurface.c)
 *     EngDeleteClip @ 0x1400F83B0 (EngDeleteClip.c)
 *     EngDeleteSurface @ 0x1400F8410 (EngDeleteSurface.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  EngDeleteClip(*((CLIPOBJ **)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  EngDeleteSurface(*((HSURF *)a1 + 3));
}
