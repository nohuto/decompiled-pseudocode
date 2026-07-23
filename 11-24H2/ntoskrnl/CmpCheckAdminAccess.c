/*
 * XREFs of CmpCheckAdminAccess @ 0x140990AA8
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140A154DC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x1403B6390 (SeAccessCheckFromState.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpBuildAdminInformation @ 0x140990B8C (CmpBuildAdminInformation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCheckAdminAccess(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        __int64 a3,
        BOOLEAN *a4)
{
  int v7; // edi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-28h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-24h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-20h] BYREF
  PPRIVILEGE_SET v12; // [rsp+60h] [rbp-18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  Privileges = 0LL;
  v12 = 0LL;
  v7 = CmpBuildAdminInformation(&Privileges, a3);
  if ( v7 >= 0 )
  {
    *a4 = SeAccessCheckFromState(
            SecurityDescriptor,
            (PTOKEN_ACCESS_INFORMATION)Privileges,
            0LL,
            DesiredAccess,
            0,
            &v12,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            1,
            &GrantedAccess,
            &AccessStatus);
    v7 = 0;
  }
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)v7;
}
