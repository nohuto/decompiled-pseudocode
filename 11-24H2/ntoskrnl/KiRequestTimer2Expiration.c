/*
 * XREFs of KiRequestTimer2Expiration @ 0x14040F090
 * Callers:
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x140449E60 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     KiSetDpcRequestFlag @ 0x1402AC800 (KiSetDpcRequestFlag.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KiSendSoftwareInterrupt @ 0x14040F180 (KiSendSoftwareInterrupt.c)
 */

__int64 KiRequestTimer2Expiration()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdx
  bool v4; // al
  __int64 v5; // r8
  int v6; // edx
  bool v7; // r9
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+24h] [rbp-24h]

  v0 = KiClockTimerOwner;
  v1 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
  result = KiSetDpcRequestFlag((unsigned __int16 *)(v1 + 14524), 8);
  if ( (result & 0xA9) == 0 )
  {
    result = (__int64)KeGetCurrentPrcb();
    if ( result == v1 )
    {
      if ( *(_BYTE *)(v1 + 32) )
      {
        *(_BYTE *)(v1 + 6) = 1;
      }
      else
      {
        v9 = 0LL;
        if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
        {
          v4 = HalpDisableInterrupts();
          v6 = *(_DWORD *)(v5 + 168);
          v7 = v4;
          *(_DWORD *)(v5 + 168) = v6 | 4;
          if ( !v6 )
            __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
          if ( v7 )
            _enable();
        }
        v8 = 5;
        return HalpInterruptSendIpi(&v8, 0x2Fu);
      }
    }
    else
    {
      LOBYTE(v3) = 2;
      return KiSendSoftwareInterrupt(v0, v3);
    }
  }
  return result;
}
