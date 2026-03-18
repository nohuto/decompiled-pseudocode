/*
 * XREFs of MiDereferenceAnyActiveHugeContext @ 0x1403C7EE0
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x1403C6608 (MiDeleteZeroThreadContext.c)
 *     MiBackgroundZeroNodePages @ 0x1403C6F60 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiDereferenceHugeContext @ 0x1404CFD8C (MiDereferenceHugeContext.c)
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
