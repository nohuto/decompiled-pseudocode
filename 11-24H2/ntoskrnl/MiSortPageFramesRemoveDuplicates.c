/*
 * XREFs of MiSortPageFramesRemoveDuplicates @ 0x14067594C
 * Callers:
 *     MiGetListOfPendingBadPages @ 0x140674CA0 (MiGetListOfPendingBadPages.c)
 *     MmEnumerateBadPages @ 0x1407ED768 (MmEnumerateBadPages.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 */

__int64 __fastcall MiSortPageFramesRemoveDuplicates(_QWORD *a1, size_t a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r9

  v3 = a1;
  qsort(a1, a2, 8uLL, (int (__cdecl *)(const void *, const void *))MiBadPageSort);
  v4 = 0LL;
  v5 = 0LL;
  v6 = v3;
  if ( a2 )
  {
    while ( v5 )
    {
      if ( ((*(v3 - 1) ^ *v6) & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        *v3 = *v6;
        goto LABEL_6;
      }
LABEL_7:
      ++v6;
      if ( ++v5 >= a2 )
        return v4;
    }
    *v3 = *v6;
LABEL_6:
    ++v3;
    ++v4;
    goto LABEL_7;
  }
  return v4;
}
