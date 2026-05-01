/*
 * XREFs of std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681B58
 * Callers:
 *     std::_Sort_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681C14 (std--_Sort_unchecked_winrt--com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___ @ 0x180681A6C (std--_Pop_heap_hole_by_index_winrt--com_ptr_IApplicationView____winrt--com_ptr_IApplicationView_.c)
 */

// Hidden C++ exception states: #wind=1
signed __int64 __fastcall std::_Sort_heap_unchecked_winrt::com_ptr_IApplicationView_____lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        __int64 *a1,
        __int64 a2)
{
  signed __int64 result; // rax
  __int64 *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( result >= 16 )
  {
    v4 = (__int64 *)(a2 - 8);
    v5 = 8LL - (_QWORD)a1;
    do
    {
      v6 = *v4;
      *v4 = 0LL;
      v7 = v6;
      winrt::com_ptr<ITouchSwipe>::operator=(v4, a1);
      std::_Pop_heap_hole_by_index_winrt::com_ptr_IApplicationView____winrt::com_ptr_IApplicationView___lambda_6875e63b3d0ecbbc887d662ab41e20e0___(
        (__int64)a1,
        0LL,
        v4 - a1,
        &v7);
      if ( v7 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
      result = ((unsigned __int64)--v4 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
    }
    while ( result >= 16 );
  }
  return result;
}
