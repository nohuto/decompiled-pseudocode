/*
 * XREFs of RtlpHpTagDestroyHeap @ 0x180047D9C
 * Callers:
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpHeapWalk @ 0x180047C00 (RtlpHpHeapWalk.c)
 *     RtlpEnsureSegHeapLockedForWalk @ 0x180047D44 (RtlpEnsureSegHeapLockedForWalk.c)
 *     RtlpWalkHeap @ 0x180048BA0 (RtlpWalkHeap.c)
 *     RtlpHpTaggableHeap @ 0x1800DC750 (RtlpHpTaggableHeap.c)
 */

void __fastcall RtlpHpTagDestroyHeap(__int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  int v4; // r9d
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int128 v7; // [rsp+40h] [rbp-18h]

  if ( (RtlpHpHeapFeatures & 2) != 0 && (unsigned int)RtlpHpTaggableHeap() )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
      {
        RtlpEnsureSegHeapLockedForWalk(a1);
        v3 = RtlpHpHeapWalk(a1, (__int64)&v5, 1, v4);
      }
      else
      {
        LOBYTE(v2) = 1;
        v3 = RtlpWalkHeap(a1, &v5, v2);
      }
      if ( v3 < 0 )
        break;
      if ( (BYTE2(v6) & 0x11) == 0x11 )
      {
        if ( (_WORD)v7 )
        {
          v2 = -*((_QWORD *)&v5 + 1);
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801D3C38 + 8LL * (unsigned __int16)v7 - 8) + 32LL),
            -*((_QWORD *)&v5 + 1));
        }
      }
    }
  }
}
