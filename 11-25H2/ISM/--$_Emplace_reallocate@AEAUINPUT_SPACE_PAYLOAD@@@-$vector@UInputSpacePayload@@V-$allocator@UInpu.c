/*
 * XREFs of ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x180183310
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x180184428 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18006E8D8 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@?$_Default_allocator_traits@V?$allocator@UInputSpacePayload@@@std@@@std@@SAXAEAV?$allocator@UInputSpacePayload@@@1@QEAUInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x18008F53C (--$construct@UInputSpacePayload@@AEAUINPUT_SPACE_PAYLOAD@@@-$_Default_allocator_traits@V-$alloca.c)
 *     ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801837A4 (--$_Uninitialized_move@PEAUInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@YAPEA.c)
 *     ?_Change_array@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQEAUInputSpacePayload@@_K1@Z @ 0x1801850F8 (-_Change_array@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AEAAXQE.c)
 */

__int64 __fastcall std::vector<InputSpacePayload>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 40;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v7 = 0x666666666666666LL;
  if ( v6 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<40>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = 5 * v5;
  v14 = (__int64)&v12[40 * v5];
  try
  {
    std::_Default_allocator_traits<std::allocator<InputSpacePayload>>::construct<InputSpacePayload,INPUT_SPACE_PAYLOAD &>(
      v13,
      v14,
      a3);
    v19 = (_QWORD *)v14;
    v15 = a1[1];
    v16 = v12;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<InputSpacePayload *>(v17, a2, v12);
      v19 = v12;
      v16 = (char *)(v14 + 40);
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<InputSpacePayload *>(v17, v15, v16);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<InputSpacePayload>>(v19, (_QWORD *)(v14 + 40));
    std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)(40 * v7));
    throw;
  }
  std::vector<InputSpacePayload>::_Change_array(a1, v12, v8, v7, v12);
  return v14;
}
