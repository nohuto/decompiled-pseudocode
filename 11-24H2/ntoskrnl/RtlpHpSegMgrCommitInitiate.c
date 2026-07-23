/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x14035E2C4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14035E694 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x14047C830 (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        int *BugCheckParameter2,
        char *a6)
{
  __int64 v8; // r11
  int v9; // r14d
  char v10; // r12
  char v11; // al
  signed __int16 v12; // di
  __int16 v13; // r13
  __int16 v14; // bx
  signed __int16 v15; // bx
  __int16 v16; // si
  signed __int16 v17; // ax
  bool v18; // zf
  unsigned int v19; // edx

  v8 = a1;
  v9 = 0;
  v10 = 0;
  v11 = a4;
LABEL_2:
  v12 = *a2;
  while ( 1 )
  {
    v13 = v12;
    v14 = v12;
    if ( a3 > 0 )
    {
      if ( (v12 & 0x4000) != 0 )
      {
        _mm_pause();
        goto LABEL_2;
      }
      if ( (v12 & 0x7FF) == 0 )
      {
        v18 = (v11 & 3) != 0 ? (v11 & 2) == 0 : (unsigned int)RtlpHpSegMgrApplyLargePagePolicy(v8, 0LL, 2047LL) == 0;
        if ( !v18 )
          v14 = v12 | 0x4000;
      }
LABEL_6:
      v15 = a3 + v14;
      goto LABEL_7;
    }
    if ( v12 >= 0 )
    {
      v19 = -1073741567;
      goto LABEL_23;
    }
    if ( a3 + (v12 & 0x7FF) )
      goto LABEL_6;
    v15 = v12 | 0x4000;
LABEL_7:
    v16 = v15 & 0x4000;
    if ( (v15 & 0x4000) != 0 )
    {
      v9 = 1;
      v10 = RtlpHpAcquireLockExclusive(BugCheckParameter2, *(_DWORD *)(v8 + 40) & 1);
    }
    v17 = _InterlockedCompareExchange16(a2, v15, v12);
    v18 = v12 == v17;
    v12 = v17;
    if ( v18 )
      break;
    if ( v9 )
    {
      RtlpHpReleaseLockExclusive((ULONG_PTR)BugCheckParameter2);
      v9 = 0;
    }
    v11 = a4;
    v8 = a1;
  }
  if ( a3 <= 0 )
  {
    v19 = v16 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v13 >= 0 )
  {
    v19 = (v16 != 0) - 1073741567;
  }
  else
  {
    v19 = -1073741568;
  }
LABEL_23:
  if ( v9 )
    *a6 = v10;
  return v19;
}
