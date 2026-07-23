/*
 * XREFs of ?RtlpGetRelocationLastByteRva@@YAGPEBU_RTL_FUNCTION_OVERRIDE_RELOCATION@@@Z @ 0x14094039C
 * Callers:
 *     ?RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x14093FDFC (-RtlpSortAndValidateRelocations@@YAJPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetRelocationLastByteRva(const struct _RTL_FUNCTION_OVERRIDE_RELOCATION *a1)
{
  __int16 v1; // dx
  unsigned __int16 v2; // dx

  v1 = *((_WORD *)a1 + 1) & 7;
  if ( !v1 )
    v1 = 4;
  v2 = (*(_WORD *)a1 & 0xFFF) - 1 + v1;
  if ( v2 >= 0xFFFu )
    return 4095;
  return v2;
}
