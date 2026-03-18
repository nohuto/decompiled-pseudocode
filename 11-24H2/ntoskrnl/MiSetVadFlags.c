/*
 * XREFs of MiSetVadFlags @ 0x1402B8D5C
 * Callers:
 *     MiSetVadDeleted @ 0x1402B94A0 (MiSetVadDeleted.c)
 *     MiRemoveSecureEntry @ 0x1404F1C5C (MiRemoveSecureEntry.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F191C (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407F2B54 (MiGetVadForHotPatchInProgress.c)
 *     MiMapViewOfDataSection @ 0x1408E0820 (MiMapViewOfDataSection.c)
 *     MiAddSecureEntry @ 0x1409C3F30 (MiAddSecureEntry.c)
 *     MiSecureVad @ 0x1409EA8FC (MiSecureVad.c)
 *     MiCreatePatchSectionRequest @ 0x140AAB9A8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockVadCore @ 0x1403FD500 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x140429670 (MiUnlockVadCore.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, __int64 a2, int a3)
{
  char v4; // si
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // di
  int v7; // ebx
  signed __int32 v8; // eax
  int v9; // r8d
  int v10; // esi
  unsigned __int32 v11; // ecx
  __int64 v12; // rdx
  signed __int32 v13; // ett
  __int64 v14; // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v7 = v4 & 2;
  if ( (v4 & 2) != 0 )
    MiLockVadTree(3LL);
  MiLockVadCore(v5, 1LL);
  v8 = *(_DWORD *)(v5 + 48);
  v9 = v4 & 1;
  v10 = v4 & 4;
  do
  {
    v11 = v8;
    if ( v9 )
      v11 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(8 * a3)) & 8;
    v12 = v11;
    if ( v7 )
      v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(4 * a3)) & 4;
    if ( v10 )
    {
      v12 = (v11 ^ (a3 << 23)) & 0x1800000;
      v11 ^= v12;
    }
    v13 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 48), v11, v8);
  }
  while ( v13 != v8 );
  LOBYTE(v12) = 17;
  MiUnlockVadCore(v5, v12);
  if ( v7 )
    MiUnlockVadTree(3, 0x11u);
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
