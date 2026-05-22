/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXAEA_K@Z @ 0x1801927E4
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x1801934E8 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E668 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x180192864 (--$_Uninitialized_move@PEAUInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@YAPEA.c)
 */

__int64 __fastcall std::vector<InputSpacePayload>::_Reallocate<0>(
        _QWORD *a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v7; // rdi
  size_t size_of; // rax
  char *v9; // rax
  char *v10; // rsi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  char *v13; // rdx
  _QWORD *v14; // rcx
  char *v16; // [rsp+40h] [rbp+8h]

  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[1] - *a1) >> 3);
  size_of = std::_Get_size_of_n<40>(*a2);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v10 = v9;
  v16 = v9;
  try
  {
    std::_Uninitialized_move<InputSpacePayload *>(*a1, a1[1], v9);
    v11 = *a2;
    v12 = v7;
    v13 = v10;
    v14 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)(40 * *a2));
    throw;
  }
  return std::vector<InputSpacePayload>::_Change_array(v14, v13, v12, v11, a5);
}
