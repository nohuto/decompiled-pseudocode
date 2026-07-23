/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x1405DC634
 * Callers:
 *     RtlStdLogStackTrace @ 0x14048A9EC (RtlStdLogStackTrace.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405DC574 (RtlpStdGetSpaceForTrace.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

KSPIN_LOCK __fastcall RtlpStdLogCapturedStackTrace(PKSPIN_LOCK SpinLock, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // rbp
  __int64 v6; // rdx
  __int64 v8; // r14
  KSPIN_LOCK i; // rbx
  _SLIST_ENTRY *SpaceForTrace; // rax
  __int16 v11; // cx
  __int64 v12; // rdx
  __int16 v13; // cx

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v6 = a3 % *((_DWORD *)SpinLock + 180);
  v8 = 3 * v6;
  _InterlockedAdd((volatile signed __int32 *)SpinLock + 44, 1u);
  LOBYTE(SpinLock[3 * (unsigned int)v6 + 93]) = KeAcquireSpinLockRaiseToDpc(&SpinLock[3 * (unsigned int)v6 + 92]);
  for ( i = SpinLock[v8 + 91]; i; i = *(_QWORD *)i )
  {
    if ( *(_WORD *)(i + 14) == *(_WORD *)(a2 + 14)
      && RtlCompareMemory((const void *)(i + 16), (const void *)(a2 + 16), v4) == v4 )
    {
      goto LABEL_8;
    }
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace((volatile signed __int32 *)SpinLock, *(_WORD *)(a2 + 14));
  i = (KSPIN_LOCK)SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)SpinLock + 50, 1u);
    goto LABEL_11;
  }
  memmove(&SpaceForTrace[1], (const void *)(a2 + 16), v4);
  v11 = *(_WORD *)(a2 + 14);
  *(_WORD *)(i + 8) &= 0xF800u;
  *(_WORD *)(i + 14) = v11;
  v12 = 3LL * (a3 % *((_DWORD *)SpinLock + 180));
  *(_QWORD *)i = SpinLock[3 * (a3 % *((_DWORD *)SpinLock + 180)) + 91];
  SpinLock[v12 + 91] = i;
LABEL_8:
  v13 = *(_WORD *)(i + 8);
  if ( (v13 & 0x7FF) != 0x7FF )
    *(_WORD *)(i + 8) = v13 ^ (v13 ^ (v13 + 1)) & 0x7FF;
LABEL_11:
  KeReleaseSpinLock(&SpinLock[v8 + 92], SpinLock[v8 + 93]);
  return i;
}
