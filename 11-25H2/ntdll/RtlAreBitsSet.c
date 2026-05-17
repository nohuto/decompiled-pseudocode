/*
 * XREFs of RtlAreBitsSet @ 0x1800F7980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rcx
  char v6; // r11
  int *v7; // rdx
  int v8; // r10d
  int *v9; // rbx
  int v11; // eax

  if ( a2 < *(_DWORD *)a1 )
  {
    if ( a3 <= 1 )
    {
      if ( a3 == 1 )
        return _bittest((const signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a2 >> 5)), a2 & 0x1F);
      return 0;
    }
    if ( *(_DWORD *)a1 - a2 >= a3 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = a2 + a3 - 1;
      v7 = (int *)(v5 + 4 * ((unsigned __int64)a2 >> 5));
      v8 = *v7;
      v9 = (int *)(v5 + 4 * ((unsigned __int64)(a2 + a3 - 1) >> 5));
      if ( v7 == v9 )
        return ((0xFFFFFFFF >> (32 - a3) << a2) & v8) == 0xFFFFFFFF >> (32 - a3) << a2;
      if ( ((-1 << a2) & v8) == -1 << a2 )
      {
        while ( 1 )
        {
          v11 = *++v7;
          if ( v7 == v9 )
            break;
          if ( v11 != -1 )
            return 0;
        }
        return ((0xFFFFFFFF >> ~v6) & v11) == 0xFFFFFFFF >> ~v6;
      }
    }
  }
  return 0;
}
