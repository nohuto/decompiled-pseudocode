/*
 * XREFs of SeAccessCheckFromState @ 0x14035A040
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140839BF8 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x1409A7658 (CmpCheckAdminAccess.c)
 * Callees:
 *     SepTokenFromAccessInformation @ 0x14035A190 (SepTokenFromAccessInformation.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

BOOLEAN __stdcall SeAccessCheckFromState(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
        PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  _BYTE v15[1184]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v16[1184]; // [rsp+530h] [rbp+430h] BYREF

  memset_0(v16, 0, 0x498uLL);
  memset_0(v15, 0, 0x498uLL);
  SepTokenFromAccessInformation(PrimaryTokenInformation, v16);
  if ( ClientTokenInformation )
    SepTokenFromAccessInformation(ClientTokenInformation, v15);
  return SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
