/*
 * XREFs of SepConcatenatePrivileges @ 0x1409D25C0
 * Callers:
 *     ObpCreateHandle @ 0x14084DAA0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x140851390 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140851B40 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
 *     IopCheckBackupRestorePrivilege @ 0x1408A1C40 (IopCheckBackupRestorePrivilege.c)
 *     SeAppendPrivileges @ 0x1409D2470 (SeAppendPrivileges.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
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
