/*
 * XREFs of ?IsPriorityFloorSet@tagTHREADINFO@@QEAA_NW4tagThreadPriorityFloor@@@Z @ 0x1400C01B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPriorityFloorRequester@@YA?AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z @ 0x1400C0248 (-GetPriorityFloorRequester@@YA-AW4tagThreadPriorityFloorRequester@@W4tagThreadPriorityFloor@@@Z.c)
 */

char __fastcall tagTHREADINFO::IsPriorityFloorSet(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int PriorityFloorRequester; // eax

  v3 = a1 + 1728;
  v4 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  PriorityFloorRequester = GetPriorityFloorRequester(a2);
  LODWORD(v4) = *(_DWORD *)(v4 + 1740);
  LOBYTE(v4) = ((unsigned int)v4 & PriorityFloorRequester) == (unsigned int)GetPriorityFloorRequester(a2);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
