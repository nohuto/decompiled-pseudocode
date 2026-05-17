/*
 * XREFs of RtlpHpVsSlotFreeList @ 0x18011B418
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpVsSlotCompact @ 0x18011B65C (RtlpHpVsSlotCompact.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x18004F2C4 (RtlpHpVsSubsegmentFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsSlotFreeInternal @ 0x18011B510 (RtlpHpVsSlotFreeInternal.c)
 */

__int64 *__fastcall RtlpHpVsSlotFreeList(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  bool v3; // zf
  _QWORD *v4; // rdi
  _QWORD *v7; // r8
  __int64 *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 *result; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-28h]
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]

  v3 = (*(_BYTE *)(a1 + 5) & 1) == 0;
  v4 = (_QWORD *)a3;
  v16 = 0LL;
  v14 = &v13;
  v13 = (__int64)&v13;
  v15 = 0LL;
  if ( v3 )
  {
    *((_QWORD *)&v15 + 1) = a2 + 8;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 8), (volatile signed __int32 **)a2, a3);
  }
  do
  {
    v7 = v4 - 2;
    v4 = (_QWORD *)*v4;
    v8 = (__int64 *)RtlpHpVsSlotFreeInternal(a1, a2, v7, &v15);
    if ( v8 )
    {
      v9 = v14;
      if ( (__int64 *)*v14 != &v13 )
LABEL_13:
        __fastfail(3u);
      v8[1] = (__int64)v14;
      *v8 = (__int64)&v13;
      *v9 = (__int64)v8;
      v14 = v8;
    }
  }
  while ( v4 );
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(*((volatile signed __int64 **)&v15 + 1));
  while ( 1 )
  {
    v10 = v13;
    result = &v13;
    if ( (__int64 *)v13 == &v13 )
      return result;
    if ( *(__int64 **)(v13 + 8) != &v13 )
      goto LABEL_13;
    v12 = *(_QWORD *)v13;
    if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_13;
    v13 = *(_QWORD *)v13;
    *(_QWORD *)(v12 + 8) = &v13;
    RtlpHpVsSubsegmentFree(a1, v10);
  }
}
