/*
 * XREFs of RtlpHpHeapWalk @ 0x18002B340
 * Callers:
 *     RtlWalkHeap @ 0x18005E150 (RtlWalkHeap.c)
 *     RtlpWalkHeapInternal @ 0x18005E1A0 (RtlpWalkHeapInternal.c)
 *     RtlpHpTagDestroyHeap @ 0x18005E6D0 (RtlpHpTagDestroyHeap.c)
 * Callees:
 *     RtlpReleaseHeapListLock @ 0x18002AA6C (RtlpReleaseHeapListLock.c)
 *     RtlpAcquireHeapListLock @ 0x18002AAB4 (RtlpAcquireHeapListLock.c)
 *     RtlpHpSegWalk @ 0x18002B478 (RtlpHpSegWalk.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeWalkHeap @ 0x18009F9A0 (RtlpHpLargeWalkHeap.c)
 */

__int64 __fastcall RtlpHpHeapWalk(__int64 a1, __int64 *a2, __int64 a3)
{
  int v3; // r14d
  char v4; // r15
  __int64 v7; // rdx
  int v8; // edi
  unsigned int v9; // ebp
  __int64 v11; // rax

  v3 = 0;
  v4 = a3;
  if ( *a2 )
  {
    if ( *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      v3 = 1;
      RtlpAcquireHeapListLock();
    }
    v7 = *a2;
    if ( *a2 == a1 )
    {
      *a2 = 0LL;
      goto LABEL_6;
    }
    if ( (_WORD)v7 )
    {
LABEL_6:
      v8 = 0;
      goto LABEL_7;
    }
    v11 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(v7 - qword_1801CD918) >> 20));
    if ( v11 )
      v8 = v11 - 1;
    else
      v8 = 2;
LABEL_7:
    while ( v8 < 2 )
    {
      LOBYTE(a3) = v4;
      v9 = RtlpHpSegWalk(a1 + 192LL * v8 + 320, a2, a3);
      if ( v9 != -2147483622 )
        goto LABEL_9;
      *a2 = 0LL;
      ++v8;
    }
    v9 = RtlpHpLargeWalkHeap(a1, a2);
LABEL_9:
    if ( v3 )
      RtlpReleaseHeapListLock(0);
  }
  else
  {
    *((_DWORD *)a2 + 7) = 0;
    a2[1] = 4096LL;
    v9 = 0;
    *((_DWORD *)a2 + 6) = 4096;
    *a2 = a1;
    *((_WORD *)a2 + 9) = -32766;
    *((_BYTE *)a2 + 17) = 0;
    a2[4] = a1;
    a2[5] = a1;
  }
  return v9;
}
