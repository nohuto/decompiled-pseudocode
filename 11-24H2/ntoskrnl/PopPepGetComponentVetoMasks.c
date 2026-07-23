/*
 * XREFs of PopPepGetComponentVetoMasks @ 0x1404A3EAC
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x140A505AC (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetComponentVetoMasks(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  KIRQL v7; // al
  int v8; // ebx

  v5 = 208LL * a2;
  v6 = 0LL;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 172);
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v7);
  if ( v8 == 2 )
  {
    if ( *(_DWORD *)(v5 + a1 + 380) )
    {
      do
      {
        *(_DWORD *)(a3 + 4 * v6) = *(_DWORD *)(*(_QWORD *)(v5 + a1 + 392) + 24 * v6 + 16);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v5 + a1 + 380) );
    }
    LOBYTE(v6) = 1;
  }
  return v6;
}
