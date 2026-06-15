/*
 * XREFs of ??$_Lookup_range@G@std@@YA_NIPEBU?$_Buf@G@0@@Z @ 0x18012719C
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801308D8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Lookup_range<unsigned short>(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r9

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0LL;
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 8);
  while ( *(unsigned __int16 *)(v4 + 2 * v3) > a1 || a1 > *(unsigned __int16 *)(v4 + 2LL * (unsigned int)(v3 + 1)) )
  {
    v3 = (unsigned int)(v3 + 2);
    if ( (unsigned int)v3 >= v2 )
      return 0;
  }
  return 1;
}
