/*
 * XREFs of SdbpGetSystemSdbFilePath @ 0x140806F64
 * Callers:
 *     SdbGetPathCustomSdb @ 0x1408064CC (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x14080659C (SdbGetPathSystemSdb.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 i; // rdx
  __int64 *v8; // rax
  int v9; // ebx
  __int64 v10; // r8

  *a1 = 0;
  if ( a3 && a3 < 13 )
  {
    v6 = 1LL;
    for ( i = 4LL; ; i += 4LL )
    {
      if ( i >= 52 )
        goto LABEL_15;
      if ( LODWORD(qword_1400096F0[i]) == a3 )
        break;
      ++v6;
    }
    v8 = &qword_1400096F0[4 * v6];
    if ( !v8 )
    {
LABEL_15:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetSystemSdbFilePath",
        1373,
        (unsigned int)"SdbFileDetails missing array item for SdbFileType: %d");
      return (unsigned int)-1073741275;
    }
    if ( v8[2] )
    {
      v10 = a5;
      if ( !a5 )
        v10 = v8[1];
      v9 = guard_dispatch_icall_no_overrides(a1, 260LL, v10, a6);
      if ( v9 >= 0 )
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
  return (unsigned int)v9;
}
