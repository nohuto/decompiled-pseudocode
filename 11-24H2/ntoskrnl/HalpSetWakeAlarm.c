/*
 * XREFs of HalpSetWakeAlarm @ 0x140419978
 * Callers:
 *     HalpCheckWakeupTimeAndAdjust @ 0x1405580C4 (HalpCheckWakeupTimeAndAdjust.c)
 *     HaliSetWakeAlarm @ 0x140B6EFE0 (HaliSetWakeAlarm.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140419CD0 (HalpAcquireCmosSpinLockAndWait.c)
 */

__int64 __fastcall HalpSetWakeAlarm(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int8 v8; // al
  unsigned int v10; // r8d
  unsigned int v11; // r8d

  HalpAcquireCmosSpinLockAndWait();
  v3 = a2[10];
  __outbyte(0x70u, 1u);
  __outbyte(0x71u, v3 % 0xA + 16 * (v3 / 0xA));
  v4 = a2[8];
  __outbyte(0x70u, 3u);
  __outbyte(0x71u, v4 % 0xA + 16 * (v4 / 0xA));
  v5 = a2[6];
  __outbyte(0x70u, 5u);
  v6 = v5 / 0xA;
  v7 = v5 % 0xA;
  __outbyte(0x71u, v7 + 16 * v6);
  if ( (unsigned __int8)byte_140FC0FEA > 9u )
  {
    v10 = a2[4];
    __outbyte(0x70u, byte_140FC0FEA);
    v6 = v10 / 0xA;
    v7 = v10 % 0xA;
    __outbyte(0x71u, v7 + 16 * v6);
    if ( (unsigned __int8)byte_140FC0FEB > 9u )
    {
      v11 = a2[2];
      __outbyte(0x70u, byte_140FC0FEB);
      v6 = v11 / 0xA;
      v7 = v11 % 0xA;
      __outbyte(0x71u, v7 + 16 * v6);
    }
  }
  __outbyte(0x70u, 0xBu);
  v8 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  LOBYTE(v6) = v8 & 0x41 | 0x22;
  __outbyte(0x71u, v6);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  HalpReleaseCmosSpinLock(v6, 113LL, v7);
  return 0LL;
}
