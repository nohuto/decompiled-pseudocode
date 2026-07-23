/*
 * XREFs of BiRemoveEntryFromBootOrder @ 0x140815DAC
 * Callers:
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140815D18 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiRemoveEntryFromBootOrder(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  unsigned int v4; // r9d
  _DWORD *v6; // r10
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx

  result = (unsigned int)*a2;
  v4 = 0;
  if ( (_DWORD)result )
  {
    v6 = a1;
    do
    {
      if ( *v6 == a3 )
        break;
      ++v4;
      ++v6;
    }
    while ( v4 < (unsigned int)result );
  }
  if ( v4 != (_DWORD)result )
  {
    v7 = result - 1;
    *a2 = result - 1;
    if ( v4 < (int)result - 1 )
    {
      do
      {
        v8 = v4 + 1;
        v9 = v4;
        result = (unsigned int)a1[v8];
        ++v4;
        a1[v9] = result;
      }
      while ( (unsigned int)v8 < v7 );
    }
  }
  return result;
}
