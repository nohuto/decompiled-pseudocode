/*
 * XREFs of MiDeleteVadHotPatchState @ 0x140AB2524
 * Callers:
 *     MiFinishVadDeletion @ 0x14044C9BC (MiFinishVadDeletion.c)
 * Callees:
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiGetVadWakeList @ 0x14044CC20 (MiGetVadWakeList.c)
 *     MiDeleteHotPatchEntry @ 0x1407F2550 (MiDeleteHotPatchEntry.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

int __fastcall MiDeleteVadHotPatchState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 VadWakeList; // rax
  void *v4; // rdi
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  VadWakeList = MiGetVadWakeList(a1, 512);
  v4 = (void *)VadWakeList;
  v5 = 0LL;
  if ( VadWakeList )
  {
    v5 = *(_QWORD *)(VadWakeList + 8);
    *(_DWORD *)(v5 + 68) |= 2u;
    if ( (*(_DWORD *)(v5 + 68) & 1) != 0 )
      v5 = 0LL;
  }
  MiUnlockVad((__int64)CurrentThread, a1);
  if ( v4 )
  {
    if ( v5 )
      MiDeleteHotPatchEntry((char *)v5);
    ExFreePoolWithTag(v4, 0);
  }
  return MiLockVad((__int64)CurrentThread, a1);
}
