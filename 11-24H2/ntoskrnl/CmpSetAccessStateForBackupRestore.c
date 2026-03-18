/*
 * XREFs of CmpSetAccessStateForBackupRestore @ 0x1409174CC
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x140868520 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14091735C (CmpCheckKeySecurityDescriptorAccess.c)
 * Callees:
 *     SeSinglePrivilegeCheckEx @ 0x140853CA0 (SeSinglePrivilegeCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x1409175B0 (SepAdjustAccessStateForConstraints.c)
 */

__int64 __fastcall CmpSetAccessStateForBackupRestore(_DWORD *a1, char a2, __int64 a3, char a4)
{
  _DWORD *v4; // rbx
  _DWORD *v9; // r14
  __int64 v10; // r8

  v4 = a1 + 5;
  a1[5] = 0;
  if ( (unsigned __int8)SeSinglePrivilegeCheckEx(*(_QWORD *)&SeBackupPrivilege, (__int64)(a1 + 8), a2) )
  {
    a1[3] |= 2u;
    v9 = a1 + 5;
    *v4 |= 0x1020019u;
  }
  else
  {
    v9 = v4;
  }
  if ( (unsigned __int8)SeSinglePrivilegeCheckEx(*(_QWORD *)&SeRestorePrivilege, (__int64)(a1 + 8), a2) )
  {
    a1[3] |= 4u;
    *v4 |= 0x10F0006u;
  }
  else
  {
    v9 = v4;
  }
  if ( a4 )
    a1[6] = *v4;
  if ( !*v9 )
    return 3221225506LL;
  LOBYTE(v10) = 1;
  SepAdjustAccessStateForConstraints(CmKeyObjectType, a3, v10, a1);
  a1[4] = a1[6] & ~*v9;
  return 0LL;
}
