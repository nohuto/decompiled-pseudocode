/*
 * XREFs of ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x18002CDDC
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002BD80 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x18002BD40 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x18002C59C (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ??$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x180095E8C (--$_Uninitialized_move@PEAUTargetingInfo@KeyboardProcessor@@V-$allocator@UTargetingInfo@Keyboard.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<KeyboardProcessor::TargetingInfo>::_Emplace_reallocate<KeyboardProcessor::TargetingInfo &>(
        char **a1,
        char *a2,
        const struct KeyboardProcessor::TargetingInfo *a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  char *v11; // rdi
  char *v12; // rsi
  char *v13; // rdx
  char *v14; // rcx
  unsigned __int64 v16; // rax
  KeyboardProcessor::TargetingInfo *v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+78h] [rbp+10h]

  v5 = (a2 - *a1) / 384;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 7);
  if ( v6 == 0xAAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 7);
  if ( v8 <= 0xAAAAAAAAAAAAAALL - (v8 >> 1) )
  {
    v16 = (v8 >> 1) + v8;
    v9 = v7;
    if ( v16 >= v7 )
      v9 = v16;
    v18 = v9;
    if ( v9 > 0xAAAAAAAAAAAAAALL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v9 = 0xAAAAAAAAAAAAAALL;
    v18 = 0xAAAAAAAAAAAAAALL;
  }
  v10 = 384 * v9;
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(384 * v9);
  v12 = &v11[384 * v5];
  KeyboardProcessor::TargetingInfo::TargetingInfo((KeyboardProcessor::TargetingInfo *)v12, a3);
  v13 = a1[1];
  v14 = *a1;
  if ( a2 != v13 )
  {
    try
    {
      std::_Uninitialized_move<KeyboardProcessor::TargetingInfo *>(v14, a2);
      v17 = (KeyboardProcessor::TargetingInfo *)v11;
      v13 = a1[1];
      v14 = a2;
    }
    catch ( ... )
    {
      std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(
        v17,
        (KeyboardProcessor::TargetingInfo *)(v12 + 384));
      std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(384 * v18));
      throw;
    }
  }
  std::_Uninitialized_move<KeyboardProcessor::TargetingInfo *>(v14, v13);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(
      (KeyboardProcessor::TargetingInfo *)*a1,
      (KeyboardProcessor::TargetingInfo *)a1[1]);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)((a1[2] - *a1) >> 7 << 7));
  }
  *a1 = v11;
  a1[1] = &v11[384 * v7];
  a1[2] = &v11[v10];
  return v12;
}
