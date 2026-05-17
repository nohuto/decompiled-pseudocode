/*
 * XREFs of RtlIsElevatedRid @ 0x18010AAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlIsElevatedRid(_BYTE *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r8

  v1 = 0;
  if ( a1 )
  {
    if ( (a1[8] & 0x30) == 0 )
    {
      v2 = *(_QWORD *)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 1LL) )
      {
        if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 80) > 0x1F )
        {
          while ( v1 < 0x13 )
          {
            if ( *(_DWORD *)(v2 + 4LL * ((unsigned int)*(unsigned __int8 *)(v2 + 1) - 1) + 8) == dword_1801919F0[v1] )
              return 1;
            ++v1;
          }
        }
      }
    }
  }
  return 0;
}
