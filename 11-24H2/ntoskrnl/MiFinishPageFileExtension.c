/*
 * XREFs of MiFinishPageFileExtension @ 0x1404C4B98
 * Callers:
 *     MiStoreExtendVirtualPagefile @ 0x1404F3E10 (MiStoreExtendVirtualPagefile.c)
 *     MiAttemptPageFileExtension @ 0x1407EE36C (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 *     MiUpdateReserveClusterInfo @ 0x14045147C (MiUpdateReserveClusterInfo.c)
 */

LONG __fastcall MiFinishPageFileExtension(__int64 a1, __int64 a2, ULONG a3)
{
  _DWORD *v3; // rbp
  KIRQL v7; // al
  __int64 v8; // r14
  ULONG v9; // esi
  unsigned __int8 v10; // r12
  char v11; // di
  LONG result; // eax

  v3 = (_DWORD *)(a2 + 200);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 200));
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_DWORD *)a2;
  v10 = v7;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), *(_DWORD *)a2, a3);
  if ( (*(_BYTE *)(a2 + 172) & 0x40) == 0 )
    RtlClearBits((PRTL_BITMAP)(v8 + 24), v9, a3);
  *(_DWORD *)a2 += a3;
  *(_DWORD *)(a2 + 12) += a3;
  *(_DWORD *)(a2 + 20) += a3;
  v11 = *(_BYTE *)(a2 + 174) & 1;
  if ( (*(_BYTE *)(a2 + 172) & 0x40) == 0 )
  {
    ++*(_DWORD *)(a2 + 96);
    MiCoalescePageFileBitmapsCache(a2, 0, v9);
    MiUpdateReserveClusterInfo(*(_QWORD *)(a2 + 216), 0LL, 0);
  }
  result = MiReleaseSpinLockExclusive(v3, v10);
  if ( v11 )
    return KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
  return result;
}
