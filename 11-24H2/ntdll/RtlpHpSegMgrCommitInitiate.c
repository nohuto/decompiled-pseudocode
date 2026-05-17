/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x1801162E4
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180091A20 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x180158170 (RtlpHpSegMgrApplyLargePagePolicy.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        volatile signed __int32 *a5,
        char *a6)
{
  unsigned __int16 v6; // di
  int v7; // r15d
  char v8; // r13
  char v9; // al
  unsigned __int64 v12; // r8
  __int16 v13; // bx
  bool v14; // zf
  signed __int16 v15; // bx
  __int16 v16; // si
  __int16 v17; // bp
  signed __int16 v18; // ax
  unsigned int v19; // edx
  __int64 v21; // [rsp+60h] [rbp+8h]

  v21 = a1;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  v9 = a4;
  while ( 2 )
  {
    v12 = 2047LL;
    while ( 1 )
    {
      v13 = v6;
      if ( a3 <= 0 )
        break;
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) == 0 )
        {
          v14 = (v9 & 3) != 0
              ? (v9 & 2) == 0
              : (unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1, 0x4000LL, 2047LL) == 0;
          if ( !v14 )
            v13 = v6 | 0x4000;
        }
        v15 = a3 + v13;
        v16 = v6 >> 15;
        goto LABEL_17;
      }
      _mm_pause();
      v6 = *a2;
    }
    v16 = v6 >> 15;
    if ( (v6 & 0x8000u) == 0 )
    {
      v19 = -1073741567;
      goto LABEL_29;
    }
    if ( a3 + (v6 & 0x7FF) )
      v15 = a3 + v6;
    else
      v15 = v6 | 0x4000;
LABEL_17:
    v17 = v15 & 0x4000;
    if ( (v15 & 0x4000) != 0 )
    {
      v7 = 1;
      RtlAcquireSRWLockExclusive(a5, (volatile signed __int32 **)0x4000, v12);
      v8 = -1;
    }
    v18 = _InterlockedCompareExchange16(a2, v15, v6);
    v14 = v6 == (unsigned __int16)v18;
    v6 = v18;
    if ( !v14 )
    {
      if ( v7 )
      {
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)a5);
        v7 = 0;
      }
      v9 = a4;
      a1 = v21;
      continue;
    }
    break;
  }
  if ( a3 <= 0 )
  {
    v19 = v17 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v16 )
  {
    v19 = -1073741568;
  }
  else
  {
    v19 = (v17 != 0) - 1073741567;
  }
LABEL_29:
  if ( v7 )
    *a6 = v8;
  return v19;
}
