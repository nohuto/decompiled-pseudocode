/*
 * XREFs of PopWriteBsdPoInfo @ 0x140427FF8
 * Callers:
 *     PopBsdFlush @ 0x140A6B984 (PopBsdFlush.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlSetSystemBootStatus @ 0x140A6C590 (RtlSetSystemBootStatus.c)
 *     PopQpcTimeInMs @ 0x140B6A560 (PopQpcTimeInMs.c)
 */

unsigned int __fastcall PopWriteBsdPoInfo(ULONG a1)
{
  unsigned int v2; // ebx
  char v3; // r12
  __int128 *v4; // r14
  __int128 *v5; // rsi
  unsigned int v6; // r15d
  int v7; // ebx
  unsigned int result; // eax
  __int64 v9; // r10
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-99h] BYREF
  LARGE_INTEGER v11; // [rsp+38h] [rbp-91h] BYREF
  __int64 v12; // [rsp+40h] [rbp-89h] BYREF
  __int64 v13; // [rsp+48h] [rbp-81h] BYREF
  _BYTE Src[64]; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+90h] [rbp-39h] BYREF
  LARGE_INTEGER *p_PerformanceCounter; // [rsp+B0h] [rbp-19h]
  int v17; // [rsp+B8h] [rbp-11h]
  int v18; // [rsp+BCh] [rbp-Dh]
  __int64 *v19; // [rsp+C0h] [rbp-9h]
  int v20; // [rsp+C8h] [rbp-1h]
  int v21; // [rsp+CCh] [rbp+3h]
  LARGE_INTEGER *v22; // [rsp+D0h] [rbp+7h]
  int v23; // [rsp+D8h] [rbp+Fh]
  int v24; // [rsp+DCh] [rbp+13h]
  __int64 *v25; // [rsp+E0h] [rbp+17h]
  int v26; // [rsp+E8h] [rbp+1Fh]
  int v27; // [rsp+ECh] [rbp+23h]

  v2 = 64;
  memset_0(Src, 0, sizeof(Src));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = 1;
  if ( a1 == 7 )
  {
    v4 = &PopBsdPowerTransition;
    v5 = &PopBsdPowerTransitionOnDisk;
LABEL_3:
    v2 = 32;
    goto LABEL_4;
  }
  if ( a1 == 16 )
  {
    v4 = &PopBsdPowerTransitionExtension;
    v5 = &PopBsdPowerTransitionExtensionOnDisk;
    goto LABEL_3;
  }
  if ( a1 != 14 )
  {
    v7 = -1073741811;
    goto LABEL_7;
  }
  v4 = &PopBsdPhysicalPowerButtonInfo;
  v5 = &PopBsdPhysicalPowerButtonInfoOnDisk;
LABEL_4:
  v6 = v2;
  if ( RtlCompareMemory(v4, v5, v2) == v2 )
  {
    v7 = -1073741791;
  }
  else
  {
    memmove(Src, v4, v2);
    PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
    v7 = RtlSetSystemBootStatus(a1, Src, v2, 0LL);
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    if ( v7 < 0 )
    {
      if ( a1 == 14 && HIWORD(xmmword_140E672C0) != 0xFFFF )
        ++HIWORD(xmmword_140E672C0);
    }
    else
    {
      memmove(v5, Src, v6);
    }
  }
LABEL_7:
  v11 = KeQueryPerformanceCounter(0LL);
  result = PopQpcTimeInMs(&PerformanceCounter, &v11);
  v9 = result;
  if ( (v7 < 0 || result) && (unsigned int)dword_140E076F0 > 5 )
  {
    if ( (qword_140E07700 & 0x200000000000LL) == 0
      || (result = 0, (qword_140E07708 & 0x200000000000LL) != qword_140E07708) )
    {
      v3 = 0;
    }
    if ( v3 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      p_PerformanceCounter = &PerformanceCounter;
      v19 = &v12;
      v17 = 4;
      v22 = &v11;
      v25 = &v13;
      v20 = 8;
      v23 = 4;
      v26 = 8;
      PerformanceCounter.LowPart = a1;
      v12 = v9;
      v11.LowPart = v7;
      v13 = 0x1000000LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E076F0,
               (unsigned __int8 *)byte_140048B88,
               0LL,
               0LL,
               6u,
               &v15);
    }
  }
  return result;
}
