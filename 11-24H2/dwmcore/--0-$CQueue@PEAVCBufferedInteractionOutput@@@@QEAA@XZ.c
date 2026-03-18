/*
 * XREFs of ??0?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAA@XZ @ 0x1800EEC64
 * Callers:
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800EEA64 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQueue<CBufferedInteractionOutput *>::CQueue<CBufferedInteractionOutput *>(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return a1;
}
