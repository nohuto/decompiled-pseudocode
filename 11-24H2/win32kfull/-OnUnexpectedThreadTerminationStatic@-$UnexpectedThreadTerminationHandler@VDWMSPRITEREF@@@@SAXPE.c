/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@SAXPEAX@Z @ 0x140320AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401A17FC (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 */

struct DWMSPRITE *__fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic(
        DWMSPRITEREF *a1)
{
  return DWMSPRITEREF::Detach(a1);
}
