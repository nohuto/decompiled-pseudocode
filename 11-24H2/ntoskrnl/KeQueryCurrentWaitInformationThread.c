/*
 * XREFs of KeQueryCurrentWaitInformationThread @ 0x1405BF780
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 */

__int64 __fastcall KeQueryCurrentWaitInformationThread(__int64 a1, _BYTE *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  char v9; // al
  char v10; // r13
  int v11; // r12d
  int v12; // esi
  unsigned __int8 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v14 = 0;
  KiAcquireThreadLockRaiseToDpc(a1, &v14);
  if ( *(_BYTE *)(a1 + 388) == 5 && ((v9 = *(_BYTE *)(a1 + 112) & 7, v9 == 1) || (unsigned __int8)(v9 - 3) <= 3u) )
  {
    v10 = *(_BYTE *)(a1 + 391);
    v11 = *(unsigned __int8 *)(a1 + 643);
    v12 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
    KiReleaseThreadLockLowerIrql(a1, v14);
    if ( a2 )
      *a2 = v10;
    if ( a3 )
      *a3 = v11;
    if ( a4 )
      *a4 = KeMaximumIncrement * v12;
    return 1;
  }
  else
  {
    KiReleaseThreadLockLowerIrql(a1, v14);
  }
  return v5;
}
