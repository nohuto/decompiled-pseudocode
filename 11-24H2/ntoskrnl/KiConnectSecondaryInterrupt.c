/*
 * XREFs of KiConnectSecondaryInterrupt @ 0x1402B3644
 * Callers:
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 * Callees:
 *     KiInsertInterruptObjectOrdered @ 0x1402B4BF8 (KiInsertInterruptObjectOrdered.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402B5468 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1402B54A0 (KiReleaseSecondaryPassiveConnectLock.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140374A2C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  char v2; // si
  unsigned int v3; // r8d
  __int64 v4; // rdx
  char v5; // bp
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v11; // r10
  __int64 v12; // r10

  if ( !KiSecondaryInterruptServicesEnabled )
    return 3221225473LL;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 96);
  v4 = (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  v5 = 0;
  if ( (unsigned int)v4 > 0xFF )
    return 3221225711LL;
  v6 = *(_BYTE *)(a1 + 92);
  if ( v6 > 0xCu )
    return 3221225711LL;
  if ( v3 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v6 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  v8 = KiGlobalSecondaryIDT + 48 * v4;
  KiAcquireSecondaryPassiveConnectLock(v8);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v8);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v11 = *(_QWORD *)(v8 + 40);
    if ( v11 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_20;
      if ( !*(_BYTE *)(v11 + 100) )
        goto LABEL_20;
      if ( *(_DWORD *)(v11 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_20;
      v5 = 1;
      v2 = 1;
      KiInsertInterruptObjectOrdered(*(_QWORD *)(v8 + 40), a1);
      if ( *(_BYTE *)(v12 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_20;
    }
    else
    {
      v5 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v8 + 32) = 0;
    }
    *(_QWORD *)(v8 + 40) = a1;
LABEL_20:
    *(_BYTE *)(a1 + 95) = 1;
  }
  LOBYTE(v9) = 0;
  HalpReleaseHighLevelLock(v8, v9);
  KiReleaseSecondaryPassiveConnectLock(v8);
  if ( !v5 )
    return 3221225711LL;
  return v2 != 0 ? 0x127 : 0;
}
