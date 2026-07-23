/*
 * XREFs of PpmIdleCsVetoAccountingUpdateBlock @ 0x140356068
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140355F24 (PopFxPlatformStateAvailable.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140355FE0 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1404863F4 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1404BC510 (PpmIdleStartCsVetoAccounting.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 */

char __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  char v5; // dl
  unsigned int v6; // ecx
  LARGE_INTEGER j; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int i; // edx
  unsigned __int64 v11; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(InterruptTimePrecise.LowPart) = *(_BYTE *)(a1 + 24);
  if ( a3 )
  {
    v5 = LOBYTE(InterruptTimePrecise.LowPart) & ~a2;
    *(_BYTE *)(a1 + 24) = v5;
    if ( !v5 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v11 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)i << 6);
        if ( *(_QWORD *)(v11 + 32) )
          *(LARGE_INTEGER *)(v11 + 48) = InterruptTimePrecise;
      }
    }
  }
  else
  {
    LOBYTE(InterruptTimePrecise.LowPart) |= a2;
    *(_BYTE *)(a1 + 24) = InterruptTimePrecise.LowPart;
    if ( LOBYTE(InterruptTimePrecise.LowPart) == a2 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v6 = 0;
      for ( j = InterruptTimePrecise; v6 < *(_DWORD *)(a1 + 28); ++v6 )
      {
        v8 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)v6 << 6);
        v9 = *(_QWORD *)(v8 + 48);
        if ( v9 )
        {
          LOBYTE(InterruptTimePrecise.LowPart) = LOBYTE(j.LowPart) - v9;
          *(_QWORD *)(v8 + 56) += j.QuadPart - v9;
          *(_QWORD *)(v8 + 48) = 0LL;
        }
      }
    }
  }
  return InterruptTimePrecise.LowPart;
}
