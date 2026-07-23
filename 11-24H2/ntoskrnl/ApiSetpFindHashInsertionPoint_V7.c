/*
 * XREFs of ApiSetpFindHashInsertionPoint_V7 @ 0x140662054
 * Callers:
 *     ApiSetpInsertHashEntry @ 0x140662154 (ApiSetpInsertHashEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpFindHashInsertionPoint_V7(__int64 a1, __int64 a2, unsigned int a3, _WORD *a4)
{
  int v4; // eax
  int v8; // r9d
  int v9; // r8d
  unsigned int *v10; // r11
  __int64 v11; // rbx
  int v12; // edx
  unsigned int v13; // eax

  v4 = *(unsigned __int16 *)(a2 + 4);
  *a4 = 0;
  if ( !(_WORD)v4 )
    return 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)a2 + v4 * (unsigned int)*(unsigned __int8 *)(a2 + 8);
  v12 = v4 - 1;
  while ( v8 <= v12 )
  {
    v9 = (v8 + v12) >> 1;
    v10 = (unsigned int *)(a1 + 8LL * v9 - *(unsigned __int16 *)(a1 + 18) + (unsigned int)v11);
    v13 = *v10;
    if ( a3 == *v10 )
      return 0x40000000LL;
    if ( v8 == v12 )
      break;
    if ( a3 >= v13 )
    {
      if ( a3 > v13 )
        v8 = v9 + 1;
    }
    else
    {
      v12 = v9 - 1;
    }
  }
  if ( v10 )
  {
    if ( v8 <= v9 )
    {
      if ( v12 >= v9 )
      {
        if ( v8 == v12 )
        {
          if ( a3 >= *v10 )
            LOWORD(v9) = v9 + 1;
          goto LABEL_22;
        }
      }
      else if ( a3 < *v10 )
      {
        goto LABEL_22;
      }
    }
    else if ( a3 < *(_DWORD *)(v11 + a1 + 8LL * v9 + 8 - *(unsigned __int16 *)(a1 + 18)) )
    {
      LOWORD(v9) = v9 + 1;
LABEL_22:
      *a4 = v9;
      return 0LL;
    }
  }
  return 3221225701LL;
}
