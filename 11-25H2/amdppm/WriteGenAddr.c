/*
 * XREFs of WriteGenAddr @ 0x140003F3C
 * Callers:
 *     C2Idle @ 0x1400053C0 (C2Idle.c)
 *     C3Idle @ 0x140005490 (C3Idle.c)
 *     C3IdleCheck @ 0x140005590 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x14000B120 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1400029E0 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x140002B20 (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(unsigned __int8 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int8 *v3; // r9
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v5; // cl

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    if ( a1[2] || a1[1] != a1[3] )
    {
      IoMemRaw = ReadIoMemRaw((__int64)a1);
      v5 = v3[1];
      if ( v5 < 0x40u || v3[2] )
        v2 = IoMemRaw & ~(((1LL << v5) - 1) << v3[2]) | (((1LL << v5) - 1) << v3[2]) & (v2 << v3[2]);
    }
    WriteIoMemRaw(v3, v2);
  }
}
