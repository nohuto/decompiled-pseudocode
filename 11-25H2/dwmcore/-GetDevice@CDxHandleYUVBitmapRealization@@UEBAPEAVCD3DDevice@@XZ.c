/*
 * XREFs of ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x18021FFE0
 * Callers:
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180176E04 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDxHandleYUVBitmapRealization::GetDevice(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDevice *result; // rax

  result = (struct CD3DDevice *)*((_QWORD *)this + 6);
  if ( result )
    return *(struct CD3DDevice **)(*((_QWORD *)result + 5) + 80LL);
  return result;
}
