/*
 * XREFs of ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D8E64
 * Callers:
 *     ??$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@QEAA?A_TAEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D9080 (--$emplace_back@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CStoryboard.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18006D300 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@YAPEAUUnifiedTargetRect@CStoryboard@@QEAU12@0PEAU12@AEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@0@@Z @ 0x1800D8FD0 (--$_Uninitialized_move@PEAUUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStory.c)
 *     ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800D9050 (--$emplace_back@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_TAEBU.c)
 *     ?_Change_array@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAXQEAUUnifiedTargetRect@CStoryboard@@_K1@Z @ 0x1800DC5DC (-_Change_array@-$vector@UUnifiedTargetRect@CStoryboard@@V-$allocator@UUnifiedTargetRect@CStorybo.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::vector<CStoryboard::UnifiedTargetRect>::_Emplace_reallocate<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
        const char *a1,
        __int64 a2,
        int *a3,
        _OWORD *a4)
{
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 size_of; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx

  v8 = (a2 - *(_QWORD *)a1) / 48;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4);
  v10 = 0x555555555555555LL;
  if ( v9 == 0x555555555555555LL )
    std::_Dwm_Xlength_error(a1);
  v11 = v9 + 1;
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4);
  v13 = v12 >> 1;
  if ( v12 <= 0x555555555555555LL - (v12 >> 1) )
  {
    v10 = v13 + v12;
    if ( v13 + v12 < v11 )
      v10 = v11;
  }
  size_of = std::_Get_size_of_n<48>(v10);
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = v15 + 48 * v8;
  v17 = *a3;
  *(_QWORD *)(v16 + 24) = 0LL;
  *(_QWORD *)(v16 + 32) = 0LL;
  *(_QWORD *)(v16 + 40) = 0LL;
  *(_DWORD *)v16 = v17 & 0xFFF;
  *(_OWORD *)(v16 + 4) = *a4;
  std::vector<tagRECT>::emplace_back<tagRECT const &>(v16 + 24, a4);
  v18 = *((_QWORD *)a1 + 1);
  v19 = v15;
  v20 = *(_QWORD *)a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(v20, a2, v15);
    v19 = v16 + 48;
    v18 = *((_QWORD *)a1 + 1);
    v20 = a2;
  }
  std::_Uninitialized_move<CStoryboard::UnifiedTargetRect *>(v20, v18, v19);
  std::vector<CStoryboard::UnifiedTargetRect>::_Change_array(a1, v15, v11, v10);
  return v16;
}
