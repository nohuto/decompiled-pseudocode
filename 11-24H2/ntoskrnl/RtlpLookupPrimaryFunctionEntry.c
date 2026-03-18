/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x140483AB0
 * Callers:
 *     RtlpSameFunction @ 0x1404839F8 (RtlpSameFunction.c)
 *     RtlLookupExceptionHandler @ 0x1405E8838 (RtlLookupExceptionHandler.c)
 *     RtlLookupPrimaryFunctionEntry @ 0x1405F09D0 (RtlLookupPrimaryFunctionEntry.c)
 *     CcInitializeBcbProfiler @ 0x140BDEC74 (CcInitializeBcbProfiler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d
  _BYTE *v4; // r9
  int v6; // ecx
  int v7; // eax

  v3 = 0;
  while ( 1 )
  {
    v4 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (*v4 & 0x20) == 0 )
      break;
    v6 = (unsigned __int8)v4[2];
    v7 = v6 + 1;
    if ( (v6 & 1) == 0 )
      v7 = (unsigned __int8)v4[2];
    ++v3;
    a1 = &v4[2 * v7 + 4];
    if ( v3 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
