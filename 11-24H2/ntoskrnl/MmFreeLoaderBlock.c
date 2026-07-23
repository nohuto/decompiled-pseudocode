/*
 * XREFs of MmFreeLoaderBlock @ 0x140C5097C
 * Callers:
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14066A6F8 (MiPageBootRegistry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void MmFreeLoaderBlock()
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 i; // rcx
  int v5; // ebp
  __int64 v6; // r8
  unsigned int v7; // eax
  _QWORD **v8; // rax
  unsigned __int64 v9; // r8
  _QWORD *v10; // r8
  __int64 Pool; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  unsigned __int64 k; // rbx
  unsigned int v16; // eax
  _QWORD **v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *j; // rdi
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx

  v0 = 0;
  v1 = 0LL;
  v2 = KeLoaderBlock_0 + 352;
  v3 = *(_QWORD *)(KeLoaderBlock_0 + 360);
  if ( (v3 & 1) != 0 )
  {
    if ( v3 == 1 )
      return;
    i = v3 ^ (v2 | 1);
  }
  else
  {
    i = *(_QWORD *)(KeLoaderBlock_0 + 360);
  }
  if ( i )
  {
    v5 = 2113664;
    do
    {
      v6 = *(_QWORD *)(i + 40);
      if ( v6 )
      {
        v7 = *(_DWORD *)(i + 24);
        if ( v7 == 19 )
        {
          v1 += v6;
        }
        else if ( v7 <= 0x15 && _bittest(&v5, v7) )
        {
          ++v0;
        }
      }
      v8 = *(_QWORD ***)(i + 8);
      v9 = i;
      if ( v8 )
      {
        v10 = *v8;
        for ( i = *(_QWORD *)(i + 8); v10; v10 = (_QWORD *)*v10 )
          i = (unsigned __int64)v10;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v9 )
            break;
          v9 = i;
        }
      }
    }
    while ( i );
    if ( v1 )
      MiPageBootRegistry(KeLoaderBlock_0, v1);
    if ( v0 )
    {
      Pool = MiAllocatePool(0x40uLL, 16LL * v0, 1649241421);
      v12 = (_QWORD *)Pool;
      if ( Pool )
      {
        v13 = *(_QWORD *)(v2 + 8);
        v14 = (_QWORD *)Pool;
        if ( (v13 & 1) != 0 )
        {
          if ( v13 == 1 )
          {
LABEL_41:
            for ( j = v14 - 2; j >= v12; j -= 2 )
            {
              v21 = (_QWORD *)(48LL * *j - 0x21FFFFFFFFF8LL);
              v22 = j[1];
              v23 = *v21 | 0x8000000000000000uLL;
              while ( --v22 )
              {
                v21 += 6;
                v23 += 8LL;
                if ( (*v21 | 0x8000000000000000uLL) != v23 )
                {
                  v24 = *(_QWORD *)(48LL * *j - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
                  v25 = (__int64)(v23 - v24) >> 3;
                  MiDeleteBootRange(v24, v25);
                  j[1] -= v25;
                  *j += v25;
                  j += 2;
                  if ( v25 )
                    goto LABEL_47;
                  break;
                }
              }
              MiDeleteBootRange(*(_QWORD *)(48LL * *j - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL, j[1]);
LABEL_47:
              ;
            }
            ExFreePoolWithTag(v12, 0);
            return;
          }
          k = v13 ^ (v2 | 1);
        }
        else
        {
          k = *(_QWORD *)(v2 + 8);
        }
        while ( k )
        {
          v16 = *(_DWORD *)(k + 24);
          if ( v16 <= 0x15 && _bittest(&v5, v16) && *(_QWORD *)(k + 40) )
          {
            *v14 = *(_QWORD *)(k + 32);
            v14[1] = *(_QWORD *)(k + 40);
            v14 += 2;
          }
          v17 = *(_QWORD ***)(k + 8);
          v18 = k;
          if ( v17 )
          {
            v19 = *v17;
            for ( k = *(_QWORD *)(k + 8); v19; v19 = (_QWORD *)*v19 )
              k = (unsigned __int64)v19;
          }
          else
          {
            while ( 1 )
            {
              k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !k || *(_QWORD *)k == v18 )
                break;
              v18 = k;
            }
          }
        }
        goto LABEL_41;
      }
    }
  }
}
