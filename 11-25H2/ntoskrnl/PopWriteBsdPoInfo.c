/*
 * XREFs of PopWriteBsdPoInfo @ 0x140431A88
 * Callers:
 *     PopBsdFlush @ 0x140A68FE4 (PopBsdFlush.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlSetSystemBootStatus @ 0x140A69F60 (RtlSetSystemBootStatus.c)
 *     PopQpcTimeInMs @ 0x140B5AA60 (PopQpcTimeInMs.c)
 */

unsigned int __fastcall PopWriteBsdPoInfo(unsigned __int32 BootStatusInformationClass)
{
  ULONG v2; // ebx
  char v3; // r12
  __int128 *v4; // r14
  __int128 *v5; // rsi
  ULONG v6; // r15d
  NTSTATUS v7; // ebx
  unsigned int result; // eax
  __int64 v9; // r10
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-99h] BYREF
  LARGE_INTEGER v11; // [rsp+38h] [rbp-91h] BYREF
  __int64 v12; // [rsp+40h] [rbp-89h] BYREF
  __int64 v13; // [rsp+48h] [rbp-81h] BYREF
  _BYTE DataBuffer[64]; // [rsp+50h] [rbp-79h] BYREF
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
  memset_0(DataBuffer, 0, sizeof(DataBuffer));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = 1;
  if ( BootStatusInformationClass == 7 )
  {
    v4 = &PopBsdPowerTransition;
    v5 = &PopBsdPowerTransitionOnDisk;
LABEL_3:
    v2 = 32;
    goto LABEL_4;
  }
  if ( BootStatusInformationClass == 16 )
  {
    v4 = &PopBsdPowerTransitionExtension;
    v5 = &PopBsdPowerTransitionExtensionOnDisk;
    goto LABEL_3;
  }
  if ( BootStatusInformationClass != 14 )
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
    memmove(DataBuffer, v4, v2);
    PopReleaseRwLock(&PopBsdUpdateLock);
    v7 = RtlSetSystemBootStatus((RTL_BSD_ITEM_TYPE)BootStatusInformationClass, DataBuffer, v2, 0LL);
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    if ( v7 < 0 )
    {
      if ( BootStatusInformationClass == 14 && HIWORD(xmmword_140E67050) != 0xFFFF )
        ++HIWORD(xmmword_140E67050);
    }
    else
    {
      memmove(v5, DataBuffer, v6);
    }
  }
LABEL_7:
  v11 = KeQueryPerformanceCounter(0LL);
  result = PopQpcTimeInMs(&PerformanceCounter, &v11);
  v9 = result;
  if ( (v7 < 0 || result) && (unsigned int)dword_140E07680 > 5 )
  {
    if ( (qword_140E07690 & 0x200000000000LL) == 0
      || (result = 0, (qword_140E07698 & 0x200000000000LL) != qword_140E07698) )
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
      PerformanceCounter.LowPart = BootStatusInformationClass;
      v12 = v9;
      v11.LowPart = v7;
      v13 = 0x1000000LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07680,
               (unsigned __int8 *)&word_14004837E,
               0LL,
               0LL,
               6u,
               &v15);
    }
  }
  return result;
}
