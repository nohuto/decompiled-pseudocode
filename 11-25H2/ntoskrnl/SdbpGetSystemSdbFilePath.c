/*
 * XREFs of SdbpGetSystemSdbFilePath @ 0x1407F73F4
 * Callers:
 *     SdbGetPathCustomSdb @ 0x1407F695C (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x1407F6A2C (SdbGetPathSystemSdb.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 i; // rdx
  __int64 *v5; // rax
  int v6; // ebx

  *a1 = 0;
  if ( a3 && a3 < 13 )
  {
    v3 = 1LL;
    for ( i = 4LL; ; i += 4LL )
    {
      if ( i >= 52 )
        goto LABEL_13;
      if ( LODWORD(qword_1400096D0[i]) == a3 )
        break;
      ++v3;
    }
    v5 = &qword_1400096D0[4 * v3];
    if ( !v5 )
    {
LABEL_13:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetSystemSdbFilePath",
        1373,
        (unsigned int)"SdbFileDetails missing array item for SdbFileType: %d");
      return (unsigned int)-1073741275;
    }
    if ( v5[2] )
    {
      v6 = guard_dispatch_icall_no_overrides(a1);
      if ( v6 >= 0 )
        return 0;
      else
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetSystemSdbFilePath",
          1397,
          (unsigned int)"GetPathFunction (for SdbFileType %d, IsLtRs3: %d) failed [%x]");
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetSystemSdbFilePath",
        1387,
        (unsigned int)"SdbFileDetails missing function pointer for path.");
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return (unsigned int)v6;
}
