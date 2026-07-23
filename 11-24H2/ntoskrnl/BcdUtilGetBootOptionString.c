/*
 * XREFs of BcdUtilGetBootOptionString @ 0x140812E68
 * Callers:
 *     SeAuditBootConfiguration @ 0x140790694 (SeAuditBootConfiguration.c)
 * Callees:
 *     BcdUtilGetBootOption @ 0x140812D74 (BcdUtilGetBootOption.c)
 */

__int64 __fastcall BcdUtilGetBootOptionString(__int64 a1, unsigned int a2)
{
  __int64 BootOption; // rax
  __int64 v4; // r9
  __int16 v5; // ax

  if ( (a2 & 0xF000000) != 0x2000000 )
    return 3221225485LL;
  BootOption = BcdUtilGetBootOption(a1, a2);
  if ( !BootOption )
    return 3221226021LL;
  *(_QWORD *)(v4 + 8) = BootOption + *(unsigned int *)(BootOption + 4);
  v5 = *(_WORD *)(BootOption + 8);
  *(_WORD *)v4 = v5;
  *(_WORD *)(v4 + 2) = v5;
  return 0LL;
}
