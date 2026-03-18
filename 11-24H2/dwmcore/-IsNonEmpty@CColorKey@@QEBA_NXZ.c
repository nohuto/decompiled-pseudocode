/*
 * XREFs of ?IsNonEmpty@CColorKey@@QEBA_NXZ @ 0x1800495C0
 * Callers:
 *     ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18004951C (--8CColorKey@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorKey::IsNonEmpty(CColorKey *this)
{
  return *((float *)this + 7) >= *((float *)this + 3)
      && *((float *)this + 4) >= *(float *)this
      && *((float *)this + 5) >= *((float *)this + 1)
      && *((float *)this + 6) >= *((float *)this + 2);
}
