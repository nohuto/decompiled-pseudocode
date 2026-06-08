/*
 * XREFs of WriteGenAddr @ 0x140001A70
 * Callers:
 *     SetPerfStateIO @ 0x1400014D0 (SetPerfStateIO.c)
 *     WriteGenAddrEx @ 0x14000170C (WriteGenAddrEx.c)
 *     MWaitIdleCheck @ 0x140008200 (MWaitIdleCheck.c)
 *     C2Idle @ 0x140009AD0 (C2Idle.c)
 *     C3Idle @ 0x140009BA0 (C3Idle.c)
 *     C3IdleCheck @ 0x140009CA0 (C3IdleCheck.c)
 * Callees:
 *     ReadIoMemRaw @ 0x140001990 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x140001AF0 (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2)
{
  __int64 v2; // r10
  _BYTE *v3; // r9
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
