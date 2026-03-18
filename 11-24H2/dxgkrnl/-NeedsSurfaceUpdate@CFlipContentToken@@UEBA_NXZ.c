/*
 * XREFs of ?NeedsSurfaceUpdate@CFlipContentToken@@UEBA_NXZ @ 0x140057790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipContentToken::NeedsSurfaceUpdate(CFlipContentToken *this)
{
  return *((_BYTE *)this + 224) & 1;
}
