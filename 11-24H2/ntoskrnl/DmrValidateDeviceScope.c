/*
 * XREFs of DmrValidateDeviceScope @ 0x140576C6C
 * Callers:
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574DF8 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140575658 (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x1405768E0 (DmrGetNextDrhdDeviceScope.c)
 *     DmrCheckPathMatch @ 0x14057690C (DmrCheckPathMatch.c)
 *     DmrGetNextRemappingStructure @ 0x140576C18 (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrValidateDeviceScope(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int8 v5; // r15
  __int64 v6; // rdx
  _BYTE *NextDrhdDeviceScope; // rax
  __int64 i; // rdx
  unsigned __int64 NextRemappingStructure; // rax
  unsigned __int64 v11; // rdi
  __int64 j; // rdx
  char *v13; // r14
  __int64 k; // rdx
  char *v15; // rax
  char *v16; // rbp

  v2 = 0;
  if ( *(_WORD *)a2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v5 = *(_BYTE *)(a2 + 4);
    if ( (v5 & 1) != 0 )
    {
      v6 = 0LL;
      while ( 1 )
      {
        NextDrhdDeviceScope = (_BYTE *)DmrGetNextDrhdDeviceScope(a2, v6);
        v6 = (__int64)NextDrhdDeviceScope;
        if ( !NextDrhdDeviceScope )
          break;
        if ( (unsigned __int8)(*NextDrhdDeviceScope - 1) <= 1u )
          return (unsigned int)-1073741823;
      }
    }
    for ( i = 0LL; ; i = v11 )
    {
      NextRemappingStructure = DmrGetNextRemappingStructure(a1, i);
      v11 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*(_WORD *)NextRemappingStructure
        && NextRemappingStructure != a2
        && *(_WORD *)(NextRemappingStructure + 6) == *(_WORD *)(a2 + 6) )
      {
        if ( (v5 & *(_BYTE *)(NextRemappingStructure + 4) & 1) != 0 )
          return (unsigned int)-1073741823;
        for ( j = 0LL; ; j = (__int64)v13 )
        {
          v13 = (char *)DmrGetNextDrhdDeviceScope(a2, j);
          if ( !v13 )
            break;
          for ( k = 0LL; ; k = (__int64)v16 )
          {
            v15 = (char *)DmrGetNextDrhdDeviceScope(v11, k);
            v16 = v15;
            if ( !v15 )
              break;
            if ( DmrCheckPathMatch(v13, v15) )
              return (unsigned int)-1073741823;
          }
        }
      }
    }
  }
  return v2;
}
