/*
 * XREFs of ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x1801F6238
 * Callers:
 *     ?ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z @ 0x1801F6030 (-ConsumeTipPoints@CSuperWetInkScribble@@MEAAJPEAIPEA_K11@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802208DC (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  unsigned __int64 v9; // rdx
  __int64 result; // rax

  v6 = *(_QWORD **)a1;
  if ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 16) - (_QWORD)v6;
    if ( v9 >= 0x1000 )
    {
      v9 += 39LL;
      if ( (unsigned __int64)v6 - *(v6 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v6 = (_QWORD *)*(v6 - 1);
    }
    operator delete(v6, v9);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + a3;
  result = a2 + a4;
  *(_QWORD *)(a1 + 16) = a2 + a4;
  return result;
}
