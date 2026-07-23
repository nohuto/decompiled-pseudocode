/*
 * XREFs of RtlpHpHeapWalk @ 0x18009B8E0
 * Callers:
 *     RtlWalkHeap @ 0x18009B450 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x18009B880 (RtlpWalkHeapInternal.c)
 *     RtlpHpTagDestroyHeap @ 0x18009BA7C (RtlpHpTagDestroyHeap.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18009BDD0 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpHpSegWalk @ 0x18009B5D0 (RtlpHpSegWalk.c)
 *     RtlpHpLargeWalkHeap @ 0x18010FD2C (RtlpHpLargeWalkHeap.c)
 */

__int64 __fastcall RtlpHpHeapWalk(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // r14d
  __int64 v8; // rdx
  int v9; // edi
  unsigned int v10; // ebp
  __int64 v12; // rax

  v4 = 0;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      v4 = 1;
      RtlEnterCriticalSection(&RtlpProcessHeapsLock);
    }
    v8 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == a1 )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_6;
    }
    if ( (_WORD)v8 )
    {
LABEL_6:
      v9 = 0;
      goto LABEL_7;
    }
    v12 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(v8 - qword_1801D0978) >> 20));
    if ( v12 )
      v9 = v12 - 1;
    else
      v9 = 2;
LABEL_7:
    while ( v9 < 2 )
    {
      v10 = RtlpHpSegWalk((__int64 *)(a1 + 192LL * v9 + 320), (__int64 *)a2, a3, a4);
      if ( v10 != -2147483622 )
        goto LABEL_9;
      *(_QWORD *)a2 = 0LL;
      ++v9;
    }
    v10 = RtlpHpLargeWalkHeap(a1, a2);
LABEL_9:
    if ( v4 )
      RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
  }
  else
  {
    *(_DWORD *)(a2 + 28) = 0;
    *(_QWORD *)(a2 + 8) = 4096LL;
    v10 = 0;
    *(_DWORD *)(a2 + 24) = 4096;
    *(_QWORD *)a2 = a1;
    *(_WORD *)(a2 + 18) = -32766;
    *(_BYTE *)(a2 + 17) = 0;
    *(_QWORD *)(a2 + 32) = a1;
    *(_QWORD *)(a2 + 40) = a1;
  }
  return v10;
}
