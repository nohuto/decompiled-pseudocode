/*
 * XREFs of NewNameSpaceObject @ 0x140001CFC
 * Callers:
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     InitializeNativeNamespace @ 0x1400547F0 (InitializeNativeNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 * Callees:
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall NewNameSpaceObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  KIRQL v5; // al
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rcx
  __int64 i; // rbx
  __int64 v12; // rbx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v6 = a1;
  v18 = a1;
  byte_140088F48 = v5;
  v7 = a1;
  v8 = a1;
  v9 = a1;
  while ( 2 )
  {
    if ( v8 )
    {
      v10 = (__int64 *)(v9 + 40);
      v4 = v7;
      for ( i = *v10; ; i = *(_QWORD *)(v3 + 16) )
      {
        v3 = i - 16;
        if ( v10 == (__int64 *)(v3 + 16) )
        {
          v3 = 0LL;
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v3 + 4) >= 0xB0u )
          break;
      }
      if ( v3 )
      {
        v15 = *(_QWORD *)(v3 + 16);
        if ( *(_QWORD *)(v15 + 8) != v3 + 16 || (v16 = *(_QWORD **)(v3 + 24), *v16 != v3 + 16) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = *(_DWORD *)(v3 + 4);
        if ( v17 >= 0xD0 )
        {
          *(_DWORD *)(v3 + 176) = 0;
          *(_DWORD *)(v3 + 180) = v17 - 176;
          *(_QWORD *)(v3 + 184) = v6;
          *(_DWORD *)(v3 + 4) = 176;
          HeapInsertFreeList(v6);
        }
        goto LABEL_11;
      }
LABEL_6:
      if ( (unsigned int)(*(_DWORD *)(v6 + 8) - *(_DWORD *)(v6 + 32)) < 0xB0 )
      {
        v6 = *(_QWORD *)(v6 + 24);
        v8 = v6;
        v18 = v6;
        v7 = v6;
        v9 = v6;
        continue;
      }
      v3 = *(_QWORD *)(v6 + 32);
      *(_QWORD *)(v6 + 32) = v3 + 176;
      *(_DWORD *)(v3 + 4) = 176;
      goto LABEL_11;
    }
    break;
  }
  if ( a1 == gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0xE8 )
    {
      v7 = 0xB0 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0xB0 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 176;
    }
    v14 = NewGlobalHeap(&v18, v7);
  }
  else
  {
    v14 = NewLocalHeap(&v18, v7);
  }
  if ( v14 )
  {
    v6 = 0LL;
    v18 = 0LL;
  }
  else
  {
    v6 = v18;
    *(_QWORD *)(v18 + 16) = a1;
    *(_QWORD *)(v4 + 24) = v6;
    v3 = *(_QWORD *)(v6 + 32);
    *(_QWORD *)(v6 + 32) = v3 + 176;
    *(_DWORD *)(v3 + 4) = 176;
  }
  if ( v3 )
  {
LABEL_11:
    *(_DWORD *)v3 = 1330859592;
    *(_QWORD *)(v3 + 8) = v6;
    memset((void *)(v3 + 16), 0, 0xA0uLL);
  }
  KeReleaseSpinLock(&gmutHeap, byte_140088F48);
  v12 = (v3 + 16) & -(__int64)(v3 != 0);
  if ( v12 )
  {
    memset((void *)v12, 0, 0xA0uLL);
    *(_QWORD *)(v12 + 32) = v12 + 24;
    *(_QWORD *)(v12 + 24) = v12 + 24;
    *(_QWORD *)(v12 + 144) = 0LL;
    *(_QWORD *)(v12 + 152) = -1LL;
    *(_DWORD *)(v12 + 112) = 2;
    *(_DWORD *)(v12 + 128) = 1;
    *(_QWORD *)(v12 + 120) = v12;
  }
  return v12;
}
