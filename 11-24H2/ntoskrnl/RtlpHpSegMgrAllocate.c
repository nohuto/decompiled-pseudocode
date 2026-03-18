/*
 * XREFs of RtlpHpSegMgrAllocate @ 0x1402C1104
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1402C1ABC (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpHpSegMgrRelease @ 0x1402BCD10 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrReserve @ 0x1402C11C4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402C2AA8 (RtlpHpSegMgrVaCtxInsert.c)
 */

__int64 __fastcall RtlpHpSegMgrAllocate(__int64 a1, char a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  char v9; // [rsp+20h] [rbp-38h]
  unsigned int v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0;
  v12 = 0;
  v11 = 0LL;
  if ( (int)RtlpHpSegMgrReserve(a1, a3, (unsigned int)&v11, (unsigned int)&v10, (__int64)&v12) < 0 )
  {
    v6 = v11;
    v7 = 0LL;
  }
  else
  {
    v9 = a2;
    v6 = v11;
    if ( (int)RtlpHpSegMgrCommit(a1, v9, 1073745920, a3) < 0 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v10 < v12 )
        RtlpHpSegMgrVaCtxInsert(a1, v6);
      v7 = v6;
      v6 = 0LL;
    }
  }
  if ( v6 )
    RtlpHpSegMgrRelease(a1, v6, 0);
  return v7;
}
