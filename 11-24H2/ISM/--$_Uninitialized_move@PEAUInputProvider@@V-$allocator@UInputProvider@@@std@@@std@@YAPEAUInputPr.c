/*
 * XREFs of ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800CEA5C
 * Callers:
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800CE8D0 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A2FC4 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV-$all.c)
 *     ??$construct@UInputProvider@@U1@@?$_Default_allocator_traits@V?$allocator@UInputProvider@@@std@@@std@@SAXAEAV?$allocator@UInputProvider@@@1@QEAUInputProvider@@$$QEAU3@@Z @ 0x1800CEAA0 (--$construct@UInputProvider@@U1@@-$_Default_allocator_traits@V-$allocator@UInputProvider@@@std@@.c)
 */

__int64 __fastcall std::_Uninitialized_move<InputProvider *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r9

  if ( a1 != a2 )
  {
    do
    {
      std::_Default_allocator_traits<std::allocator<InputProvider>>::construct<InputProvider,InputProvider>(a1, a3, a1);
      a3 += 24LL;
      a1 = v4 + 24;
    }
    while ( a1 != v5 );
  }
  std::_Destroy_range<std::allocator<InputProvider>>(a3, a3);
  return a3;
}
