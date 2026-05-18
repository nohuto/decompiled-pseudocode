/*
 * XREFs of sub_180091C70 @ 0x180091C70
 * Callers:
 *     <none>
 * Callees:
 *     _o_cosf @ 0x18000C428 (_o_cosf.c)
 */

float __fastcall sub_180091C70(float a1)
{
  o_cosf();
  return (float)((float)(a1 * 3.1415927) * 0.5) + 0.5;
}
