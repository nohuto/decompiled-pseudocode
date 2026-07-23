/*
 * XREFs of SeAccessCheckFromState @ 0x1403B6390
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140836E70 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x140990AA8 (CmpCheckAdminAccess.c)
 * Callees:
 *     SepTokenFromAccessInformation @ 0x1403B64E0 (SepTokenFromAccessInformation.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  _BYTE *v13; // rax
  _BYTE *v15; // [rsp+68h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  _BYTE *v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  _BYTE v19[1184]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v20[1184]; // [rsp+530h] [rbp+430h] BYREF

  memset_0(v20, 0, sizeof(v20));
  memset_0(v19, 0, sizeof(v19));
  SepTokenFromAccessInformation(PrimaryTokenInformation, v20);
  if ( ClientTokenInformation )
  {
    SepTokenFromAccessInformation(ClientTokenInformation, v19);
    v13 = v19;
  }
  else
  {
    v13 = 0LL;
  }
  v15 = 0LL;
  v17 = v20;
  v16 = 0LL;
  v18 = 0LL;
  if ( v13 )
  {
    v15 = v13;
    LODWORD(v16) = *((_DWORD *)v13 + 49);
  }
  return SeAccessCheckWithHint(SecurityDescriptor, 0LL, &v15);
}
