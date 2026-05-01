/*
 * XREFs of ??4?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802C9B84
 * Callers:
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800C2584 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 * Callees:
 *     ??$_Assign_range@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@V21@@Z @ 0x18057C50C (--$_Assign_range@V-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 != a2 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v7[0] = a2;
    v5 = *(_QWORD *)(a2 + 24);
    v8[0] = a2;
    v7[1] = v5 + v4;
    v8[1] = v5;
    std::deque<unsigned __int64>::_Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>(
      a1,
      v8,
      v7);
  }
  return a1;
}
