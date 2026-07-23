/*
 * XREFs of RtlpHpSegMgrAllocate @ 0x18009C1EC
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x18009BC50 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpHpSegMgrRelease @ 0x18006B47C (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrReserve @ 0x18009C2B0 (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x18009C5B0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180156750 (RtlpHpSegMgrVaCtxInsert.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrAllocate(int *a1, int a2, int a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v9; // [rsp+20h] [rbp-38h]
  unsigned int v10; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0;
  v12 = 0;
  v11 = 0LL;
  if ( (int)RtlpHpSegMgrReserve((_DWORD)a1, a3, (unsigned int)&v11, (unsigned int)&v10, (__int64)&v12) < 0 )
  {
    v6 = v11;
    v7 = 0LL;
  }
  else
  {
    v9 = a2;
    v6 = v11;
    if ( (int)RtlpHpSegMgrCommit((int)a1, v9, 1073745920, a3) < 0 )
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
