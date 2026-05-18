/*
 * XREFs of sub_180022E20 @ 0x180022E20
 * Callers:
 *     sub_1800206DC @ 0x1800206DC (sub_1800206DC.c)
 *     sub_1800209CC @ 0x1800209CC (sub_1800209CC.c)
 *     sub_1800215E0 @ 0x1800215E0 (sub_1800215E0.c)
 *     sub_180021CE0 @ 0x180021CE0 (sub_180021CE0.c)
 *     sub_180021E68 @ 0x180021E68 (sub_180021E68.c)
 *     sub_1800222D0 @ 0x1800222D0 (sub_1800222D0.c)
 *     sub_180022A80 @ 0x180022A80 (sub_180022A80.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18000C3BA (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C4E8 (memset.c)
 *     sub_18000C684 @ 0x18000C684 (sub_18000C684.c)
 *     memcpy @ 0x18000CE31 (memcpy.c)
 */

bool __fastcall sub_180022E20(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  size_t v3; // rax

  if ( a3 )
  {
    *a3 = 0;
    v3 = Src[19];
    if ( !WORD2(a2) )
      return (unsigned int)sub_18000C684() != -1;
    if ( v3 >= WORD2(a2) )
    {
      memcpy(a3, Src, WORD2(a2));
      return (unsigned int)sub_18000C684() != -1;
    }
    memset(a3, 0, v3);
    *(_DWORD *)o__errno() = 34;
    o__invalid_parameter_noinfo();
  }
  return 0;
}
