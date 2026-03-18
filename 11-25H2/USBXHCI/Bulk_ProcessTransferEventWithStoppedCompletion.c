/*
 * XREFs of Bulk_ProcessTransferEventWithStoppedCompletion @ 0x14002E42C
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x140017A48 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithStoppedCompletion(
        __int64 a1,
        __int64 *a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  __int64 result; // rax

  if ( a2 )
  {
    v7 = *a2;
    *(_DWORD *)(v7 + 108) += a4;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 48) + 32LL) & 1) != 0 && *(_DWORD *)(v7 + 76) == 2 )
      memmove((void *)a2[8], *(const void **)(a2[9] + 16), a4);
    if ( *(_DWORD *)(v7 + 108) == *(_DWORD *)(v7 + 104) )
    {
      *(_DWORD *)(v7 + 68) = 1;
    }
    else if ( a3 == 28 )
    {
      *(_DWORD *)(v7 + 68) = 28;
    }
  }
  result = a5;
  *(_DWORD *)(a1 + 360) = a5;
  return result;
}
