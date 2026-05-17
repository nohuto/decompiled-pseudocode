/*
 * XREFs of RtlAreBitsClear @ 0x1800F9700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  bool result; // al
  __int64 v5; // rcx
  char v6; // r10
  int *v7; // rdx
  int v8; // ebx
  int *v9; // r11
  int *v11; // rdx
  int v12; // r9d

  if ( a2 >= *(_DWORD *)a1 )
    return 0;
  if ( a3 > 1 )
  {
    if ( *(_DWORD *)a1 - a2 >= a3 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = a2 + a3 - 1;
      v7 = (int *)(v5 + 4 * ((unsigned __int64)a2 >> 5));
      v8 = *v7;
      v9 = (int *)(v5 + 4 * ((unsigned __int64)(a2 + a3 - 1) >> 5));
      if ( v7 == v9 )
        return (v8 & (0xFFFFFFFF >> (32 - a3) << a2)) == 0;
      if ( (v8 & (-1 << a2)) != 0 )
        return 0;
      v11 = v7 + 1;
      result = 0;
      while ( 1 )
      {
        v12 = *v11;
        if ( v11 == v9 )
          break;
        if ( v12 )
          return result;
        ++v11;
      }
      return (v12 & (0xFFFFFFFF >> ~v6)) == 0;
    }
    return 0;
  }
  if ( a3 != 1 )
    return 0;
  return !_bittest((const signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a2 >> 5)), a2 & 0x1F);
}
