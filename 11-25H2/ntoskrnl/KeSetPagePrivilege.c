/*
 * XREFs of KeSetPagePrivilege @ 0x1402CE1B0
 * Callers:
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x14065F8C0 (MiProtectDriverSectionPte.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140BF9A10 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslRemoveProtectedPage @ 0x1402CE210 (VslRemoveProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x1402CF124 (VslMakeProtectedPageExecutable.c)
 *     VslSetPrivilegedPte @ 0x1402CF254 (VslSetPrivilegedPte.c)
 *     VslRegisterProtectedPage @ 0x14058A6AC (VslRegisterProtectedPage.c)
 */

__int64 __fastcall KeSetPagePrivilege(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (a4 & 0x80u) != 0 )
    return VslRegisterProtectedPage();
  if ( (a4 & 0x200) != 0 )
    return VslSetPrivilegedPte(a1, a2, a3, (a4 >> 11) & 1);
  if ( (a4 & 0x30) != 0 )
    return VslRemoveProtectedPage(a1, a3, (a4 >> 2) & 1);
  return VslMakeProtectedPageExecutable(a1, a2, a4 & 0x400);
}
