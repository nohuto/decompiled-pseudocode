/*
 * XREFs of RtlpComputeBackupIndex @ 0x180093590
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180071600 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x1800944C0 (RtlDetermineDosPathNameType_Ustr.c)
 */

__int64 __fastcall RtlpComputeBackupIndex(__int64 a1)
{
  unsigned __int16 *v1; // r9
  int v3; // r8d
  unsigned int i; // edx
  __int64 v5; // rax

  if ( (unsigned int)RtlDetermineDosPathNameType_Ustr(a1) != 1 )
    return 3LL;
  v3 = 0;
  for ( i = 2; i < *v1 >> 1; ++i )
  {
    v5 = *((_QWORD *)v1 + 1);
    if ( (*(_WORD *)(v5 + 2LL * i) == 92 || *(_WORD *)(v5 + 2LL * i) == 47) && ++v3 == 2 )
      return i + 1;
  }
  return i;
}
