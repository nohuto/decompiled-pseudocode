/*
 * XREFs of LdrAddLoadAsDataTable @ 0x180064190
 * Callers:
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180064024 (LdrpInitMuiCrits.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     LdrLogNewDataDllLoad @ 0x180074410 (LdrLogNewDataDllLoad.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     memmove @ 0x180167400 (memmove.c)
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

  v9 = 0LL;
  v10 = 0;
  if ( !String2 )
    return 3221225485LL;
  LdrpInitMuiCrits((__int64)String2, (__int64)Src);
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v11 = 0;
  v12 = LoadAsDataTable;
  while ( v11 < LoadAsDataTableCount )
  {
    if ( *(wchar_t **)(v12 + 48LL * v11) == String2 )
    {
      LdrRemoveLoadAsDataTable(String2);
      v12 = LoadAsDataTable;
    }
    ++v11;
  }
  if ( v12 )
  {
    if ( LoadAsDataTableCount < (unsigned int)LoadAsDataTableBlockCount )
      goto LABEL_6;
    Heap = RtlReAllocateHeap(
             NtCurrentPeb()->ProcessHeap,
             0LL,
             LoadAsDataTable,
             48LL * (unsigned int)(LoadAsDataTableBlockCount + 32));
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
    v17 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x600uLL);
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
  v15 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2 * v13 + 2);
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
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  if ( v10 >= 0 )
  {
    if ( Src )
      LdrLogNewDataDllLoad(String2, Src);
  }
  return (unsigned int)v10;
}
