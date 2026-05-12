/*
 * XREFs of RaidGetMessageNumberFromProcessorNumber @ 0x140028DF0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 */

__int64 __fastcall RaidGetMessageNumberFromProcessorNumber(__int64 a1, unsigned __int16 *a2, _DWORD *a3)
{
  int v3; // ecx

  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_fe6d764451ce35c6dcc82ee897ab329f_Traceguids);
    }
    return 3238002694LL;
  }
  if ( *(_DWORD *)a1 != 1094997074 )
    return 3238002694LL;
  if ( (*(_BYTE *)(a1 + 4660) & 2) == 0
    || *a2 >= *(_WORD *)(a1 + 4662)
    || (v3 = *(unsigned __int8 *)(*((unsigned __int8 *)a2 + 2) + ((unsigned __int64)*a2 << 6) + *(_QWORD *)(a1 + 4680)),
        *a3 = v3,
        v3 == 255) )
  {
    *a3 = 0;
  }
  return 0LL;
}
