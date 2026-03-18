/*
 * XREFs of SeAppendPrivileges @ 0x140862AC0
 * Callers:
 *     IopCreateSecurityCheck @ 0x14046F3F0 (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x1407B3114 (CMFCheckAccess.c)
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     ObpAdjustCreatorAccessState @ 0x140862780 (ObpAdjustCreatorAccessState.c)
 *     ObpCheckTraverseAccess @ 0x14091495C (ObpCheckTraverseAccess.c)
 *     ObCheckCreateObjectAccess @ 0x140915F70 (ObCheckCreateObjectAccess.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SepConcatenatePrivileges @ 0x140862710 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rsi
  _DWORD *v5; // rbx
  ULONG PrivilegeCount; // r8d
  int v7; // edx
  unsigned int v8; // r14d
  unsigned int v10; // r14d
  _DWORD *Pool2; // rbx
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
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
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
    SepConcatenatePrivileges(Pool2, v13, &Privileges->PrivilegeCount);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = Pool2;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
