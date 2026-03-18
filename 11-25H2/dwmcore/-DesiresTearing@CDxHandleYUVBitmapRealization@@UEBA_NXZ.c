/*
 * XREFs of ?DesiresTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180206840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::DesiresTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 22) & 0x800) != 0;
}
