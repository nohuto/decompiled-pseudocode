/*
 * XREFs of WheapInsertPageToList @ 0x14065BA78
 * Callers:
 *     WheaPersistBadPageToRegistry @ 0x14065B76C (WheaPersistBadPageToRegistry.c)
 * Callees:
 *     WheapFormatBadPageList @ 0x14065B9DC (WheapFormatBadPageList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

char __fastcall WheapInsertPageToList(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v3; // r9
  unsigned int v6; // ecx
  __int64 v7; // rax
  char v8; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 *v12; // rbx

  v3 = *a3;
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != 1 )
    {
      v6 = 0;
      v7 = 0LL;
      v8 = 1;
      while ( (unsigned int)v7 < (int)v3 - 1 )
      {
        v9 = *(_QWORD *)(a1 + 8 * v7);
        v10 = (unsigned int)(v7 + 1);
        if ( v9 >= *(_QWORD *)(a1 + 8 * v10) )
        {
          v8 = 0;
          break;
        }
        if ( v9 == a2 )
          return 0;
        v7 = (unsigned int)v10;
        if ( v9 >= a2 )
          LODWORD(v10) = v6;
        v6 = v10;
      }
      *a3 = v3 + 1;
      if ( v8 )
      {
        v12 = (unsigned __int64 *)(a1 + 8LL * v6);
        memmove((void *)(a1 + 8LL * (v6 + 1)), v12, 8LL * ((unsigned int)v3 - v6));
        *v12 = a2;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * v3) = a2;
        WheapFormatBadPageList((char *)a1, v3 + 1, a3);
      }
      return 1;
    }
    if ( a2 > *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = a2;
      goto LABEL_3;
    }
    if ( a2 >= *(_QWORD *)a1 )
      return 0;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  }
  *(_QWORD *)a1 = a2;
LABEL_3:
  *a3 = v3 + 1;
  return 1;
}
