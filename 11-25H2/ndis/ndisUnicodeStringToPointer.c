/*
 * XREFs of ndisUnicodeStringToPointer @ 0x1400D7A9C
 * Callers:
 *     NdisClGetProtocolVcContextFromTapiCallId @ 0x1400D7B90 (NdisClGetProtocolVcContextFromTapiCallId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisUnicodeStringToPointer(unsigned __int16 *a1, __int64 *a2)
{
  unsigned __int16 v3; // r10
  unsigned __int16 *v4; // r9
  int v5; // r8d
  unsigned __int16 v7; // cx
  __int64 i; // rdx
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = 0;
  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v5 = *a1 >> 1;
  while ( v5-- )
  {
    v3 = *v4++;
    if ( v3 > 0x20u )
      break;
    if ( !v5 )
    {
      v3 = 0;
      break;
    }
  }
  v7 = v3;
  if ( ((v3 - 43) & 0xFFFD) == 0 )
  {
    if ( v5 )
    {
      --v5;
      v7 = *v4++;
    }
    else
    {
      v7 = 0;
    }
  }
  for ( i = 0LL; v7; ++v4 )
  {
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 65) > 5u )
      {
        if ( (unsigned __int16)(v7 - 97) > 5u )
          break;
        v9 = (unsigned int)v7 - 87;
      }
      else
      {
        v9 = (unsigned int)v7 - 55;
      }
    }
    else
    {
      v9 = (unsigned int)v7 - 48;
    }
    if ( (unsigned int)v9 >= 0x10 )
      break;
    i = v9 | (16 * i);
    if ( !v5 )
      break;
    --v5;
    v7 = *v4;
  }
  v10 = -i;
  if ( v3 != 45 )
    v10 = i;
  *a2 = v10;
  return 0LL;
}
