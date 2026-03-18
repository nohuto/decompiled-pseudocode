/*
 * XREFs of MiUnlinkAccelerator @ 0x140691050
 * Callers:
 *     MiDeleteAcceleratorDescriptor @ 0x140415BB8 (MiDeleteAcceleratorDescriptor.c)
 *     MiDeleteHardwareAccelerators @ 0x140690ACC (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 */

void __fastcall MiUnlinkAccelerator(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 **v3; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 *v6; // rbx

  v2 = *a1;
  if ( *(__int64 **)(v2 + 8) != a1 || (v3 = (__int64 **)a1[1], *v3 != a1) )
    __fastfail(3u);
  *v3 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  --dword_140E37450;
  v4 = *(_QWORD *)(384LL * *((unsigned int *)a1 + 6) + qword_140E2DAF8 + 376);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  --*(_WORD *)(v4 + 18);
  --*(_WORD *)(v4 + 24);
  --word_140E2DAEA;
  --word_140E2DAF0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v5 = (__int64 *)a1[5];
  if ( v5 )
  {
    do
    {
      v6 = (__int64 *)*v5;
      KeSignalGate((_DWORD *)v5 + 2, 1LL);
      v5 = v6;
    }
    while ( v6 );
  }
}
