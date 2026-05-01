/*
 * XREFs of ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800C0ACC
 * Callers:
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C0A28 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800C2584 (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ??1?$_Tidy_guard@V?$deque@_KV?$allocator@_K@std@@@std@@@std@@QEAA@XZ @ 0x18057D4EC (--1-$_Tidy_guard@V-$deque@_KV-$allocator@_K@std@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18057D778 (--4-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<unsigned __int64>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rax
  void **v3; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  void *v7; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v5 = v2 - 1;
    a1[4] = v5;
    if ( !v5 )
      a1[3] = 0LL;
  }
  v3 = (void **)(a1 + 1);
  v4 = a1 + 1;
  if ( a1[1] )
  {
    v6 = a1[2];
    if ( v6 )
    {
      do
      {
        --v6;
        v7 = (void *)*((_QWORD *)*v3 + v6);
        if ( v7 )
          std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x10);
      }
      while ( v6 );
      v4 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v3, (const struct std::nothrow_t *)(8LL * a1[2]));
  }
  a1[2] = 0LL;
  *v4 = 0LL;
}
