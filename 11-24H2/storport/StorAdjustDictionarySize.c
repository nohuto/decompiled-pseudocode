/*
 * XREFs of StorAdjustDictionarySize @ 0x14013A910
 * Callers:
 *     NvmeControllerAddNvmeNamespaceToList @ 0x1400EA460 (NvmeControllerAddNvmeNamespaceToList.c)
 * Callees:
 *     StorInsertDictionary @ 0x140030C60 (StorInsertDictionary.c)
 */

__int64 __fastcall StorAdjustDictionarySize(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  unsigned int v3; // edi
  int v6; // r8d
  int v7; // r8d
  __int64 v9; // rcx
  __int64 v10; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // r14d
  char *v14; // rbp
  __int64 **v15; // rbx
  __int64 *v16; // rdx
  __int64 *v17; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 )
  {
    v6 = v2 - 1;
    if ( v6 )
    {
      v7 = v6 - 511;
      if ( v7 )
      {
        if ( v7 != 4 )
          return 3221225659LL;
        v9 = 72LL;
      }
      else
      {
        v9 = 64LL;
      }
    }
    else
    {
      v9 = 256LL;
    }
  }
  else
  {
    v9 = 128LL;
  }
  v10 = a2;
  Pool2 = (_QWORD *)ExAllocatePool2(v9, 16LL * a2, 1952672068LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( a2 )
  {
    do
    {
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      Pool2 += 2;
      --v10;
    }
    while ( v10 );
  }
  v13 = *(_DWORD *)(a1 + 4);
  v14 = *(char **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v12;
  *(_DWORD *)(a1 + 4) = a2;
  if ( v13 )
  {
    do
    {
      v15 = (__int64 **)&v14[16 * v3];
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 == (__int64 *)v15 )
          break;
        if ( (__int64 **)v16[1] != v15 || (v17 = (__int64 *)*v16, *(__int64 **)(*v16 + 8) != v16) )
          __fastfail(3u);
        *v15 = v17;
        v17[1] = (__int64)v15;
        StorInsertDictionary(a1, v16);
      }
      ++v3;
    }
    while ( v3 < v13 );
  }
  ExFreePoolWithTag(v14, 0x74636944u);
  return 0LL;
}
