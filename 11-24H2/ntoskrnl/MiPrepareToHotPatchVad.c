/*
 * XREFs of MiPrepareToHotPatchVad @ 0x1407F6280
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiBeginHoldingDirtyFaults @ 0x14067E020 (MiBeginHoldingDirtyFaults.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MiInitializeImageHotPatchContext @ 0x140ABBDDC (MiInitializeImageHotPatchContext.c)
 */

__int64 __fastcall MiPrepareToHotPatchVad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int16 a6,
        _DWORD *a7,
        _BYTE *a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v13; // ebx

  CurrentThread = KeGetCurrentThread();
  MiLockVad((__int64)CurrentThread, a2);
  if ( (unsigned int)MiVadDeleted(a2) )
  {
    v13 = -1073741800;
  }
  else
  {
    MiInitializeImageHotPatchContext(a3, a6, a2);
    if ( !a9
      || (MiBeginHoldingDirtyFaults(a1, (_QWORD *)(a3 + 88)),
          *(_DWORD *)(a3 + 156) |= 2u,
          v13 = MiPrepareToHotPatchImage(a3, a7, a8),
          v13 >= 0) )
    {
      v13 = 0;
    }
  }
  MiUnlockVad((__int64)CurrentThread, a2);
  return (unsigned int)v13;
}
