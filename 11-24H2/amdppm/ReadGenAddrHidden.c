/*
 * XREFs of ReadGenAddrHidden @ 0x140003ED8
 * Callers:
 *     AmdPctSnapPlatformCtrsEx @ 0x140002630 (AmdPctSnapPlatformCtrsEx.c)
 *     ReadGenAddrHiddenEx @ 0x140003D40 (ReadGenAddrHiddenEx.c)
 *     SetPerfStateIOHidden @ 0x14000BE60 (SetPerfStateIOHidden.c)
 * Callees:
 *     ReadGenAddr @ 0x14000297C (ReadGenAddr.c)
 *     ReadIoMemRawHidden @ 0x1400057A8 (ReadIoMemRawHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHidden(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 v5; // r10
  unsigned __int64 IoMemRawHidden; // rax
  char v7; // cl
  unsigned __int8 v8; // cl

  if ( !a2 )
    return 0LL;
  if ( *a2 == 126 )
    return ReadGenAddr((__int64)a2, (__int64)a2, a3);
  IoMemRawHidden = ReadIoMemRawHidden();
  v5 = IoMemRawHidden;
  if ( IoMemRawHidden )
  {
    v7 = a2[2];
    if ( v7 )
      v5 = IoMemRawHidden >> v7;
    v8 = a2[1];
    if ( v8 < 0x40u )
      v5 &= (1LL << v8) - 1;
  }
  return v5;
}
