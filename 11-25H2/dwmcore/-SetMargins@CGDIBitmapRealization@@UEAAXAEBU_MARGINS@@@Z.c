/*
 * XREFs of ?SetMargins@CGDIBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x180214070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGDIBitmapRealization::SetMargins(CGDIBitmapRealization *this, const struct _MARGINS *a2)
{
  *(struct _MARGINS *)((char *)this + 8) = *a2;
}
