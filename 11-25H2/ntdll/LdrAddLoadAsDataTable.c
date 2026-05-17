/*
 * XREFs of LdrAddLoadAsDataTable @ 0x18001FDF0
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x18001FC84 (LdrpInitMuiCrits.c)
 *     LdrRemoveLoadAsDataTable @ 0x180020030 (LdrRemoveLoadAsDataTable.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrLogNewDataDllLoad @ 0x18006EC90 (LdrLogNewDataDllLoad.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrAddLoadAsDataTable(wchar_t *String2, _WORD *Src, __int64 a3, __int64 a4, __int64 a5)
{
  void *v9; // r14
  int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rax
  size_t v14; // rdi
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 Heap; // rax
  unsigned int v20; // [rsp+20h] [rbp-38h]

  v9 = 0LL;
  v10 = 0;
  if ( !String2 )
    return 3221225485LL;
  LdrpInitMuiCrits((__int64)String2, (__int64)Src, a3, a4);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v11 = 0;
  v20 = 0;
  v12 = LoadAsDataTable;
  while ( v11 < LoadAsDataTableCount )
  {
    if ( *(wchar_t **)(v12 + 48LL * v11) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2);
      v12 = LoadAsDataTable;
    }
    v20 = ++v11;
  }
  if ( v12 )
  {
    if ( LoadAsDataTableCount < (unsigned int)LoadAsDataTableBlockCount )
      goto LABEL_6;
    Heap = RtlReAllocateHeap(
             NtCurrentPeb()->ProcessHeap,
             0LL,
             LoadAsDataTable,
             48LL * (unsigned int)(LoadAsDataTableBlockCount + 32),
             v20);
    v12 = Heap;
    if ( !Heap )
    {
      v10 = -1073741801;
      goto LABEL_23;
    }
    LoadAsDataTable = Heap;
    LoadAsDataTableBlockCount += 32;
  }
  else
  {
    v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    v12 = v17;
    if ( !v17 )
    {
      v10 = -1073741801;
      goto LABEL_23;
    }
    LoadAsDataTable = v17;
    LoadAsDataTableBlockCount = 32;
  }
  v10 = 0;
LABEL_6:
  if ( !Src )
  {
LABEL_15:
    v16 = 6LL * (unsigned int)LoadAsDataTableCount;
    *(_QWORD *)(v12 + 8 * v16) = String2;
    *(_QWORD *)(v12 + 8 * v16 + 8) = v9;
    *(_QWORD *)(v12 + 8 * v16 + 16) = a3;
    *(_QWORD *)(v12 + 8 * v16 + 24) = a4;
    *(_DWORD *)(v12 + 8 * v16 + 32) = 1;
    *(_QWORD *)(v12 + 8 * v16 + 40) = a5;
    ++LoadAsDataTableCount;
    goto LABEL_23;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( Src[v13] );
  v14 = 2 * v13;
  v15 = (void *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  v9 = v15;
  if ( v15 )
  {
    memmove(v15, Src, v14);
    v10 = 0;
    v12 = LoadAsDataTable;
    goto LABEL_15;
  }
  v10 = -1073741801;
LABEL_23:
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  if ( v10 >= 0 )
  {
    if ( Src )
      LdrLogNewDataDllLoad(String2, Src);
  }
  return (unsigned int)v10;
}
