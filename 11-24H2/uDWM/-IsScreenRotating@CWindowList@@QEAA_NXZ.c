/*
 * XREFs of ?IsScreenRotating@CWindowList@@QEAA_NXZ @ 0x18007D4A0
 * Callers:
 *     ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x18007D440 (-IsEnabled@CStoryboard@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowList::IsScreenRotating(CWindowList *this)
{
  return *((_BYTE *)this + 672);
}
