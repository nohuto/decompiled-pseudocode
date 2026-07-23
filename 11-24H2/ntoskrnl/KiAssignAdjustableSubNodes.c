/*
 * XREFs of KiAssignAdjustableSubNodes @ 0x140C2CDA0
 * Callers:
 *     KiPerformAutomaticGroupConfiguration @ 0x140C2AAAC (KiPerformAutomaticGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAssignAdjustableSubNodes(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // dx
  __int64 v6; // r10
  __int64 v7; // r9
  char v8; // r8
  unsigned __int16 i; // ax
  unsigned int v10; // ebx

  v5 = 0;
  if ( KiSubNodeCount )
  {
    v6 = (unsigned __int16)KiSubNodeCount;
    do
    {
      v7 = *a1;
      v8 = *(_BYTE *)(*a1 + 5);
      if ( (v8 & 4) == 0 )
      {
        for ( i = 0; i < 0x20u; ++i )
        {
          v10 = *(unsigned __int8 *)(v7 + 4);
          if ( *(_DWORD *)(a4 + 4LL * i) >= v10 )
          {
            *(_WORD *)(v7 + 6) = i;
            *(_BYTE *)(v7 + 5) = v8 | 1;
            *(_DWORD *)(a4 + 4LL * i) -= v10;
            if ( v5 <= i )
              v5 = i + 1;
            break;
          }
        }
      }
      ++a1;
      --v6;
    }
    while ( v6 );
  }
  return v5;
}
