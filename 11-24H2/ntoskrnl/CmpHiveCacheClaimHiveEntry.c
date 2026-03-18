/*
 * XREFs of CmpHiveCacheClaimHiveEntry @ 0x1407E5310
 * Callers:
 *     CmpMachineHiveCacheClaimEntry @ 0x1407D8F1C (CmpMachineHiveCacheClaimEntry.c)
 * Callees:
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmSiWaitForSingleEvent @ 0x140493968 (CmSiWaitForSingleEvent.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1407E5678 (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x1407E56DC (CmpHiveCacheEntryLockRelease.c)
 */

__int64 __fastcall CmpHiveCacheClaimHiveEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  __int64 v8; // rax

  if ( a1 && a4 )
  {
    if ( *(_DWORD *)(a1 + 336) != 1 )
    {
      CmSiWaitForSingleEvent(a1 + 272);
      CmpHiveCacheEntryLockAcquire(a1);
      if ( *(_DWORD *)(a1 + 168) == 2 )
      {
        v8 = *(_QWORD *)(a1 + 368);
        *(_QWORD *)(a1 + 368) = 0LL;
        *(_QWORD *)a4 = v8;
        *(_BYTE *)(a4 + 8) = *(_BYTE *)(a1 + 380);
        v7 = 0;
        goto LABEL_11;
      }
      v7 = -1073741431;
      SetFailureLocation(a5, 0, 42, -1073741431, 32);
LABEL_10:
      if ( *(_DWORD *)(a1 + 168) == 4 )
      {
LABEL_12:
        CmpHiveCacheEntryLockRelease(a1);
        return v7;
      }
LABEL_11:
      *(_DWORD *)(a1 + 168) = 3;
      goto LABEL_12;
    }
    v7 = -1073741822;
LABEL_9:
    CmpHiveCacheEntryLockAcquire(a1);
    goto LABEL_10;
  }
  v7 = -1073741811;
  SetFailureLocation(a5, 0, 42, -1073741811, 16);
  if ( a1 )
    goto LABEL_9;
  return v7;
}
