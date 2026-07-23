/*
 * XREFs of MmInitializeMemoryLimits @ 0x140C58680
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140C1E8F4 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializeResourceMap @ 0x140C24FB8 (IopInitializeResourceMap.c)
 *     MiInitializePhysicalMemoryBlocks @ 0x140C51CC4 (MiInitializePhysicalMemoryBlocks.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MmInitializeMemoryLimits(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  _QWORD *i; // rcx
  _QWORD **v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _DWORD *Pool; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 j; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD **v23; // rax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rbx
  _QWORD *result; // rax

  v2 = a1 + 352;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 360);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return 0LL;
    i = (_QWORD *)(v4 ^ (v2 | 1));
  }
  else
  {
    i = *(_QWORD **)(a1 + 360);
  }
  if ( i )
  {
    do
    {
      v7 = (_QWORD **)i[1];
      v8 = i;
      v9 = v3++;
      if ( v7 )
      {
        v10 = *v7;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v8 )
            break;
          v8 = i;
        }
      }
    }
    while ( i );
    if ( v3 )
    {
      Pool = (_DWORD *)MiAllocatePool(0x40uLL, 16 * (v9 + 2), 1817013581);
      v12 = Pool;
      if ( Pool )
      {
        *Pool = v3;
        v13 = 0;
        v14 = *(_QWORD *)(v2 + 8);
        v15 = 0LL;
        v16 = -1LL;
        if ( (v14 & 1) != 0 )
        {
          if ( v14 == 1 )
            goto LABEL_39;
          j = v14 ^ (v2 | 1);
        }
        else
        {
          j = *(_QWORD *)(v2 + 8);
        }
        if ( j )
        {
          do
          {
            v18 = *(_DWORD *)(j + 24) & 0x1FFFFFFF;
            if ( (unsigned int)v18 < 0x2F && *(_BYTE *)(v18 + a2) )
            {
              v19 = *(_QWORD *)(j + 40);
              v20 = *(_QWORD *)(j + 32);
              v15 += v19;
              if ( v20 == v16 && v13 )
              {
                v12[2 * v13 + 1] += v19;
                v16 += *(_QWORD *)(j + 40);
              }
              else
              {
                v21 = 2LL * v13++;
                v12[v21 + 2] = v20;
                v22 = *(_QWORD *)(j + 40);
                v12[v21 + 3] = v22;
                v16 = v22 + v20;
              }
            }
            v23 = *(_QWORD ***)(j + 8);
            v24 = j;
            if ( v23 )
            {
              v25 = *v23;
              for ( j = *(_QWORD *)(j + 8); v25; v25 = (_QWORD *)*v25 )
                j = (unsigned __int64)v25;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v24 )
                  break;
                v24 = j;
              }
            }
          }
          while ( j );
          if ( v13 )
          {
            if ( v3 > v13 )
            {
              v26 = MiAllocatePool(0x40uLL, 16 * (v13 - 1 + 2LL), 1817013581);
              v27 = (_QWORD *)v26;
              if ( v26 )
              {
                memmove((void *)(v26 + 16), v12 + 2, 16LL * v13);
                ExFreePoolWithTag(v12, 0);
                v12 = v27;
              }
            }
            goto LABEL_40;
          }
        }
LABEL_39:
        v12[2] = 0LL;
        v12[3] = 0LL;
LABEL_40:
        *(_DWORD *)v12 = v13;
        result = v12;
        v12[1] = v15;
        return result;
      }
    }
  }
  return 0LL;
}
