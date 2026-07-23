/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x1801194D4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1800BADA0 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x180159720 (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        PRTL_SRWLOCK SRWLock,
        char *a6)
{
  unsigned __int16 v6; // di
  int v7; // r15d
  char v8; // r13
  char v9; // al
  __int16 v12; // bx
  bool v13; // zf
  signed __int16 v14; // bx
  __int16 v15; // si
  __int16 v16; // bp
  signed __int16 v17; // ax
  unsigned int v18; // edx
  __int64 v20; // [rsp+60h] [rbp+8h]

  v20 = a1;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  v9 = a4;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v6;
      if ( a3 <= 0 )
        break;
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) == 0 )
        {
          v13 = (v9 & 3) != 0
              ? (v9 & 2) == 0
              : (unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1, 0x4000LL, 2047LL) == 0;
          if ( !v13 )
            v12 = v6 | 0x4000;
        }
        v14 = a3 + v12;
        v15 = v6 >> 15;
        goto LABEL_16;
      }
      _mm_pause();
      v6 = *a2;
    }
    v15 = v6 >> 15;
    if ( (v6 & 0x8000u) == 0 )
    {
      v18 = -1073741567;
      goto LABEL_28;
    }
    v14 = a3 + (v6 & 0x7FF) ? a3 + v6 : v6 | 0x4000;
LABEL_16:
    v16 = v14 & 0x4000;
    if ( (v14 & 0x4000) != 0 )
    {
      v7 = 1;
      RtlAcquireSRWLockExclusive(SRWLock);
      v8 = -1;
    }
    v17 = _InterlockedCompareExchange16(a2, v14, v6);
    v13 = v6 == (unsigned __int16)v17;
    v6 = v17;
    if ( v13 )
      break;
    if ( v7 )
    {
      RtlReleaseSRWLockExclusive(SRWLock);
      v7 = 0;
    }
    v9 = a4;
    a1 = v20;
  }
  if ( a3 <= 0 )
  {
    v18 = v16 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v15 )
  {
    v18 = -1073741568;
  }
  else
  {
    v18 = (v16 != 0) - 1073741567;
  }
LABEL_28:
  if ( v7 )
    *a6 = v8;
  return v18;
}
