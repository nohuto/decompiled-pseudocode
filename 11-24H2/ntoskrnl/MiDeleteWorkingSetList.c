/*
 * XREFs of MiDeleteWorkingSetList @ 0x14047CD20
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiPruneProcessLargePageCaches @ 0x140353F9C (MiPruneProcessLargePageCaches.c)
 *     MiFreeProcessLargePageCache @ 0x140693AC4 (MiFreeProcessLargePageCache.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteWorkingSetList(__int64 a1)
{
  void *v1; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  KIRQL v5; // al
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
    {
      v3 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 1048LL);
      if ( v3 )
      {
        v4 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
        v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 16448));
        v6 = *v3;
        if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
          __fastfail(3u);
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        MiReleaseSpinLockExclusive((_DWORD *)(v4 + 16448), v5);
        MiFreeProcessLargePageCache(v4, v3);
        MiPruneProcessLargePageCaches(v4, 0);
        ExFreePoolWithTag(v3, 0);
      }
      ExFreePoolWithTag(v1, 0);
    }
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
