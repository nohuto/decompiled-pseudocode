/*
 * XREFs of MiCreateSparsePfnDatabase @ 0x140C53498
 * Callers:
 *     MiCreatePfnDatabase @ 0x140C51020 (MiCreatePfnDatabase.c)
 * Callees:
 *     MxMapPfnRange @ 0x140C550D8 (MxMapPfnRange.c)
 */

__int64 __fastcall MiCreateSparsePfnDatabase(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // r9
  int v3; // esi
  __int64 v4; // r15
  unsigned __int64 i; // rbx
  int v6; // edi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD **v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 360);
  v2 = -1LL;
  v3 = 3;
  v4 = 0LL;
  if ( (v1 & 1) != 0 )
  {
    if ( v1 == 1 )
      goto LABEL_50;
    i = v1 ^ ((a1 + 352) | 1);
  }
  else
  {
    i = *(_QWORD *)(a1 + 360);
  }
  if ( i )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(i + 24);
      v7 = v6 & 0x1FFFFFFF;
      if ( (unsigned int)v7 <= 0x2C && (v8 = 0x15C5C0C00048LL, _bittest64(&v8, v7)) )
      {
        if ( v2 != -1LL )
          goto LABEL_9;
      }
      else
      {
        if ( v2 != -1LL )
        {
          if ( v2 + v4 != *(_QWORD *)(i + 32) )
            goto LABEL_9;
          if ( (v3 & 0x20000000) == 0 || (v3 & 0x1FFFFFFF) == 2 || (v3 & 0x1FFFFFFF) == 0x18 )
          {
            if ( (v6 & 0x20000000) != 0 && (_DWORD)v7 != 2 && (_DWORD)v7 != 24 )
            {
              if ( (v3 & 0x20000000) == 0 )
                goto LABEL_9;
              goto LABEL_33;
            }
          }
          else
          {
LABEL_33:
            if ( (v3 & 0x1FFFFFFF) == 2
              || (v3 & 0x1FFFFFFF) == 0x18
              || (v6 & 0x20000000) == 0
              || (v6 & 0x1FFFFFFF) == 2
              || (v6 & 0x1FFFFFFF) == 0x18 )
            {
LABEL_9:
              MxMapPfnRange(v2);
              if ( (v6 & 0x1FFFFFFF) == 0x1E
                || (v6 & 0x1FFFFFFF) == 0x1F
                || (v6 & 0x1FFFFFFF) == 6
                || (v6 & 0x1FFFFFFF) == 0x20
                || (v6 & 0x1FFFFFFF) == 0x22
                || (v6 & 0x1FFFFFFF) == 0x17
                || (v6 & 0x1FFFFFFF) == 3
                || (v6 & 0x1FFFFFFF) == 0x16
                || (v6 & 0x1FFFFFFF) == 0x2A
                || (v6 & 0x1FFFFFFF) == 0x26
                || (v6 & 0x1FFFFFFF) == 0x27
                || (v6 & 0x1FFFFFFF) == 0x2C
                || (v6 & 0x1FFFFFFF) == 0x28 )
              {
                v2 = -1LL;
              }
              else
              {
                v2 = *(_QWORD *)(i + 32);
                v3 = v6;
                v4 = *(_QWORD *)(i + 40);
              }
              goto LABEL_40;
            }
          }
          v4 += *(_QWORD *)(i + 40);
          goto LABEL_40;
        }
        v4 = *(_QWORD *)(i + 40);
        v2 = *(_QWORD *)(i + 32);
        v3 = *(_DWORD *)(i + 24);
      }
LABEL_40:
      v9 = *(_QWORD ***)(i + 8);
      v10 = i;
      if ( v9 )
      {
        v11 = *v9;
        for ( i = *(_QWORD *)(i + 8); v11; v11 = (_QWORD *)*v11 )
          i = (unsigned __int64)v11;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v10 )
            break;
          v10 = i;
        }
      }
      if ( !i )
      {
        if ( v2 != -1LL )
          MxMapPfnRange(v2);
        break;
      }
    }
  }
LABEL_50:
  MxMapPfnRange(qword_140E2DD20 + 1);
  result = qword_140E2DD20 + 1;
  if ( qword_140E35C40 != qword_140E2DD20 + 1 )
    return MxMapPfnRange(qword_140E35C40);
  return result;
}
