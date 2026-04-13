/*
 * XREFs of ?FreeDataChain@XPlex@XWinRT@@QEAAXXZ @ 0x18008AD04
 * Callers:
 *     ?FreePlexes@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEAAXXZ @ 0x1800991FC (-FreePlexes@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPositio.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::XPlex::FreeDataChain(XWinRT::XPlex **this)
{
  XWinRT::XPlex *v1; // rbx

  if ( this )
  {
    do
    {
      v1 = *this;
      free(this);
      this = (XWinRT::XPlex **)v1;
    }
    while ( v1 );
  }
}
