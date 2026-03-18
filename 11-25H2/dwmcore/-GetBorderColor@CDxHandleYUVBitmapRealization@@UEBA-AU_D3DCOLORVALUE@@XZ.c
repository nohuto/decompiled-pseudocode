/*
 * XREFs of ?GetBorderColor@CDxHandleYUVBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801FDB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CDxHandleYUVBitmapRealization::GetBorderColor(
        CDxHandleYUVBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct _D3DCOLORVALUE *result; // rax

  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)this - 204);
  return result;
}
