/*
 * XREFs of ?get_BoundingRectangle@CoverWindowAcc@@UEAAJPEAUUiaRect@@@Z @ 0x180537A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CoverWindowAcc::get_BoundingRectangle(CoverWindowAcc *this, struct UiaRect *a2)
{
  __int64 result; // rax

  a2->left = (double)*((int *)this + 24);
  a2->top = (double)*((int *)this + 25);
  a2->width = (double)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24));
  result = 0LL;
  a2->height = (double)(*((_DWORD *)this + 27) - *((_DWORD *)this + 25));
  return result;
}
