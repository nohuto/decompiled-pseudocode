/*
 * XREFs of ?RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x1409EBFB8
 * Callers:
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x1409EBA68 (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     ?RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z @ 0x1409EBE30 (-RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F8960 (-terminate@details@gsl@@YAXXZ.c)
 */

struct _RTL_FUNCTION_OVERRIDE_INDEX *__fastcall RtlpGetFunctionOverrideIndex(
        struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned int v5; // eax

  v2 = *((unsigned int *)a1 + 8);
  if ( (unsigned int)a2 < (unsigned int)v2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 9);
  if ( (unsigned int)a2 > v3 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 3);
  v5 = v3 - v2 + 1;
  if ( !v4 && v5 || (a2 = (unsigned int)(a2 - v2), (unsigned int)a2 >= (unsigned __int64)v5) )
  {
    gsl::details::terminate(a1, a2, v2, v5);
    JUMPOUT(0x1409EBFFELL);
  }
  return *(struct _RTL_FUNCTION_OVERRIDE_INDEX **)(v4 + 8 * a2);
}
