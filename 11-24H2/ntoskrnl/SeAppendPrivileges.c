/*
 * XREFs of SeAppendPrivileges @ 0x1409D2470
 * Callers:
 *     IopCreateSecurityCheck @ 0x14046DA5C (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x1407C1620 (CMFCheckAccess.c)
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     ObpCheckTraverseAccess @ 0x140867E80 (ObpCheckTraverseAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1408682F0 (ObCheckCreateObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14087AD00 (ObpAdjustCreatorAccessState.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SepConcatenatePrivileges @ 0x1409D25C0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rsi
  _DWORD *v5; // rbx
  ULONG PrivilegeCount; // r8d
  int v7; // edx
  unsigned int v8; // r14d
  unsigned int v10; // r14d
  void *Pool2; // rbx
  _DWORD *v12; // rdx
  __int64 v13; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  v5 = *AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + PrivilegeCount <= 3 )
  {
    if ( v5 )
    {
      if ( v7 )
        v8 = 12 * v7 + 8;
      else
        v8 = 8;
    }
    else
    {
      v8 = 0;
    }
    memmove((char *)v5 + v8, Privileges->Privilege, 12 * PrivilegeCount);
    *v5 += Privileges->PrivilegeCount;
    return 0;
  }
  v10 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v12 = *AuxData;
    if ( *AuxData )
    {
      if ( *v12 )
        v10 = 12 * *v12 + 8;
      else
        v10 = 8;
    }
    memmove(Pool2, v12, v10);
    SepConcatenatePrivileges(Pool2, v13, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = Pool2;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
