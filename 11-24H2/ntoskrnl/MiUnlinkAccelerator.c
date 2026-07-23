/*
 * XREFs of MiUnlinkAccelerator @ 0x140692120
 * Callers:
 *     MiDeleteAcceleratorDescriptor @ 0x140271A18 (MiDeleteAcceleratorDescriptor.c)
 *     MiDeleteHardwareAccelerators @ 0x140691B9C (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiUnlinkAccelerator(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rax
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v6; // rbx

  v2 = *a1;
  if ( *(__int64 **)(v2 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
    __fastfail(3u);
  *v3 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  --dword_140E37590;
  v4 = *(_QWORD *)(384LL * *((unsigned int *)a1 + 6) + qword_140E2DC38 + 376);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  --*(_WORD *)(v4 + 18);
  --*(_WORD *)(v4 + 24);
  --word_140E2DC2A;
  --word_140E2DC30;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v5 = (volatile signed __int32 *)a1[5];
  if ( v5 )
  {
    do
    {
      v6 = *(volatile signed __int32 **)v5;
      KeSignalGate(v5 + 2, 1LL);
      v5 = v6;
    }
    while ( v6 );
  }
}
