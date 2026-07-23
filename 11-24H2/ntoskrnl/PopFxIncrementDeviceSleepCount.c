/*
 * XREFs of PopFxIncrementDeviceSleepCount @ 0x14048BAFC
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1404A5D50 (PoFxStartDevicePowerManagement.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PopFxIncrementDeviceSleepCount(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al
  int v3; // r8d
  KIRQL v4; // dl
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
      v3 = *(_DWORD *)(v1 + 124);
      v4 = v2;
      _m_prefetchw((const void *)(v1 + 296));
      v5 = *(_DWORD *)(v1 + 296);
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 296), v5, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 864LL) & 1) == 0 )
        *(_DWORD *)(v1 + 124) = v3 + 1;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), v4);
    }
  }
}
