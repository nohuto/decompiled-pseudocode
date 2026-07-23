/*
 * XREFs of RtlpHpSegMgrRelease @ 0x140364450
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x14035D548 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentFree @ 0x14045D818 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxFree @ 0x14035CE60 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14035D9AC (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _WORD *v7; // rsi
  unsigned int v8; // ebp
  unsigned __int64 v9; // r15
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h]
  ULONG_PTR v13; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+10h] BYREF

  v3 = a2;
  v4 = (unsigned int)-*(_DWORD *)a1;
  LOBYTE(v5) = *(_BYTE *)(a1 + 13) & 7;
  v13 = v4;
  if ( !(_BYTE)v5 )
  {
LABEL_7:
    if ( v3 )
    {
      v5 = (v3 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v14 = v5;
      v13 = v3 + v4 - v5;
      if ( v3 + v4 != v5 )
        LOBYTE(v5) = RtlpHpVaMgrCtxFree(&unk_140E68558, &v14, &v13);
    }
    return v5;
  }
  if ( v4 >= 0x200000 )
  {
LABEL_11:
    v11 = 0LL;
    v12 = 0LL;
    RtlpHpVaMgrCtxQuery((__int64)&unk_140E68558, v3, (__int64)&v11);
    v7 = (_WORD *)v12;
    v5 = v4 >> 21;
    v8 = 0;
    v9 = v12 + 2 * (v4 >> 21);
    if ( (unsigned __int64)v12 < v9 )
    {
      do
      {
        LOWORD(v5) = *v7;
        if ( (*v7 & 0x7FF) != 0 )
          LOBYTE(v5) = RtlpHpSegMgrCommit(a1, v3, v8, 512, -(v5 & 0x7FF), 0x4000, 0);
        ++v7;
        v8 += 512;
      }
      while ( (unsigned __int64)v7 < v9 );
    }
    goto LABEL_7;
  }
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, a2, 0, (unsigned int)v4 >> 12, -a3, 0x4000, 0);
  v5 = RtlpHpSegMgrVaCtxFree(a1, v3, &v13);
  v3 = v5;
  if ( v5 )
  {
    v4 = v13;
    goto LABEL_11;
  }
  return v5;
}
