/*
 * XREFs of PpmIdleCsVetoAccountingUpdateBlock @ 0x1403CAB98
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x1403CAA54 (PopFxPlatformStateAvailable.c)
 *     PpmIdleCsVetoAccountingResiliencyUpdate @ 0x1403CAB10 (PpmIdleCsVetoAccountingResiliencyUpdate.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1403CBC64 (PpmIdleStartCsVetoAccounting.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1404AFDBC (PpmIdleCaptureCsVetoAccounting.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 */

char __fastcall PpmIdleCsVetoAccountingUpdateBlock(__int64 a1, char a2, char a3)
{
  __int64 InterruptTimePrecise; // rax
  char v5; // dl
  unsigned int v6; // ecx
  __int64 j; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int i; // edx
  unsigned __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(InterruptTimePrecise) = *(_BYTE *)(a1 + 24);
  if ( a3 )
  {
    v5 = InterruptTimePrecise & ~a2;
    *(_BYTE *)(a1 + 24) = v5;
    if ( !v5 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v13);
      for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
      {
        v11 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)i << 6);
        if ( *(_QWORD *)(v11 + 32) )
          *(_QWORD *)(v11 + 48) = InterruptTimePrecise;
      }
    }
  }
  else
  {
    LOBYTE(InterruptTimePrecise) = a2 | InterruptTimePrecise;
    *(_BYTE *)(a1 + 24) = InterruptTimePrecise;
    if ( (_BYTE)InterruptTimePrecise == a2 )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v13);
      v6 = 0;
      for ( j = InterruptTimePrecise; v6 < *(_DWORD *)(a1 + 28); ++v6 )
      {
        v8 = *(_QWORD *)(a1 + 32) + ((unsigned __int64)v6 << 6);
        v9 = *(_QWORD *)(v8 + 48);
        if ( v9 )
        {
          LOBYTE(InterruptTimePrecise) = j - v9;
          *(_QWORD *)(v8 + 56) += j - v9;
          *(_QWORD *)(v8 + 48) = 0LL;
        }
      }
    }
  }
  return InterruptTimePrecise;
}
