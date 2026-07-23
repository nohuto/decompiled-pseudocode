/*
 * XREFs of RtlpHpSegMgrRelease @ 0x1800114DC
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegSegmentFree @ 0x1800B96A4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegMgrAllocate @ 0x1800BA9E0 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x1800BBF10 (RtlpHpTlLogVAChange.c)
 *     RtlpHpQueryVA @ 0x1800BCC64 (RtlpHpQueryVA.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1801597F0 (RtlpHpSegMgrVaCtxFree.c)
 */

char __fastcall RtlpHpSegMgrRelease(int *a1, unsigned __int64 a2, int a3)
{
  int v4; // edx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _WORD *v8; // rbx
  int v9; // esi
  unsigned __int64 v10; // r14
  unsigned __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v13; // [rsp+78h] [rbp+38h] BYREF
  _WORD *v14; // [rsp+88h] [rbp+48h] BYREF

  v4 = *a1;
  LOBYTE(v5) = *((_BYTE *)a1 + 13) & 7;
  v14 = 0LL;
  v6 = (unsigned int)-v4;
  v13 = v6;
  v12 = a2;
  if ( !(_BYTE)v5 )
  {
LABEL_2:
    if ( a2 )
    {
      v5 = (a2 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
      v12 = v5;
      v13 = a2 + v6 - v5;
      if ( a2 + v6 != v5 )
      {
        LOBYTE(v5) = RtlpHpVaMgrCtxFree(&unk_1801D09C8, &v12, &v13);
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          LOBYTE(v5) = RtlpHpTlLogVAChange(0x8000LL, v13, v12, 0LL);
      }
    }
    return v5;
  }
  if ( v6 >= 0x200000 )
    goto LABEL_10;
  if ( a3 > 0 )
    RtlpHpSegMgrCommit((int)a1, -a3, 0x4000, 0);
  v5 = RtlpHpSegMgrVaCtxFree(a1, a2, &v13);
  v12 = v5;
  a2 = v5;
  if ( v5 )
  {
LABEL_10:
    RtlpHpQueryVA(a2, v6, &v14, 0LL);
    v8 = v14;
    v9 = 0;
    v6 = v13;
    v5 = v13 >> 21;
    v10 = (unsigned __int64)&v14[v13 >> 21];
    if ( (unsigned __int64)v14 < v10 )
    {
      do
      {
        LOWORD(v5) = *v8;
        if ( (*v8 & 0x7FF) != 0 )
          LOBYTE(v5) = RtlpHpSegMgrCommit((int)a1, -(v5 & 0x7FF), 0x4000, 0);
        ++v8;
        v9 += 512;
      }
      while ( (unsigned __int64)v8 < v10 );
      v6 = v13;
    }
    a2 = v12;
    goto LABEL_2;
  }
  return v5;
}
