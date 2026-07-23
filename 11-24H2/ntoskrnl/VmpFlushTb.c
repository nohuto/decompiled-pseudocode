/*
 * XREFs of VmpFlushTb @ 0x1402A1F80
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     VmFlushTb @ 0x1402A1F40 (VmFlushTb.c)
 * Callees:
 *     VmpProcessContextLockExclusive @ 0x14039EC68 (VmpProcessContextLockExclusive.c)
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14039ECB4 (VmpConvertPortionVpnRangeToGpnRange.c)
 *     VmpInvalidateOutstandingFaults @ 0x14039F950 (VmpInvalidateOutstandingFaults.c)
 *     VmpInsertInvalidateListRange @ 0x14039FB08 (VmpInsertInvalidateListRange.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     VmpProcessContextUnlockExclusive @ 0x14047A000 (VmpProcessContextUnlockExclusive.c)
 *     VmpProcessInvalidateList @ 0x1404A41E8 (VmpProcessInvalidateList.c)
 *     VmpLogTbFlushSlatFlushEntire @ 0x14064A314 (VmpLogTbFlushSlatFlushEntire.c)
 */

unsigned __int64 __fastcall VmpFlushTb(PEX_SPIN_LOCK SpinLock, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // r14
  char *v4; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 result; // rax
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-41h]
  __int128 v27; // [rsp+50h] [rbp-39h] BYREF
  __int128 v28; // [rsp+60h] [rbp-29h] BYREF
  __int128 v29; // [rsp+70h] [rbp-19h] BYREF
  __int64 v30; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+88h] [rbp-1h]
  __int128 v32; // [rsp+90h] [rbp+7h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+17h]
  int v34; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int64 v35; // [rsp+108h] [rbp+7Fh]

  v3 = -1LL;
  v4 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  if ( !a2 )
  {
    v3 = VmpProcessContextLockExclusive(SpinLock);
    v4 = (char *)KeGetCurrentPrcb()->VmInternal + 4608;
    if ( *(_QWORD *)&VmpTraceLoggingProvider
      && **(_DWORD **)&VmpTraceLoggingProvider
      && (unsigned __int8)tlgKeywordOn(*(_QWORD *)&VmpTraceLoggingProvider, 256LL) )
    {
      VmpLogTbFlushSlatFlushEntire(v21, *((_QWORD *)SpinLock + 13));
    }
    v34 = 0;
    v25 = 0LL;
    v27 = 0LL;
    v26 = 0x10000000000001LL;
    do
    {
      result = VmpConvertPortionVpnRangeToGpnRange(
                 (_DWORD)SpinLock,
                 (unsigned int)&v25,
                 0x40000 - (int)v5,
                 (unsigned int)&v32,
                 (__int64)&v27,
                 (__int64)&v34,
                 1);
      v9 = *((_QWORD *)&v27 + 1);
      v10 = result;
      if ( !*((_QWORD *)&v27 + 1) )
        break;
      VmpInsertInvalidateListRange((_DWORD)SpinLock, (_DWORD)v4, v27, result, *((__int64 *)&v27 + 1), v34);
      result = VmpInvalidateOutstandingFaults(SpinLock, v10, v9);
      v5 += v9;
      if ( v5 >= 0x40000 )
      {
        if ( *((_QWORD *)v4 + 1) )
          VmpProcessInvalidateList(SpinLock, v4);
        v22 = *((_QWORD *)SpinLock + 9);
        VmpProcessContextUnlockExclusive(SpinLock, v3);
        v5 = 0LL;
        v3 = VmpProcessContextLockExclusive(SpinLock);
        if ( v22 != *((_QWORD *)SpinLock + 9) )
        {
          v32 = 0LL;
          v33 = 0LL;
        }
        result = (unsigned __int64)KeGetCurrentPrcb();
        v4 = (char *)(*(_QWORD *)(result + 35664) + 4608LL);
      }
    }
    while ( v26 );
    goto LABEL_5;
  }
  v11 = 0LL;
  result = a2;
  v12 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  v35 = (unsigned __int64)&a3[a2];
  if ( (unsigned __int64)a3 < v35 )
  {
    result = (unsigned __int64)&a3[a2];
    while ( 1 )
    {
      v13 = *a3;
      if ( *a3 <= 0x7FFFFFFEFFFFLL )
        break;
LABEL_23:
      if ( (unsigned __int64)++a3 >= result )
      {
        if ( v12 )
        {
          v34 = 0;
          v29 = 0LL;
          v30 = v11;
          v31 = v12;
          do
          {
            result = VmpConvertPortionVpnRangeToGpnRange(
                       (_DWORD)SpinLock,
                       (unsigned int)&v30,
                       0x40000 - (int)v5,
                       (unsigned int)&v32,
                       (__int64)&v29,
                       (__int64)&v34,
                       1);
            v17 = *((_QWORD *)&v29 + 1);
            v18 = result;
            if ( !*((_QWORD *)&v29 + 1) )
              break;
            VmpInsertInvalidateListRange((_DWORD)SpinLock, (_DWORD)v4, v29, result, *((__int64 *)&v29 + 1), v34);
            result = VmpInvalidateOutstandingFaults(SpinLock, v18, v17);
            v5 += v17;
            if ( v5 >= 0x40000 )
            {
              if ( *((_QWORD *)v4 + 1) )
                VmpProcessInvalidateList(SpinLock, v4);
              v24 = *((_QWORD *)SpinLock + 9);
              VmpProcessContextUnlockExclusive(SpinLock, v3);
              v5 = 0LL;
              v3 = VmpProcessContextLockExclusive(SpinLock);
              if ( v24 != *((_QWORD *)SpinLock + 9) )
              {
                v32 = 0LL;
                v33 = 0LL;
              }
              result = (unsigned __int64)KeGetCurrentPrcb();
              v4 = (char *)(*(_QWORD *)(result + 35664) + 4608LL);
            }
          }
          while ( v31 );
        }
LABEL_5:
        if ( v3 != -1 )
        {
          if ( *((_QWORD *)v4 + 1) )
            VmpProcessInvalidateList(SpinLock, v4);
          return VmpProcessContextUnlockExclusive(SpinLock, v3);
        }
        return result;
      }
    }
    v14 = (*a3 & 0x3FF) + 1;
    v15 = (v13 >> 10) & 3;
    if ( ((v13 >> 10) & 3) != 0 )
    {
      do
      {
        v14 <<= 9;
        --v15;
      }
      while ( v15 );
    }
    v16 = v13 >> 12;
    v25 = v16;
    if ( v3 == -1 )
    {
      v3 = VmpProcessContextLockExclusive(SpinLock);
      v16 = v25;
      v11 = v27;
      v4 = (char *)KeGetCurrentPrcb()->VmInternal + 4608;
    }
    if ( v12 )
    {
      if ( v16 == v12 + v11 )
      {
        v12 += v14;
LABEL_22:
        result = v35;
        goto LABEL_23;
      }
      v34 = 0;
      v28 = 0LL;
      *(_QWORD *)&v29 = v11;
      *((_QWORD *)&v29 + 1) = v12;
      do
      {
        v19 = VmpConvertPortionVpnRangeToGpnRange(
                (_DWORD)SpinLock,
                (unsigned int)&v29,
                0x40000 - (int)v5,
                (unsigned int)&v32,
                (__int64)&v28,
                (__int64)&v34,
                1);
        v20 = *((_QWORD *)&v28 + 1);
        *(_QWORD *)&v27 = v19;
        if ( !*((_QWORD *)&v28 + 1) )
          break;
        VmpInsertInvalidateListRange((_DWORD)SpinLock, (_DWORD)v4, v28, v19, *((__int64 *)&v28 + 1), v34);
        VmpInvalidateOutstandingFaults(SpinLock, v27, v20);
        v5 += v20;
        if ( v5 >= 0x40000 )
        {
          if ( *((_QWORD *)v4 + 1) )
            VmpProcessInvalidateList(SpinLock, v4);
          v23 = *((_QWORD *)SpinLock + 9);
          VmpProcessContextUnlockExclusive(SpinLock, v3);
          v5 = 0LL;
          v3 = VmpProcessContextLockExclusive(SpinLock);
          if ( v23 != *((_QWORD *)SpinLock + 9) )
          {
            v32 = 0LL;
            v33 = 0LL;
          }
          v4 = (char *)KeGetCurrentPrcb()->VmInternal + 4608;
        }
      }
      while ( *((_QWORD *)&v29 + 1) );
    }
    v11 = v25;
    v12 = v14;
    *(_QWORD *)&v27 = v25;
    goto LABEL_22;
  }
  return result;
}
