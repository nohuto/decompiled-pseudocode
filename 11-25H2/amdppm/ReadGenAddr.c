/*
 * XREFs of ReadGenAddr @ 0x14000297C
 * Callers:
 *     ReadGenAddrEx @ 0x1400025CC (ReadGenAddrEx.c)
 *     AmdPctSnapPlatformCtrsEx @ 0x140002630 (AmdPctSnapPlatformCtrsEx.c)
 *     ReadGenAddrHidden @ 0x140003ED8 (ReadGenAddrHidden.c)
 *     C2Idle @ 0x1400053C0 (C2Idle.c)
 *     C3Idle @ 0x140005490 (C3Idle.c)
 *     C3IdleCheck @ 0x140005590 (C3IdleCheck.c)
 *     IoHaltC1Idle @ 0x1400056C0 (IoHaltC1Idle.c)
 *     SetPerfStateIO @ 0x14000B120 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1400029E0 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadGenAddr(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 IoMemRaw; // rax
  __int64 v6; // r9
  char v7; // cl
  unsigned __int8 v8; // cl

  if ( !a1 )
    return 0LL;
  if ( *(_BYTE *)a1 == 126 )
    return *(unsigned int *)(a1 + 4);
  IoMemRaw = ReadIoMemRaw(a1, a2, a3, a1);
  v4 = IoMemRaw;
  if ( IoMemRaw )
  {
    v7 = *(_BYTE *)(v6 + 2);
    if ( v7 )
      v4 = IoMemRaw >> v7;
    v8 = *(_BYTE *)(v6 + 1);
    if ( v8 < 0x40u )
      v4 &= (1LL << v8) - 1;
  }
  return v4;
}
