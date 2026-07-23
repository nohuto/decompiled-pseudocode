/*
 * XREFs of EtwpMapEnableFlags @ 0x140A2E1B4
 * Callers:
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpMapEnableFlags(__int64 a1, char a2)
{
  int *v2; // r9
  __int64 v4; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned int v7; // r10d

  v2 = EtwpEnableFlagMap;
  v4 = 8LL;
  do
  {
    if ( a2 )
    {
      v7 = *v2;
      if ( a1 )
      {
        result = (unsigned __int64)v7 >> 29;
        if ( (v7 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v6 = (unsigned int)v2[1];
          goto LABEL_6;
        }
      }
    }
    else if ( a1 )
    {
      result = (unsigned __int64)(unsigned int)v2[1] >> 29;
      if ( (v2[1] & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
      {
        v6 = (unsigned int)*v2;
LABEL_6:
        result = v6 >> 29;
        *(_DWORD *)(a1 + 4 * (v6 >> 29)) |= v6 & 0x1FFFFFFF;
      }
    }
    v2 += 2;
    --v4;
  }
  while ( v4 );
  return result;
}
