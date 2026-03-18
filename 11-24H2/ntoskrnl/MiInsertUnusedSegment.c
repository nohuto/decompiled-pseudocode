/*
 * XREFs of MiInsertUnusedSegment @ 0x14037016C
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x140417040 (MiCleanSection.c)
 *     MiSetDeleteOnClose @ 0x1404D3B38 (MiSetDeleteOnClose.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140672268 (MiMakeUnusedSegmentDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     MiComputePagedPoolSegmentBytes @ 0x14036FD74 (MiComputePagedPoolSegmentBytes.c)
 *     MiReleaseControlAreaCharges @ 0x14037024C (MiReleaseControlAreaCharges.c)
 *     MiConvertStaticSubsections @ 0x140370358 (MiConvertStaticSubsections.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  int v4; // eax
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  _QWORD *v10; // rdx

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 )
    v1 = MiConvertStaticSubsections();
  v3 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 1728));
  if ( !v1 )
    v1 = MiReleaseControlAreaCharges(a1, 1LL);
  v4 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = v4 | 0x10000000;
  v5 = (_QWORD *)(a1 + 8);
  if ( (v4 & 0x40000) != 0 )
  {
    v10 = *(_QWORD **)(v3 + 1984);
    if ( *v10 != v3 + 1976 )
LABEL_7:
      __fastfail(3u);
    *v5 = v3 + 1976;
    *(_QWORD *)(a1 + 16) = v10;
    *v10 = v5;
    *(_QWORD *)(v3 + 1984) = v5;
    ++*(_DWORD *)(v3 + 1732);
    if ( !*(_BYTE *)(v3 + 2072) )
    {
      *(_BYTE *)(v3 + 2072) = 1;
      KiSetTimerEx(v3 + 2008, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
    }
  }
  else
  {
    v6 = *(_QWORD **)(v3 + 2104);
    if ( *v6 != v3 + 2096 )
      goto LABEL_7;
    *v5 = v3 + 2096;
    *(_QWORD *)(a1 + 16) = v6;
    *v6 = v5;
    *(_QWORD *)(v3 + 2104) = v5;
  }
  v7 = MiComputePagedPoolSegmentBytes(a1);
  *(_QWORD *)(v3 + 2088) += v7;
  v8 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1728));
  _InterlockedAdd64(&qword_140E2CC18, v8);
  return v1;
}
