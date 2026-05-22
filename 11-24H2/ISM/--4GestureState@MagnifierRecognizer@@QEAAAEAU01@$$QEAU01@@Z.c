/*
 * XREFs of ??4GestureState@MagnifierRecognizer@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801AE0F0
 * Callers:
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x1801AE4CC (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x18017EDF4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@.c)
 */

__int64 __fastcall MagnifierRecognizer::GestureState::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (_QWORD *)(a2 + 16);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v3 = (_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 1) = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a2 + 2);
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  if ( a1 + 16 != a2 + 16 )
  {
    v5 = (_QWORD *)*v3;
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *>>>(
      a1 + 16,
      a1 + 16,
      *(char **)(*v3 + 8LL));
    v5[1] = v5;
    *v5 = v5;
    v5[2] = v5;
    v3[1] = 0LL;
    v6 = *v3;
    *v3 = *v2;
    *v2 = v6;
    v7 = v3[1];
    v3[1] = v2[1];
    v2[1] = v7;
  }
  return a1;
}
