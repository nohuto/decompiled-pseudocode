/*
 * XREFs of ??$_Emplace_reallocate@AEBUIInspectable@Foundation@Windows@winrt@@@?$vector@UIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@AEAAPEAUIInspectable@Foundation@Windows@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800E7C94
 * Callers:
 *     ?TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@5@XZ @ 0x1800E9F98 (-TransferJointResizeVisuals@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AU-$IVec.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18004D03C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x180099EA8 (--$_Destroy_range@V-$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAXPEAUIInspe.c)
 *     ??$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V?$allocator@UIInspectable@Foundation@Windows@winrt@@@std@@@std@@YAPEAUIInspectable@Foundation@Windows@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UIInspectable@Foundation@Windows@winrt@@@0@@Z @ 0x1800E7F34 (--$_Uninitialized_move@PEAUIInspectable@Foundation@Windows@winrt@@V-$allocator@UIInspectable@Fou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall std::vector<winrt::Windows::Foundation::IInspectable>::_Emplace_reallocate<winrt::Windows::Foundation::IInspectable const &>(
        char *a1,
        winrt::Windows::Foundation::IUnknown *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rdi
  char *v17; // r15
  winrt::Windows::Foundation::IUnknown *v18; // rdx
  _QWORD *v19; // r8
  winrt::Windows::Foundation::IUnknown *v20; // rcx
  char *result; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v13);
  v15 = *a3;
  v16 = v14;
  v17 = &v14[8 * v5];
  *(_QWORD *)v17 = *a3;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v18 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)a1 + 1);
  v19 = v16;
  v20 = *(winrt::Windows::Foundation::IUnknown **)a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<winrt::Windows::Foundation::IInspectable *>(v20, a2, v16);
    v18 = (winrt::Windows::Foundation::IUnknown *)*((_QWORD *)a1 + 1);
    v19 = v17 + 8;
    v20 = a2;
  }
  std::_Uninitialized_move<winrt::Windows::Foundation::IInspectable *>(v20, v18, v19);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::Foundation::IInspectable>>(
      *(winrt::Windows::Foundation::IUnknown **)a1,
      *((winrt::Windows::Foundation::IUnknown **)a1 + 1));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = v16;
  result = v17;
  *((_QWORD *)a1 + 1) = &v16[8 * v9];
  *((_QWORD *)a1 + 2) = &v16[8 * v3];
  return result;
}
