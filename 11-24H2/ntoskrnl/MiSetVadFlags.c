/*
 * XREFs of MiSetVadFlags @ 0x14036049C
 * Callers:
 *     MiSetVadDeleted @ 0x140360BE0 (MiSetVadDeleted.c)
 *     MiRemoveSecureEntry @ 0x1404EF6FC (MiRemoveSecureEntry.c)
 *     MiApplyImageHotPatchRequest @ 0x1407F1EEC (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x1407F3124 (MiGetVadForHotPatchInProgress.c)
 *     MiAddSecureEntry @ 0x1408DC0A0 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 *     MiCreatePatchSectionRequest @ 0x140AE969C (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLockVadCore @ 0x1403DAE20 (MiLockVadCore.c)
 *     MiUnlockVadCore @ 0x14041D7C0 (MiUnlockVadCore.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiSetVadFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  char v5; // si
  __int64 v6; // rbp
  unsigned __int8 CurrentIrql; // di
  int v8; // ebx
  signed __int32 v9; // eax
  int v10; // r8d
  int v11; // esi
  unsigned __int32 v12; // ecx
  __int64 v13; // rdx
  signed __int32 v14; // ett
  __int64 v15; // rdx
  __int64 result; // rax

  v4 = a3;
  v5 = a2;
  v6 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, a2);
  }
  v8 = v5 & 2;
  if ( (v5 & 2) != 0 )
    MiLockVadTree(3, a2, a3, a4);
  MiLockVadCore(v6, 1LL);
  v9 = *(_DWORD *)(v6 + 48);
  v10 = v5 & 1;
  v11 = v5 & 4;
  do
  {
    v12 = v9;
    if ( v10 )
      v12 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8 * v4)) & 8;
    v13 = v12;
    if ( v8 )
      v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(4 * v4)) & 4;
    if ( v11 )
    {
      v13 = (v12 ^ (v4 << 23)) & 0x1800000;
      v12 ^= v13;
    }
    v14 = v9;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 48), v12, v9);
  }
  while ( v14 != v9 );
  LOBYTE(v13) = 17;
  MiUnlockVadCore(v6, v13);
  if ( v8 )
    MiUnlockVadTree(3, 0x11u);
  if ( KiIrqlFlags )
  {
    LOBYTE(v15) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
