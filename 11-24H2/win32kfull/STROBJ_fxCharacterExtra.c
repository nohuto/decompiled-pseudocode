/*
 * XREFs of STROBJ_fxCharacterExtra @ 0x1403072B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

FIX __stdcall STROBJ_fxCharacterExtra(STROBJ *pstro)
{
  if ( (pstro->flAccel & 0x800) != 0 )
    return pstro[2].rclBkGround.right;
  else
    return 0;
}
