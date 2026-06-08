/*
 * XREFs of ReadGenAddrEx @ 0x1400025CC
 * Callers:
 *     ReadGenAddrMaybeHiddenEx @ 0x1400025A4 (ReadGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrHiddenEx @ 0x140003D40 (ReadGenAddrHiddenEx.c)
 *     GetCpcDifferentialFeedback @ 0x140006840 (GetCpcDifferentialFeedback.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadIoMemRawEx @ 0x140002010 (ReadIoMemRawEx.c)
 *     ReadGenAddr @ 0x14000297C (ReadGenAddr.c)
 */

__int64 __fastcall ReadGenAddrEx(unsigned __int8 *a1)
{
  unsigned __int64 IoMemRaw; // rax
  __int64 v2; // r11
  unsigned __int64 v3; // r10
  char v4; // cl
  unsigned __int8 v5; // cl

  if ( *a1 == 1 || (unsigned __int8)(*a1 - 126) <= 1u )
    return ReadGenAddr();
  IoMemRaw = ReadIoMemRawEx(a1);
  v3 = IoMemRaw;
  if ( IoMemRaw )
  {
    v4 = *(_BYTE *)(v2 + 2);
    if ( v4 )
      v3 = IoMemRaw >> v4;
    v5 = *(_BYTE *)(v2 + 1);
    if ( v5 < 0x40u )
      v3 &= (1LL << v5) - 1;
  }
  return v3;
}
