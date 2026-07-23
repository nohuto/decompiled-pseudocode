/*
 * XREFs of MiCreateNewProcessTopLevelMappings @ 0x14038D2BC
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiCopyTopLevelMappings @ 0x14038D368 (MiCopyTopLevelMappings.c)
 */

__int64 __fastcall MiCreateNewProcessTopLevelMappings(__int64 a1, __int64 a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  bool v8; // zf

  v4 = ExAcquireSpinLockExclusive(&SpinLock);
  MiCopyTopLevelMappings(a1, a2);
  v5 = (_QWORD *)qword_140E2DBA0;
  v6 = (_QWORD *)(a1 + 1344);
  if ( *(__int64 **)qword_140E2DBA0 != &qword_140E2DB98 )
    __fastfail(3u);
  *v6 = &qword_140E2DB98;
  *(_QWORD *)(a1 + 1352) = v5;
  v7 = a2 << 12;
  v8 = KiFlushPcid == 0;
  *v5 = v6;
  qword_140E2DBA0 = a1 + 1344;
  if ( !v8 )
    v7 |= 2uLL;
  *(_QWORD *)(a1 + 40) = v7;
  _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x800u);
  return MiReleaseSpinLockExclusive(&SpinLock, v4);
}
