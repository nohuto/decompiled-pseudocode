/*
 * XREFs of ??$_Uninitialized_move@PEAHV?$allocator@H@std@@@std@@YAPEAHQEAH0PEAHAEAV?$allocator@H@0@@Z @ 0x1802A64B8
 * Callers:
 *     ??$_Emplace_reallocate@H@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z @ 0x18021E308 (--$_Emplace_reallocate@H@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAH$$QEAH@Z.c)
 *     ??$_Emplace_reallocate@AEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAPEAHQEAHAEBH@Z @ 0x1802A6358 (--$_Emplace_reallocate@AEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAPEAHQEAHAEBH@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1805C3B80 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@HV-$allocator@H@std@@@std@@AEAAX_KAEBU_Val.c)
 * Callees:
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall std::_Uninitialized_move<int *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + 4 * (v4 >> 2);
}
