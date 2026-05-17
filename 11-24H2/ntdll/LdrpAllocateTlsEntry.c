/*
 * XREFs of LdrpAllocateTlsEntry @ 0x18000776C
 * Callers:
 *     LdrpHandleTlsData @ 0x180008200 (LdrpHandleTlsData.c)
 *     LdrpInitializeTls @ 0x18008ECD0 (LdrpInitializeTls.c)
 * Callees:
 *     LdrpAcquireTlsIndex @ 0x180006038 (LdrpAcquireTlsIndex.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpGenericExceptionFilter @ 0x1801185C0 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTlsEntry(__int64 a1, __int64 a2, unsigned int *a3, _BYTE *a4, __int64 *a5)
{
  __int64 Heap; // rax
  __int64 v9; // rbx
  unsigned int v10; // edx
  __int64 *v11; // rax
  int v12; // edi

  Heap = RtlAllocateHeap(LdrpTlsHeap, (unsigned int)(NtdllBaseTag + 786432), 72LL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_OWORD *)(Heap + 16) = *(_OWORD *)a1;
  *(_OWORD *)(Heap + 32) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(Heap + 48) = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(Heap + 24) < *(_QWORD *)(Heap + 16) )
  {
    v12 = -1073741701;
    goto LABEL_13;
  }
  if ( a4 )
  {
    v12 = LdrpAcquireTlsIndex(a3, a4);
    if ( v12 >= 0 )
    {
      v10 = *a3;
      goto LABEL_5;
    }
LABEL_13:
    RtlFreeHeap(LdrpTlsHeap, 0LL, v9);
    return (unsigned int)v12;
  }
  v10 = (*a3)++;
LABEL_5:
  **(_DWORD **)(v9 + 32) = v10;
  *(_DWORD *)(v9 + 64) = v10;
  *(_QWORD *)(v9 + 56) = a2;
  v11 = (__int64 *)off_1801CC940;
  if ( *off_1801CC940 != (_UNKNOWN *)&LdrpTlsList )
    __fastfail(3u);
  *(_QWORD *)v9 = &LdrpTlsList;
  *(_QWORD *)(v9 + 8) = v11;
  *v11 = v9;
  off_1801CC940 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
