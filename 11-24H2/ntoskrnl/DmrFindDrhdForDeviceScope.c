/*
 * XREFs of DmrFindDrhdForDeviceScope @ 0x140576840
 * Callers:
 *     DmrEnumerateRmrrDomains @ 0x140576D60 (DmrEnumerateRmrrDomains.c)
 * Callees:
 *     DmrGetNextDrhdDeviceScope @ 0x1405768E0 (DmrGetNextDrhdDeviceScope.c)
 *     DmrCheckPathMatch @ 0x14057690C (DmrCheckPathMatch.c)
 *     DmrGetNextRemappingStructure @ 0x140576C18 (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrFindDrhdForDeviceScope(__int64 a1, __int16 a2, _BYTE *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 NextRemappingStructure; // rax
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 i; // rdx
  __int64 NextDrhdDeviceScope; // rax
  __int64 v13; // rsi

  v3 = 0LL;
  v6 = a1;
  if ( *a3 == 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextRemappingStructure = DmrGetNextRemappingStructure(a1, v7);
      v10 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( !*(_WORD *)NextRemappingStructure && *(_WORD *)(NextRemappingStructure + 6) == a2 )
      {
        if ( (*(_BYTE *)(NextRemappingStructure + 4) & 1) != 0 )
          return v10;
        for ( i = 0LL; ; i = v13 )
        {
          NextDrhdDeviceScope = DmrGetNextDrhdDeviceScope(v10, i, v9);
          v13 = NextDrhdDeviceScope;
          if ( !NextDrhdDeviceScope )
            break;
          if ( (unsigned __int8)DmrCheckPathMatch(NextDrhdDeviceScope, a3) )
            return v10;
        }
      }
      v7 = v10;
      a1 = v6;
    }
  }
  return v3;
}
