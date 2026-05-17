/*
 * XREFs of RtlpComputeBackupIndex @ 0x1800A2440
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800A3370 (RtlDetermineDosPathNameType_Ustr.c)
 */

__int64 __fastcall RtlpComputeBackupIndex(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v3; // r9
  int v5; // r8d
  unsigned int i; // edx
  __int64 v7; // rax

  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1, a2, a3, a1) != 1 )
    return 3LL;
  v5 = 0;
  for ( i = 2; i < *v3 >> 1; ++i )
  {
    v7 = *((_QWORD *)v3 + 1);
    if ( (*(_WORD *)(v7 + 2LL * i) == 92 || *(_WORD *)(v7 + 2LL * i) == 47) && ++v5 == 2 )
      return i + 1;
  }
  return i;
}
