/*
 * XREFs of PsQueryActivityModerationUserSettings @ 0x1405D93B4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PsQueryActivityModerationUserSettings(_QWORD *a1)
{
  int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost) )
  {
    v2 = guard_dispatch_icall_no_overrides(&v4);
    if ( v2 >= 0 )
      *a1 = v4;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(PspBamExtensionHost + 88));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v2;
}
