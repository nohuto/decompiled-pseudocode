/*
 * XREFs of SepConcatenatePrivileges @ 0x140862710
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x1408551F0 (ObpGrantAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1408559A0 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140855F70 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopCheckBackupRestorePrivilege @ 0x140861600 (IopCheckBackupRestorePrivilege.c)
 *     SeAppendPrivileges @ 0x140862AC0 (SeAppendPrivileges.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
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
