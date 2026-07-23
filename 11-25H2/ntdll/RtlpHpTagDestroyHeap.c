/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x18009BA7C
 * Callers:
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpHeapWalk @ 0x18009B8E0 (RtlpHpHeapWalk.c)
 *     RtlpEnsureSegHeapLockedForWalk @ 0x18009BA24 (RtlpEnsureSegHeapLockedForWalk.c)
 *     RtlpWalkHeap @ 0x18009C880 (RtlpWalkHeap.c)
 *     RtlpHpTaggableHeap @ 0x1800DBCC0 (RtlpHpTaggableHeap.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  int v2; // eax
  int v3; // r9d
  __int128 v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+30h] [rbp-28h]
  __int128 v6; // [rsp+40h] [rbp-18h]

  if ( (RtlpHpHeapFeatures & 2) != 0 && (unsigned int)RtlpHpTaggableHeap() )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
      {
        RtlpEnsureSegHeapLockedForWalk(a1);
        v2 = RtlpHpHeapWalk(a1, (__int64)&v4, 1, v3);
      }
      else
      {
        v2 = RtlpWalkHeap(a1);
      }
      if ( v2 < 0 )
        break;
      if ( (BYTE2(v5) & 0x11) == 0x11 )
      {
        if ( (_WORD)v6 )
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801D5C98 + 8LL * (unsigned __int16)v6 - 8) + 32LL),
            -*((_QWORD *)&v4 + 1));
      }
    }
  }
}
