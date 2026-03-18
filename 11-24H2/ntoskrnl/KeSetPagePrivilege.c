/*
 * XREFs of KeSetPagePrivilege @ 0x14036C260
 * Callers:
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140C0AA10 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslRemoveProtectedPage @ 0x14026638C (VslRemoveProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x14036C2C0 (VslMakeProtectedPageExecutable.c)
 *     VslSetPrivilegedPte @ 0x14036C358 (VslSetPrivilegedPte.c)
 *     VslRegisterProtectedPage @ 0x1404F88B4 (VslRegisterProtectedPage.c)
 */

__int64 __fastcall KeSetPagePrivilege(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4)
{
  if ( (a4 & 0x80u) != 0 )
    return VslRegisterProtectedPage();
  if ( (a4 & 0x200) != 0 )
    return VslSetPrivilegedPte(a1, a2, a3, (a4 >> 11) & 1);
  if ( (a4 & 0x30) != 0 )
    return VslRemoveProtectedPage(a1, a3, (a4 >> 2) & 1);
  return VslMakeProtectedPageExecutable(a1, a2, a4 & 0x400);
}
