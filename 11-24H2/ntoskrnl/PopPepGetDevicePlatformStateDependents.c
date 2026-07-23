/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x14048C53C
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x140A3A804 (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, _DWORD *a2)
{
  KIRQL v4; // r10
  int *v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int i; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v6 = (int *)(a1 + 144);
    v7 = 3LL;
    do
    {
      v8 = *v6++;
      *a2 |= v8;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v10 = 0LL;
      v11 = 208LL * i;
      if ( *(_DWORD *)(v11 + a1 + 380) )
      {
        do
        {
          v12 = 3 * v10;
          v10 = (unsigned int)(v10 + 1);
          *a2 |= *(_DWORD *)(*(_QWORD *)(v11 + a1 + 392) + 8 * v12 + 16);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v11 + a1 + 380) );
      }
    }
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v4);
  return 0;
}
