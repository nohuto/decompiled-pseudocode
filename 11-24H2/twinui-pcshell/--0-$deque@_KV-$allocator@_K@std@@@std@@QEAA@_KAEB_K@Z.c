/*
 * XREFs of ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@_KAEB_K@Z @ 0x18057D404
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800C1D74 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800C15E0 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??0?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@AEAV?$allocator@U_Container_proxy@std@@@1@AEAU_Container_base12@1@@Z @ 0x1801F5048 (--0-$_Container_proxy_ptr12@V-$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@AEAV-$allocator.c)
 *     ??1?$_Container_proxy_ptr12@V?$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@XZ @ 0x1802CEA60 (--1-$_Container_proxy_ptr12@V-$allocator@U_Container_proxy@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x18057D4EC (--1-$_Tidy_guard@V-$deque@_KV-$allocator@_K@std@@@std@@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::deque<unsigned __int64>::deque<unsigned __int64>(_QWORD *a1, __int64 a2, __int64 *a3)
{
  void *v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *i; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(
    v7,
    (__int64)&v8,
    a1);
  for ( i = a1; a2; --a2 )
    std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>((__int64)a1, a3);
  i = 0LL;
  std::_Tidy_guard<std::deque<unsigned __int64>>::~_Tidy_guard<std::deque<unsigned __int64>>(&i);
  v7[0] = 0LL;
  std::_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>::~_Container_proxy_ptr12<std::allocator<std::_Container_proxy>>(v7);
  return a1;
}
