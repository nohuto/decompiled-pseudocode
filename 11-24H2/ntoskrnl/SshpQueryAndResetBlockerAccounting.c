/*
 * XREFs of SshpQueryAndResetBlockerAccounting @ 0x140474C40
 * Callers:
 *     SshNotifySystemSessionChange @ 0x140A42178 (SshNotifySystemSessionChange.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpStopBlockerAccounting @ 0x140474E80 (SshpStopBlockerAccounting.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall SshpQueryAndResetBlockerAccounting(PKSPIN_LOCK SpinLock, _OWORD *a2, _OWORD *a3, _BYTE *a4)
{
  KIRQL v8; // r14
  int v9; // eax

  v8 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( (SpinLock[1] & 2) != 0 )
    SshpStopBlockerAccounting(SpinLock, MEMORY[0xFFFFF78000000008]);
  *a2 = *(_OWORD *)(SpinLock + 5);
  a2[1] = *(_OWORD *)(SpinLock + 7);
  a2[2] = *(_OWORD *)(SpinLock + 9);
  a2[3] = *(_OWORD *)(SpinLock + 11);
  a2[4] = *(_OWORD *)(SpinLock + 13);
  a2[5] = *(_OWORD *)(SpinLock + 15);
  a2[6] = *(_OWORD *)(SpinLock + 17);
  a2[7] = *(_OWORD *)(SpinLock + 19);
  *a3 = *(_OWORD *)(SpinLock + 21);
  a3[1] = *(_OWORD *)(SpinLock + 23);
  a3[2] = *(_OWORD *)(SpinLock + 25);
  a3[3] = *(_OWORD *)(SpinLock + 27);
  a3[4] = *(_OWORD *)(SpinLock + 29);
  a3[5] = *(_OWORD *)(SpinLock + 31);
  a3[6] = *(_OWORD *)(SpinLock + 33);
  a3[7] = *(_OWORD *)(SpinLock + 35);
  memset_0(SpinLock + 5, 0, 0x80uLL);
  memset_0(SpinLock + 21, 0, 0x80uLL);
  v9 = *((_DWORD *)SpinLock + 2);
  *a4 = 0;
  if ( (v9 & 4) != 0 )
    *a4 = 1;
  KeReleaseSpinLock(SpinLock, v8);
}
