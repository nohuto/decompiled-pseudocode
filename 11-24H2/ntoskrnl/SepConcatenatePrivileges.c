/*
 * XREFs of SepConcatenatePrivileges @ 0x1409C23F0
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x14084DE00 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14084E400 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObCheckObjectAccess @ 0x14087E5F0 (ObCheckObjectAccess.c)
 *     IopCheckBackupRestorePrivilege @ 0x1408AA2E0 (IopCheckBackupRestorePrivilege.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SepConcatenatePrivileges(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // r9d
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
      v5 = 12 * *a1 + 8;
    else
      v5 = 8;
  }
  else
  {
    v5 = 0;
  }
  memmove((char *)a1 + v5, a3 + 2, 12 * *a3);
  result = *a3;
  *a1 += result;
  return result;
}
