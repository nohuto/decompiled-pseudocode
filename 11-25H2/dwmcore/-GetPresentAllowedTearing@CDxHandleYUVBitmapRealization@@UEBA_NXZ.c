/*
 * XREFs of ?GetPresentAllowedTearing@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802E1120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetPresentAllowedTearing(CDxHandleYUVBitmapRealization *this)
{
  return (*((_DWORD *)this - 22) & 0x1000) != 0;
}
