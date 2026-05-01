/*
 * XREFs of ?decrement_strong@?$weak_ref@$0A@$00@impl@winrt@@QEAAIXZ @ 0x1802CAF20
 * Callers:
 *     ?subtract_final_reference@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@IEAAIXZ @ 0x1801B9F08 (-subtract_final_reference@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExpl.c)
 * Callees:
 *     ?Release@?$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ @ 0x180450BB0 (-Release@-$weak_ref@$0A@$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::weak_ref<0,1>::decrement_strong(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 6);
  if ( !v1 )
    winrt::impl::weak_ref<0,1>::Release((void *)a1);
  return v1;
}
