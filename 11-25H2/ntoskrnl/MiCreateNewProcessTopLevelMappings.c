/*
 * XREFs of MiCreateNewProcessTopLevelMappings @ 0x1403FDD48
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiCopyTopLevelMappings @ 0x1403FDDF4 (MiCopyTopLevelMappings.c)
 */

__int64 __fastcall MiCreateNewProcessTopLevelMappings(__int64 a1, __int64 a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf

  v4 = ExAcquireSpinLockExclusive(&dword_140E37180);
  MiCopyTopLevelMappings(a1, a2);
  v5 = (_QWORD *)qword_140E2D820;
  v6 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2D820 != &qword_140E2D818 )
    __fastfail(3u);
  *v6 = &qword_140E2D818;
  *(_QWORD *)(a1 + 1352) = v5;
  v7 = a2 << 12;
  v8 = KiFlushPcid == 0;
  *v5 = v6;
  qword_140E2D820 = a1 + 1344;
  if ( !v8 )
    v7 |= 2uLL;
  *(_QWORD *)(a1 + 40) = v7;
  _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x800u);
  return MiReleaseSpinLockExclusive(&dword_140E37180, v4);
}
