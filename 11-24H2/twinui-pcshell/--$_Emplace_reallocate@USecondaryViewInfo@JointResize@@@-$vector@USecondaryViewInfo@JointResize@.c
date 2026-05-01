/*
 * XREFs of ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x18053830C
 * Callers:
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA?A_T$$QEAUSecondaryViewInfo@JointResize@@@Z @ 0x1802B2054 (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x1802302E0 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewInfo@JointResize@@QEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x18029F17C (--$_Destroy_range@V-$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAXPEAUSecondaryViewI.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x1805384A0 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     ??$construct@USecondaryViewInfo@JointResize@@U12@@?$_Default_allocator_traits@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@SAXAEAV?$allocator@USecondaryViewInfo@JointResize@@@1@QEAUSecondaryViewInfo@JointResize@@$$QEAU34@@Z @ 0x180538A08 (--$construct@USecondaryViewInfo@JointResize@@U12@@-$_Default_allocator_traits@V-$allocator@USeco.c)
 */

char *__fastcall std::vector<JointResize::SecondaryViewInfo>::_Emplace_reallocate<JointResize::SecondaryViewInfo>(
        JointResize::SecondaryViewInfo **a1,
        JointResize::SecondaryViewInfo *a2,
        __int64 a3)
{
  __int64 v5; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  JointResize::SecondaryViewInfo *v12; // rax
  __int64 v13; // rcx
  JointResize::SecondaryViewInfo *v14; // rsi
  char *v15; // r15
  JointResize::SecondaryViewInfo *v16; // rdx
  JointResize::SecondaryViewInfo *v17; // r8
  JointResize::SecondaryViewInfo *v18; // rcx
  char *result; // rax
  JointResize::SecondaryViewInfo *v20; // [rsp+20h] [rbp-48h]
  JointResize::SecondaryViewInfo *v21; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 96;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 5);
  v7 = 0x2AAAAAAAAAAAAAALL;
  if ( v6 == 0x2AAAAAAAAAAAAAALL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 5);
  v10 = v9 >> 1;
  if ( v9 <= 0x2AAAAAAAAAAAAAALL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<96>(v7);
  v12 = (JointResize::SecondaryViewInfo *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v12;
  v20 = v12;
  v15 = (char *)v12 + 96 * v5;
  try
  {
    std::_Default_allocator_traits<std::allocator<JointResize::SecondaryViewInfo>>::construct<JointResize::SecondaryViewInfo,JointResize::SecondaryViewInfo>(
      v13,
      v15,
      a3);
    v21 = (JointResize::SecondaryViewInfo *)v15;
    v16 = a1[1];
    v17 = v14;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v18, a2, v14);
      v21 = v14;
      v17 = (JointResize::SecondaryViewInfo *)(v15 + 96);
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v18, v16, v17);
    if ( *a1 )
    {
      std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(*a1, a1[1]);
      std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)(32 * ((a1[2] - *a1) >> 5)));
    }
    *a1 = v14;
    a1[1] = (JointResize::SecondaryViewInfo *)((char *)v14 + 96 * v8);
    a1[2] = (JointResize::SecondaryViewInfo *)((char *)v14 + 96 * v7);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<JointResize::SecondaryViewInfo>>(
      v21,
      (JointResize::SecondaryViewInfo *)(v15 + 96));
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(96 * v7));
    throw;
  }
  return result;
}
