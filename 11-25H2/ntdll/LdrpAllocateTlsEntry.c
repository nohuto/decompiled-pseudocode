/*
 * XREFs of LdrpAllocateTlsEntry @ 0x1800236B8
 * Callers:
 *     LdrpHandleTlsData @ 0x180021A20 (LdrpHandleTlsData.c)
 *     LdrpInitializeTls @ 0x1800B7E90 (LdrpInitializeTls.c)
 * Callees:
 *     LdrpAcquireTlsIndex @ 0x180025310 (LdrpAcquireTlsIndex.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpGenericExceptionFilter @ 0x18011B640 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpAllocateTlsEntry(__int64 a1, __int64 a2, int *a3, __int64 a4, _QWORD *a5)
{
  _QWORD *Heap; // rax
  _QWORD *v9; // rbx
  int v10; // edx
  _QWORD *v11; // rax
  int v12; // edi

  Heap = RtlAllocateHeap(LdrpTlsHeap, NtdllBaseTag + 786432, 0x48uLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *((_OWORD *)Heap + 1) = *(_OWORD *)a1;
  *((_OWORD *)Heap + 2) = *(_OWORD *)(a1 + 16);
  Heap[6] = *(_QWORD *)(a1 + 32);
  if ( Heap[3] < Heap[2] )
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
    RtlFreeHeap(LdrpTlsHeap, 0, v9);
    return (unsigned int)v12;
  }
  v10 = (*a3)++;
LABEL_5:
  *(_DWORD *)v9[4] = v10;
  *((_DWORD *)v9 + 16) = v10;
  v9[7] = a2;
  v11 = off_1801CE940;
  if ( *off_1801CE940 != (_UNKNOWN *)&LdrpTlsList )
    __fastfail(3u);
  *v9 = &LdrpTlsList;
  v9[1] = v11;
  *v11 = v9;
  off_1801CE940 = (_UNKNOWN **)v9;
  if ( a5 )
    *a5 = v9;
  return 0LL;
}
