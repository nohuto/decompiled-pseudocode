/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x14044E780
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x1404527B0 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(_QWORD *a1)
{
  bool v1; // di
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  unsigned __int8 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v7 = 0;
  v2 = MiLockSectionControlArea(a1, 1, &v7);
  v3 = v2;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 56);
    if ( *(_QWORD *)(v3 + 40) )
      v1 = (v4 & 8) != 0;
    else
      *(_DWORD *)(v3 + 56) = v4 | 8;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
    if ( v7 != 17 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = v7;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
      }
      __writecr8(v7);
    }
    LOBYTE(v2) = v1;
  }
  return v2;
}
