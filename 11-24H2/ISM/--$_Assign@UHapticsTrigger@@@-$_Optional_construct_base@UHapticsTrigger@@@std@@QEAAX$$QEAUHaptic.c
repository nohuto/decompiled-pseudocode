/*
 * XREFs of ??$_Assign@UHapticsTrigger@@@?$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAX$$QEAUHapticsTrigger@@@Z @ 0x1801991C8
 * Callers:
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x180199EC8 (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@1@@Z @ 0x18018459C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBGU_HIDP_VALUE_CAPS@@@std@@PEAX@std@@@std@@.c)
 *     ??$_Construct@UHapticsTrigger@@@?$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAAEAUHapticsTrigger@@$$QEAU2@@Z @ 0x180199270 (--$_Construct@UHapticsTrigger@@@-$_Optional_construct_base@UHapticsTrigger@@@std@@QEAAAEAUHaptic.c)
 */

__int64 __fastcall std::_Optional_construct_base<HapticsTrigger>::_Assign<HapticsTrigger>(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx

  if ( !*(_BYTE *)(a1 + 88) )
    return std::_Optional_construct_base<HapticsTrigger>::_Construct<HapticsTrigger>();
  v2 = (_QWORD *)(a2 + 72);
  v3 = (_QWORD *)(a1 + 72);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  if ( a1 + 72 != a2 + 72 )
  {
    v4 = (_QWORD *)*v3;
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned short const,_HIDP_VALUE_CAPS>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned short const,_HIDP_VALUE_CAPS>,void *>>>(
      a1 + 72,
      a1 + 72,
      *(char **)(*v3 + 8LL));
    v4[1] = v4;
    *v4 = v4;
    v4[2] = v4;
    v3[1] = 0LL;
    v5 = *v3;
    *v3 = *v2;
    result = v2[1];
    *v2 = v5;
    v7 = v3[1];
    v3[1] = result;
    v2[1] = v7;
  }
  return result;
}
