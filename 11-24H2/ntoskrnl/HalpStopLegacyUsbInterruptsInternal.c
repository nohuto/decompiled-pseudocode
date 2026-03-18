/*
 * XREFs of HalpStopLegacyUsbInterruptsInternal @ 0x140B505F0
 * Callers:
 *     HalpStopLegacyUsbInterrupts @ 0x140B4B210 (HalpStopLegacyUsbInterrupts.c)
 * Callees:
 *     HalpUsbLegacyStopOhciInterrupt @ 0x140562470 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1405625A4 (HalpUsbLegacyStopUhciInterrupt.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall HalpStopLegacyUsbInterruptsInternal(int a1)
{
  int v2; // eax
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  _WORD v6[32]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v2) = (unsigned __int8)memset_0(v6, 0, sizeof(v6));
  if ( a1 < 5 )
  {
    v3 = (__int64 *)HalpUsbControllerList;
    while ( v3 != &HalpUsbControllerList )
    {
      v4 = v3;
      v3 = (__int64 *)*v3;
      if ( !*((_BYTE *)v4 + 24) && *((_BYTE *)v4 + 26) < 0x20u )
      {
        v2 = guard_dispatch_icall_no_overrides(*((unsigned int *)v4 + 4), *((unsigned int *)v4 + 5), v6, 0LL);
        if ( v2 )
        {
          LOBYTE(v2) = LOBYTE(v6[0]) - 1;
          if ( (unsigned __int16)(v6[0] - 1) <= 0xFFFDu )
          {
            LOBYTE(v2) = *((_BYTE *)v4 + 26);
            if ( (_BYTE)v2 )
            {
              if ( (_BYTE)v2 == 16 )
                LOBYTE(v2) = HalpUsbLegacyStopOhciInterrupt(65533LL, *((_DWORD *)v4 + 4), *((_DWORD *)v4 + 5));
              else
                *((_BYTE *)v4 + 24) = 1;
            }
            else
            {
              LOBYTE(v2) = HalpUsbLegacyStopUhciInterrupt(
                             65533LL,
                             *((_DWORD *)v4 + 4),
                             *((_DWORD *)v4 + 5),
                             *((_BYTE *)v4 + 25));
            }
          }
        }
      }
    }
  }
  return v2;
}
