/*
 * XREFs of ?_Tidy@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@AEAAXXZ @ 0x1800958B0
 * Callers:
 *     ??1?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA@XZ @ 0x180095884 (--1-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediator@@.c)
 * Callees:
 *     ?pop_back@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAXXZ @ 0x180015EF0 (-pop_back@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMed.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<PointerInputMediator::PointerFrame>::_Tidy(_QWORD *a1)
{
  char **v2; // rdi
  _QWORD *v3; // r14
  __int64 v4; // rsi
  char *v5; // rcx

  while ( a1[4] )
    std::deque<PointerInputMediator::PointerFrame>::pop_back(a1);
  v2 = (char **)(a1 + 1);
  v3 = a1 + 1;
  if ( a1[1] )
  {
    v4 = a1[2];
    if ( v4 )
    {
      do
      {
        --v4;
        v5 = *(char **)&(*v2)[8 * v4];
        if ( v5 )
          std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x110);
      }
      while ( v4 );
      v3 = a1 + 1;
    }
    std::_Deallocate<16,0>(*v2, (const struct std::nothrow_t *)(8LL * a1[2]));
  }
  a1[2] = 0LL;
  *v3 = 0LL;
}
