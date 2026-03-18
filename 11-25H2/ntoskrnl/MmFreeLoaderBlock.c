/*
 * XREFs of MmFreeLoaderBlock @ 0x140C3D564
 * Callers:
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void MmFreeLoaderBlock()
{
  __int64 v0; // r9
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 i; // rcx
  int v6; // ebp
  __int64 v7; // r8
  unsigned int v8; // eax
  _QWORD **v9; // rax
  unsigned __int64 v10; // r8
  _QWORD *v11; // r8
  __int64 Pool; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  unsigned __int64 k; // rbx
  unsigned int v17; // eax
  _QWORD **v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *j; // rdi
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx

  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v1 = 0;
  v2 = 0LL;
  v3 = v0 + 352;
  v4 = *(_QWORD *)(v0 + 360);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return;
    i = v4 ^ (v3 | 1);
  }
  else
  {
    i = *(_QWORD *)(v0 + 360);
  }
  if ( i )
  {
    v6 = 2113664;
    do
    {
      v7 = *(_QWORD *)(i + 40);
      if ( v7 )
      {
        v8 = *(_DWORD *)(i + 24);
        if ( v8 == 19 )
        {
          v2 += v7;
        }
        else if ( v8 <= 0x15 && _bittest(&v6, v8) )
        {
          ++v1;
        }
      }
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
    }
    while ( i );
    if ( v2 )
      MiPageBootRegistry(v0, v2);
    if ( v1 )
    {
      Pool = MiAllocatePool(0x40uLL, 16LL * v1, 1649241421);
      v13 = (_QWORD *)Pool;
      if ( Pool )
      {
        v14 = *(_QWORD *)(v3 + 8);
        v15 = (_QWORD *)Pool;
        if ( (v14 & 1) != 0 )
        {
          if ( v14 == 1 )
          {
LABEL_41:
            for ( j = v15 - 2; j >= v13; j -= 2 )
            {
              v22 = (_QWORD *)(48LL * *j - 0x21FFFFFFFFF8LL);
              v23 = j[1];
              v24 = *v22 | 0x8000000000000000uLL;
              while ( --v23 )
              {
                v22 += 6;
                v24 += 8LL;
                if ( (*v22 | 0x8000000000000000uLL) != v24 )
                {
                  v25 = *(_QWORD *)(48LL * *j - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
                  v26 = (__int64)(v24 - v25) >> 3;
                  MiDeleteBootRange(v25, v26);
                  j[1] -= v26;
                  *j += v26;
                  j += 2;
                  if ( v26 )
                    goto LABEL_47;
                  break;
                }
              }
              MiDeleteBootRange(*(_QWORD *)(48LL * *j - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL, j[1]);
LABEL_47:
              ;
            }
            ExFreePoolWithTag(v13, 0);
            return;
          }
          k = v14 ^ (v3 | 1);
        }
        else
        {
          k = *(_QWORD *)(v3 + 8);
        }
        while ( k )
        {
          v17 = *(_DWORD *)(k + 24);
          if ( v17 <= 0x15 && _bittest(&v6, v17) && *(_QWORD *)(k + 40) )
          {
            *v15 = *(_QWORD *)(k + 32);
            v15[1] = *(_QWORD *)(k + 40);
            v15 += 2;
          }
          v18 = *(_QWORD ***)(k + 8);
          v19 = k;
          if ( v18 )
          {
            v20 = *v18;
            for ( k = *(_QWORD *)(k + 8); v20; v20 = (_QWORD *)*v20 )
              k = (unsigned __int64)v20;
          }
          else
          {
            while ( 1 )
            {
              k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !k || *(_QWORD *)k == v19 )
                break;
              v19 = k;
            }
          }
        }
        goto LABEL_41;
      }
    }
  }
}
