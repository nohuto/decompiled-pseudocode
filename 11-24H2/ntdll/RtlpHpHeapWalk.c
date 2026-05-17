/*
 * XREFs of RtlpHpHeapWalk @ 0x180047C00
 * Callers:
 *     RtlWalkHeap @ 0x180047770 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x180047BA0 (RtlpWalkHeapInternal.c)
 *     RtlpHpTagDestroyHeap @ 0x180047D9C (RtlpHpTagDestroyHeap.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800480F0 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegWalk @ 0x1800478F0 (RtlpHpSegWalk.c)
 *     RtlpHpLargeWalkHeap @ 0x18010D2FC (RtlpHpLargeWalkHeap.c)
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
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
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
    v12 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801CE930, 2 * ((unsigned __int64)(v8 - qword_1801CE928) >> 20));
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
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
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
