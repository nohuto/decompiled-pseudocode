/*
 * XREFs of RIMSignalAllDispositionWaiters @ 0x14014AEF0
 * Callers:
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     CleanupRimDevObjInUserModeCallback @ 0x1401A3B98 (CleanupRimDevObjInUserModeCallback.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RIMSignalAllDispositionWaiters(__int64 a1)
{
  LONG v1; // r8d
  LONG result; // eax

  v1 = *(_DWORD *)(a1 + 1104);
  if ( v1 )
  {
    result = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 1096), 0, v1, 0);
    *(_DWORD *)(a1 + 1104) = 0;
  }
  return result;
}
