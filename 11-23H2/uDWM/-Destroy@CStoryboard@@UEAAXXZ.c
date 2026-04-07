/*
 * XREFs of ?Destroy@CStoryboard@@UEAAXXZ @ 0x180014600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18001512C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::Destroy(CStoryboard *this)
{
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
