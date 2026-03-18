/*
 * XREFs of ?_Change_array@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAXQEAUHandleTableEntry@CChannel@@_K1@Z @ 0x1801CF574
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CF5F0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1801CFC74 (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 */

void __fastcall std::vector<CChannel::HandleTableEntry>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx

  v6 = (_QWORD *)*a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v6, a1[1]);
    std::_Deallocate<16,0>((_QWORD *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
}
