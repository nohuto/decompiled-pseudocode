/*
 * XREFs of IvtCheckForReservedRegion @ 0x1407046B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIvtCheckIdPathMatch @ 0x1404F994C (HalpIvtCheckIdPathMatch.c)
 *     DmrGetNextDeviceScope @ 0x140579740 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x140579788 (DmrGetNextRemappingStructure.c)
 */

char __fastcall IvtCheckForReservedRegion(_DWORD *a1)
{
  __int64 i; // rdx
  _WORD *NextRemappingStructure; // rax
  _WORD *v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r14
  char *NextDeviceScope; // rax

  if ( *a1 == 1 && qword_140E65990 )
  {
    for ( i = 0LL; ; i = (__int64)v4 )
    {
      NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(qword_140E65990, i);
      v4 = NextRemappingStructure;
      if ( !NextRemappingStructure )
        break;
      if ( *NextRemappingStructure == 1 )
      {
        v5 = 0LL;
        v6 = (unsigned __int64)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
        while ( 1 )
        {
          NextDeviceScope = (char *)DmrGetNextDeviceScope((unsigned __int64)(v4 + 12), v6, v5);
          v5 = (unsigned __int64)NextDeviceScope;
          if ( !NextDeviceScope )
            break;
          if ( HalpIvtCheckIdPathMatch((__int64)a1, NextDeviceScope) )
            return 1;
        }
      }
    }
  }
  return 0;
}
