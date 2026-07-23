/*
 * XREFs of KeSetPagePrivilege @ 0x140492188
 * Callers:
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140C0CA10 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslRemoveProtectedPage @ 0x1403A9AF4 (VslRemoveProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x1404921E8 (VslMakeProtectedPageExecutable.c)
 *     VslSetPrivilegedPte @ 0x140492280 (VslSetPrivilegedPte.c)
 *     VslRegisterProtectedPage @ 0x1404F6194 (VslRegisterProtectedPage.c)
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
