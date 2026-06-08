/*
 * XREFs of ReadGenAddrHidden @ 0x140006708
 * Callers:
 *     PctSnapPlatformCtrsEx @ 0x140002164 (PctSnapPlatformCtrsEx.c)
 *     ReadGenAddrHiddenEx @ 0x140006608 (ReadGenAddrHiddenEx.c)
 *     SetPerfStateIOHidden @ 0x14000E280 (SetPerfStateIOHidden.c)
 * Callees:
 *     ReadGenAddr @ 0x140002350 (ReadGenAddr.c)
 *     ReadIoMemRawHidden @ 0x140008A28 (ReadIoMemRawHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHidden(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // r10
  unsigned __int64 IoMemRawHidden; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl

  if ( !a2 )
    return 0LL;
  if ( *a2 == 126 )
    return ReadGenAddr(a2);
  IoMemRawHidden = ReadIoMemRawHidden();
  v4 = IoMemRawHidden;
  if ( IoMemRawHidden )
  {
    v6 = a2[2];
    if ( v6 )
      v4 = IoMemRawHidden >> v6;
    v7 = a2[1];
    if ( v7 < 0x40u )
      v4 &= (1LL << v7) - 1;
  }
  return v4;
}
