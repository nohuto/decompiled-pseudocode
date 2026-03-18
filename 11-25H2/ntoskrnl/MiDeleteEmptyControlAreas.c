/*
 * XREFs of MiDeleteEmptyControlAreas @ 0x140459924
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140459644 (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSegmentDelete @ 0x140A095FC (MiSegmentDelete.c)
 */

__int64 __fastcall MiDeleteEmptyControlAreas(__int64 a1)
{
  __int64 **v1; // rdi
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  __int64 *v4; // rbx
  unsigned __int8 v5; // bp
  __int64 *v6; // rax
  __int64 *v8; // rax

  v1 = (__int64 **)(a1 + 1928);
  v2 = (volatile LONG *)(a1 + 1728);
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    v4 = *v1;
    v5 = v3;
    if ( *v1 == (__int64 *)v1 )
      return MiReleaseSpinLockExclusive(v2, v3);
    if ( (__int64 **)v4[1] != v1 || (v6 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4) )
LABEL_9:
      __fastfail(3u);
    *v1 = v6;
    v6[1] = (__int64)v1;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
    {
      *((_DWORD *)v4 + 12) &= ~0x10000000u;
      v4[1] = (__int64)v4;
      *v4 = (__int64)v4;
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
      MiReleaseSpinLockExclusive((_DWORD *)v4 + 16, v5);
      MiSegmentDelete(v4 - 1);
    }
    else
    {
      v8 = *v1;
      if ( (__int64 **)(*v1)[1] != v1 )
        goto LABEL_9;
      *v4 = (__int64)v8;
      v4[1] = (__int64)v1;
      v8[1] = (__int64)v4;
      *v1 = v4;
      MiReleaseSpinLockExclusive(v2, v5);
    }
  }
}
