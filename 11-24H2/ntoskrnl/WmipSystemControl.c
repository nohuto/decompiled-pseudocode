/*
 * XREFs of WmipSystemControl @ 0x140A37380
 * Callers:
 *     <none>
 * Callees:
 *     IoWMISystemControl @ 0x140A373A4 (IoWMISystemControl.c)
 */

__int64 __fastcall WmipSystemControl(__int64 a1, __int64 a2)
{
  return IoWMISystemControl(WmipWmiLibInfo, a1, a2);
}
