/*
 * XREFs of ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x14003DE14
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x14003CF88 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ??8MonDescParser@@YA_NAEBU_VideoModeDescriptor@@0@Z @ 0x14003DE48 (--8MonDescParser@@YA_NAEBU_VideoModeDescriptor@@0@Z.c)
 */

__int64 __fastcall MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx

  v3 = a2;
  while ( 1 )
  {
    if ( a1 == v3 )
      return -1LL;
    if ( (unsigned __int8)MonDescParser::operator==(a1, a3) )
      break;
    a1 = v4 + 56;
  }
  return 0LL;
}
