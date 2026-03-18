/*
 * XREFs of MiDeleteVadHotPatchState @ 0x140AAD48C
 * Callers:
 *     MiFinishVadDeletion @ 0x1402A3AE0 (MiFinishVadDeletion.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiDeleteHotPatchEntry @ 0x1407E26B0 (MiDeleteHotPatchEntry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
