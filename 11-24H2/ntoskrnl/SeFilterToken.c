/*
 * XREFs of SeFilterToken @ 0x14078F630
 * Callers:
 *     CmpCreateRegistryProcessToken @ 0x1407D858C (CmpCreateRegistryProcessToken.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 */

NTSTATUS __stdcall SeFilterToken(
        PACCESS_TOKEN ExistingToken,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PACCESS_TOKEN *FilteredToken)
{
  PACCESS_TOKEN *v6; // rdi
  ULONG GroupCount; // ebx
  ULONG v8; // r10d
  SID_AND_ATTRIBUTES *Groups; // r11
  ULONG PrivilegeCount; // esi
  int v11; // r14d
  ULONG i; // ecx
  NTSTATUS inserted; // ebx
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v6 = FilteredToken;
  GroupCount = 0;
  Object = 0LL;
  v8 = 0;
  Groups = 0LL;
  PrivilegeCount = 0;
  v11 = (int)ExistingToken;
  *FilteredToken = 0LL;
  if ( SidsToDisable )
    GroupCount = SidsToDisable->GroupCount;
  if ( PrivilegesToDelete )
    PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
  if ( RestrictedSids )
  {
    v8 = RestrictedSids->GroupCount;
    Groups = RestrictedSids->Groups;
    for ( i = 0; i < v8; ++i )
    {
      if ( Groups[i].Attributes )
        return -1073741811;
    }
  }
  inserted = SepFilterToken(
               v11,
               0,
               Flags,
               GroupCount,
               (unsigned __int64)SidsToDisable->Groups & -(__int64)(SidsToDisable != 0LL),
               PrivilegeCount,
               (unsigned __int64)PrivilegesToDelete->Privileges & -(__int64)(PrivilegesToDelete != 0LL),
               v8,
               (__int64)Groups,
               0,
               (__int64)&Object);
  if ( inserted >= 0 )
  {
    inserted = ObInsertObjectEx(Object, 0, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      SepFinalizeTokenAcls(Object);
      *v6 = Object;
    }
  }
  return inserted;
}
