/*
 * XREFs of MiDeleteEmptyControlAreas @ 0x1403EE1FC
 * Callers:
 *     MiRemoveUnusedSegments @ 0x1403EDF30 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
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
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v4 + 16) )
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
