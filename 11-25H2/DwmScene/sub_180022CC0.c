/*
 * XREFs of sub_180022CC0 @ 0x180022CC0
 * Callers:
 *     sub_18002057C @ 0x18002057C (sub_18002057C.c)
 *     sub_18002086C @ 0x18002086C (sub_18002086C.c)
 *     sub_180021480 @ 0x180021480 (sub_180021480.c)
 *     sub_180021B80 @ 0x180021B80 (sub_180021B80.c)
 *     sub_180021D08 @ 0x180021D08 (sub_180021D08.c)
 *     sub_180022170 @ 0x180022170 (sub_180022170.c)
 *     sub_180022920 @ 0x180022920 (sub_180022920.c)
 *     sub_180022C00 @ 0x180022C00 (sub_180022C00.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000BF5A (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000C224 @ 0x18000C224 (sub_18000C224.c)
 *     memcpy @ 0x18000CD49 (memcpy.c)
 */

bool __fastcall sub_180022CC0(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  size_t v3; // rax

  if ( a3 )
  {
    *a3 = 0;
    v3 = Src[19];
    if ( !WORD2(a2) )
      return (unsigned int)sub_18000C224() != -1;
    if ( v3 >= WORD2(a2) )
    {
      memcpy(a3, Src, WORD2(a2));
      return (unsigned int)sub_18000C224() != -1;
    }
    memset(a3, 0, v3);
    *(_DWORD *)o__errno() = 34;
    o__invalid_parameter_noinfo();
  }
  return 0;
}
