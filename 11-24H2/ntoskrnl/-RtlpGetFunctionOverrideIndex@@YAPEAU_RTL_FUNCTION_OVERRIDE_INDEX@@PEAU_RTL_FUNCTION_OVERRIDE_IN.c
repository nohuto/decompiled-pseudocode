/*
 * XREFs of ?RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x14094034C
 * Callers:
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x14093FDFC (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 *     ?RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z @ 0x1409401C4 (-RtlpRecordFunctionOverrideRelocation@@YAXPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@EKGGE@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1404F6240 (-terminate@details@gsl@@YAXXZ.c)
 */

struct _RTL_FUNCTION_OVERRIDE_INDEX *__fastcall RtlpGetFunctionOverrideIndex(
        struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned int v5; // eax

  v2 = *((_DWORD *)a1 + 8);
  if ( (unsigned int)a2 < v2 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 9);
  if ( (unsigned int)a2 > v3 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 3);
  v5 = v3 - v2 + 1;
  if ( !v4 && v5 || (a2 = (unsigned int)a2 - v2, (unsigned int)a2 >= (unsigned __int64)v5) )
  {
    gsl::details::terminate(a1, a2);
    JUMPOUT(0x140940392LL);
  }
  return *(struct _RTL_FUNCTION_OVERRIDE_INDEX **)(v4 + 8 * a2);
}
