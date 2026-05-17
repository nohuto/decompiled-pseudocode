/*
 * XREFs of RtlGetLengthWithoutTrailingPathSeperators @ 0x18010FEE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetLengthWithoutTrailingPathSeperators(int a1, unsigned __int16 *a2, int *a3)
{
  unsigned int v3; // r9d
  int v5; // ecx
  __int64 v6; // r10
  __int64 v7; // rdx

  v3 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a2 && a3 && !a1 )
  {
    v5 = *a2 >> 1;
    if ( v5 )
    {
      v6 = *((_QWORD *)a2 + 1);
      do
      {
        v7 = (unsigned int)(v5 - 1);
        if ( *(_WORD *)(v6 + 2 * v7) != 92 && *(_WORD *)(v6 + 2 * v7) != 47 )
          break;
        --v5;
      }
      while ( (_DWORD)v7 );
    }
    *a3 = v5;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
