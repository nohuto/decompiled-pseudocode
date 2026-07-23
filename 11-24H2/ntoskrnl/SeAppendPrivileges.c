/*
 * XREFs of SeAppendPrivileges @ 0x1409C22A0
 * Callers:
 *     IopCreateSecurityCheck @ 0x1403B5AE0 (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x1407C2854 (CMFCheckAccess.c)
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     ObpCheckTraverseAccess @ 0x14086C170 (ObpCheckTraverseAccess.c)
 *     ObCheckCreateObjectAccess @ 0x14086C5E0 (ObCheckCreateObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14087EBB0 (ObpAdjustCreatorAccessState.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepConcatenatePrivileges @ 0x1409C23F0 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rsi
  _DWORD *v5; // rbx
  ULONG PrivilegeCount; // r8d
  int v7; // edx
  unsigned int v8; // r14d
  int v10; // ecx
  unsigned int v11; // r14d
  int v12; // eax
  void *Pool2; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rdx

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
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  v11 = 0;
  if ( v5 )
  {
    if ( v7 )
      v12 = 12 * v7 + 8;
    else
      v12 = 8;
  }
  else
  {
    v12 = 0;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)(v10 + v12), 0x72506553u);
  if ( Pool2 )
  {
    v14 = *AuxData;
    if ( *AuxData )
    {
      if ( *v14 )
        v11 = 12 * *v14 + 8;
      else
        v11 = 8;
    }
    memmove(Pool2, v14, v11);
    SepConcatenatePrivileges(Pool2, v15, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = Pool2;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
