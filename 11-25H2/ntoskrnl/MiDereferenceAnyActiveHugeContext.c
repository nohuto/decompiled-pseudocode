/*
 * XREFs of MiDereferenceAnyActiveHugeContext @ 0x140440A30
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x140440768 (MiDeleteZeroThreadContext.c)
 *     MiBackgroundZeroNodePages @ 0x1404407D0 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 */

void __fastcall MiDereferenceAnyActiveHugeContext(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  KIRQL v4; // bl

  v2 = *(_QWORD *)(a1 + 584);
  if ( v2 )
  {
    v3 = 57216LL * *(unsigned int *)(v2 + 568)
       + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 336) + 176LL) + 48LL) + 16LL);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 15224));
    MiDereferenceHugeContext(a1);
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 15224), v4);
  }
}
