/*
 * XREFs of HalpWriteCmosTime @ 0x140419448
 * Callers:
 *     HalSetRealTimeClock @ 0x1404191C0 (HalSetRealTimeClock.c)
 * Callees:
 *     HalpReleaseCmosSpinLock @ 0x140419CB4 (HalpReleaseCmosSpinLock.c)
 *     HalpAcquireCmosSpinLockAndWait @ 0x140419CD0 (HalpAcquireCmosSpinLockAndWait.c)
 *     HalpSetCmosCenturyByte @ 0x14041A82C (HalpSetCmosCenturyByte.c)
 */

__int64 __fastcall HalpWriteCmosTime(unsigned __int8 *a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  char v10; // r11
  unsigned __int8 v11; // bl
  __int64 v12; // rcx

  HalpAcquireCmosSpinLockAndWait();
  v2 = a1[10];
  __outbyte(0x70u, 0);
  __outbyte(0x71u, v2 % 0xA + 16 * (v2 / 0xA));
  v3 = a1[8];
  __outbyte(0x70u, 2u);
  __outbyte(0x71u, v3 % 0xA + 16 * (v3 / 0xA));
  v4 = a1[6];
  __outbyte(0x70u, 4u);
  __outbyte(0x71u, v4 % 0xA + 16 * (v4 / 0xA));
  v5 = a1[14];
  __outbyte(0x70u, 6u);
  __outbyte(0x71u, v5 % 0xA + 16 * (v5 / 0xA));
  v6 = a1[4];
  __outbyte(0x70u, 7u);
  __outbyte(0x71u, v6 % 0xA + 16 * (v6 / 0xA));
  v7 = a1[2];
  __outbyte(0x70u, 8u);
  __outbyte(0x71u, v7 % 0xA + 16 * (v7 / 0xA));
  v8 = *(__int16 *)a1;
  if ( v8 > 0x270F )
    v8 = 9999;
  v9 = (unsigned __int8)(v8 / 0x64) % 0xAu;
  LOBYTE(v9) = 16 * ((unsigned __int8)(v8 / 0x64) / 0xAu) + (unsigned __int8)(v8 / 0x64) % 0xAu;
  HalpSetCmosCenturyByte(v9);
  __outbyte(0x70u, 9u);
  v11 = v8 - 100 * v10;
  v12 = v11 / 0xAu;
  LOBYTE(v12) = 16 * (v11 / 0xAu);
  __outbyte(0x71u, v11 % 0xAu + v12);
  return HalpReleaseCmosSpinLock(v12, 113LL, v11 % 0xAu);
}
