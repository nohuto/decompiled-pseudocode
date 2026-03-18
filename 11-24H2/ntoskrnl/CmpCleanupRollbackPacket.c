/*
 * XREFs of CmpCleanupRollbackPacket @ 0x14097BC50
 * Callers:
 *     CmpTryToRundownHive @ 0x1402C6840 (CmpTryToRundownHive.c)
 *     CmpSaveBootControlSet @ 0x1407CC764 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CCF24 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 */

void __fastcall CmpCleanupRollbackPacket(__int64 a1)
{
  __int64 i; // rdi
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v4 )
    {
      if ( (v4 & 1) != 0 )
        CmpTransDereferenceTransaction(v4);
      else
        ObfDereferenceObject((PVOID)v4);
    }
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v3 )
    CmSiFreeMemory(v3);
}
