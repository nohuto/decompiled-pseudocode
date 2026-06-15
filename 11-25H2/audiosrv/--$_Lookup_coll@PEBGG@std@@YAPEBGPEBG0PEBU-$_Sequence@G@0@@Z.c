/*
 * XREFs of ??$_Lookup_coll@PEBGG@std@@YAPEBGPEBG0PEBU?$_Sequence@G@0@@Z @ 0x180126FAC
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x1801308D8 (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x1801403F4 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall std::_Lookup_coll<unsigned short const *,unsigned short>(
        __int16 *a1,
        __int16 *a2,
        unsigned int *a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r11
  __int16 *v8; // rdi
  _WORD *v9; // rcx
  __int16 v10; // ax

  while ( 1 )
  {
    if ( !a3 )
      return a1;
    v5 = 0LL;
    if ( a3[3] )
      break;
LABEL_10:
    a3 = (unsigned int *)*((_QWORD *)a3 + 3);
  }
  v6 = *a3;
  while ( 1 )
  {
    v7 = 0LL;
    v8 = a1;
    if ( *a3 )
    {
      v9 = (_WORD *)(*((_QWORD *)a3 + 2) + 2 * v5);
      do
      {
        v10 = *v8++;
        if ( v10 != *v9 )
          break;
        ++v7;
        ++v9;
      }
      while ( v7 < v6 );
    }
    if ( v8 == a2 )
      return a2;
    v5 = (unsigned int)(v6 + v5);
    if ( (unsigned int)v5 >= a3[3] )
      goto LABEL_10;
  }
}
