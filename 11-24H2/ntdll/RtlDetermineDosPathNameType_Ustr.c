/*
 * XREFs of RtlDetermineDosPathNameType_Ustr @ 0x1800944C0
 * Callers:
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     RtlpComputeBackupIndex @ 0x180093590 (RtlpComputeBackupIndex.c)
 *     RtlDosSearchPath_Ustr @ 0x1800937A0 (RtlDosSearchPath_Ustr.c)
 *     RtlpInitCurrentDir @ 0x180094888 (RtlpInitCurrentDir.c)
 *     RtlNtPathNameToDosPathName @ 0x1800A6240 (RtlNtPathNameToDosPathName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x1800A7194 (RtlpDetermineDosPathNameType4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDetermineDosPathNameType_Ustr(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  __int16 *v2; // rax
  __int16 v3; // cx
  __int16 v4; // cx
  __int16 v6; // cx
  __int16 v7; // cx
  __int16 v8; // cx

  v1 = *a1;
  v2 = (__int16 *)*((_QWORD *)a1 + 1);
  if ( *a1 < 2u )
    return 5LL;
  v3 = *v2;
  if ( *v2 == 92 || v3 == 47 )
  {
    if ( v1 < 4u )
      return 4LL;
    v6 = v2[1];
    if ( v6 != 92 && v6 != 47 )
      return 4LL;
    if ( v1 >= 6u )
    {
      v7 = v2[2];
      if ( v7 == 46 || v7 == 63 )
      {
        if ( v1 < 8u )
        {
          if ( v1 == 6 )
            return 7LL;
        }
        else
        {
          v8 = v2[3];
          if ( v8 == 92 || v8 == 47 )
            return 6LL;
        }
      }
    }
    return 1LL;
  }
  if ( v1 < 4u || !v3 || v2[1] != 58 )
    return 5LL;
  if ( v1 >= 6u && ((v4 = v2[2], v4 == 92) || v4 == 47) )
    return 2LL;
  else
    return 3LL;
}
