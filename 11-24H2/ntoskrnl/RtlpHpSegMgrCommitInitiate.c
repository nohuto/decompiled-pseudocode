/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x1402C25F4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402C21D4 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140481570 (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        int *BugCheckParameter2,
        unsigned __int8 *a6)
{
  __int64 v8; // r11
  int v9; // r14d
  unsigned __int8 v10; // r12
  char v11; // al
  __int64 v12; // r8
  signed __int16 v13; // di
  __int16 v14; // r13
  __int16 v15; // bx
  signed __int16 v16; // bx
  __int16 v17; // si
  signed __int16 v18; // ax
  char v19; // al
  bool v20; // zf
  unsigned int v21; // edx

  v8 = a1;
  v9 = 0;
  v10 = 0;
  v11 = a4;
  v12 = 2047LL;
LABEL_2:
  v13 = *a2;
  while ( 1 )
  {
    v14 = v13;
    v15 = v13;
    if ( a3 > 0 )
    {
      if ( (v13 & 0x4000) != 0 )
      {
        _mm_pause();
        goto LABEL_2;
      }
      if ( (v13 & 0x7FF) == 0 )
      {
        v20 = (v11 & 3) != 0 ? (v11 & 2) == 0 : (unsigned int)RtlpHpSegMgrApplyLargePagePolicy(v8, 0LL, 2047LL) == 0;
        if ( !v20 )
          v15 = v13 | 0x4000;
      }
LABEL_6:
      v16 = a3 + v15;
      goto LABEL_7;
    }
    if ( v13 >= 0 )
    {
      v21 = -1073741567;
      goto LABEL_23;
    }
    if ( a3 + (v13 & 0x7FF) )
      goto LABEL_6;
    v16 = v13 | 0x4000;
LABEL_7:
    v17 = v16 & 0x4000;
    if ( (v16 & 0x4000) != 0 )
    {
      v9 = 1;
      v19 = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_DWORD *)(v8 + 40) & 1, v12);
      v8 = a1;
      v10 = v19;
    }
    v18 = _InterlockedCompareExchange16(a2, v16, v13);
    v20 = v13 == v18;
    v13 = v18;
    if ( v20 )
      break;
    if ( v9 )
    {
      RtlpHpReleaseLockExclusive((ULONG_PTR)BugCheckParameter2, *(_DWORD *)(v8 + 40) & 1, v10);
      v9 = 0;
    }
    v11 = a4;
    v8 = a1;
    v12 = 2047LL;
  }
  if ( a3 <= 0 )
  {
    v21 = v17 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v14 >= 0 )
  {
    v21 = (v17 != 0) - 1073741567;
  }
  else
  {
    v21 = -1073741568;
  }
LABEL_23:
  if ( v9 )
    *a6 = v10;
  return v21;
}
