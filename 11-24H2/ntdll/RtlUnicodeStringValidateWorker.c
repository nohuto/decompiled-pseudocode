/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x1800940C8
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 *     RtlDosSearchPath_Ustr @ 0x1800937A0 (RtlDosSearchPath_Ustr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringValidateWorker(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // dx

  result = 0LL;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return 3221225485LL;
  v2 = *(_WORD *)(a1 + 2);
  if ( (v2 & 1) != 0 || *(_WORD *)a1 > v2 || v2 == 0xFFFF || !*(_QWORD *)(a1 + 8) && (*(_WORD *)a1 || v2) )
    return 3221225485LL;
  return result;
}
