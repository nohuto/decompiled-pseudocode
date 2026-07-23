/*
 * XREFs of MiSlabContextDefragInProgress @ 0x140689A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSlabContextDefragInProgress(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v7; // r8
  _QWORD **v8; // rax
  _QWORD *v9; // r8

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)(a3 + 40);
    if ( v4 )
    {
      *(_QWORD *)(a2 + 48) = v4;
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 48);
    }
    else
    {
      *(_QWORD *)(a2 + 48) = 0LL;
      *(_QWORD *)(a2 + 56) = 0LL;
      if ( (*(_DWORD *)(a3 + 84) & 1) != 0 )
      {
        v5 = *(_QWORD *)(a2 + 8);
        if ( (v5 & 1) != 0 )
        {
          if ( v5 == 1 )
            return 0LL;
          i = v5 ^ (a2 | 1);
        }
        else
        {
          i = *(_QWORD *)(a2 + 8);
        }
        while ( i )
        {
          *(_DWORD *)(i + 92) &= ~0x200u;
          v7 = i;
          v8 = *(_QWORD ***)(i + 8);
          if ( v8 )
          {
            v9 = *v8;
            for ( i = *(_QWORD *)(i + 8); v9; v9 = (_QWORD *)*v9 )
              i = (unsigned __int64)v9;
          }
          else
          {
            while ( 1 )
            {
              i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !i || *(_QWORD *)i == v7 )
                break;
              v7 = i;
            }
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_QWORD *)(a2 + 48) )
    return 1LL;
  LOBYTE(v3) = *(_QWORD *)(a2 + 56) != 0LL;
  return v3;
}
