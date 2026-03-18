/*
 * XREFs of RtlpHpSegMgrRelease @ 0x1402BCD10
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegMgrAllocate @ 0x1402C1104 (RtlpHpSegMgrAllocate.c)
 *     RtlpHpSegSegmentFree @ 0x140465DF4 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpHpSegMgrVaCtxFree @ 0x1402C0D68 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1402C27C8 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxFree @ 0x140421038 (RtlpHpVaMgrCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  _WORD *v7; // rsi
  int v8; // ebp
  unsigned __int64 v9; // r15
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h]
  unsigned __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+98h] [rbp+10h] BYREF

  v4 = (unsigned int)-*(_DWORD *)a1;
  LOBYTE(v5) = *(_BYTE *)(a1 + 13) & 7;
  v13 = v4;
  if ( !(_BYTE)v5 )
  {
LABEL_7:
    if ( a2 )
    {
      v5 = (a2 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v14 = v5;
      v13 = a2 + v4 - v5;
      if ( a2 + v4 != v5 )
        LOBYTE(v5) = RtlpHpVaMgrCtxFree(&unk_140E68358, &v14, &v13);
    }
    return v5;
  }
  if ( v4 >= 0x200000 )
  {
LABEL_11:
    v11 = 0LL;
    v12 = 0LL;
    RtlpHpVaMgrCtxQuery(&unk_140E68358, a2, &v11);
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
          LOBYTE(v5) = RtlpHpSegMgrCommit(a1, -(char)v5, 0x4000, 0);
        ++v7;
        v8 += 512;
      }
      while ( (unsigned __int64)v7 < v9 );
    }
    goto LABEL_7;
  }
  if ( a3 > 0 )
    RtlpHpSegMgrCommit(a1, -(char)a3, 0x4000, 0);
  v5 = RtlpHpSegMgrVaCtxFree(a1, a2, &v13);
  a2 = v5;
  if ( v5 )
  {
    v4 = v13;
    goto LABEL_11;
  }
  return v5;
}
