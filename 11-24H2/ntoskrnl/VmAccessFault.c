/*
 * XREFs of VmAccessFault @ 0x140A042B0
 * Callers:
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 * Callees:
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     VmpAccessFaultBatch @ 0x140399920 (VmpAccessFaultBatch.c)
 *     ExAllocateFromLookasideListEx @ 0x1403C9D30 (ExAllocateFromLookasideListEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VmpPrefetchForVirtualFault @ 0x14079F57C (VmpPrefetchForVirtualFault.c)
 *     VmpLogAccessFault @ 0x14079FA04 (VmpLogAccessFault.c)
 *     VmpLogAccessFaultRange @ 0x14079FBCC (VmpLogAccessFaultRange.c)
 */

__int64 __fastcall VmAccessFault(
        unsigned __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  void *v7; // rdi
  unsigned __int64 v10; // r15
  int v12; // r13d
  int v13; // ebp
  __int64 v14; // rbx
  char *v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // r14
  unsigned __int64 *i; // r13
  unsigned __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v26; // rcx
  char *v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // r11
  int v33; // [rsp+50h] [rbp-398h]
  unsigned __int64 QpcTimeStamp; // [rsp+58h] [rbp-390h] BYREF
  __int64 v35; // [rsp+60h] [rbp-388h]
  __int64 *v36; // [rsp+68h] [rbp-380h]
  unsigned __int64 v37; // [rsp+70h] [rbp-378h]
  unsigned __int64 v38; // [rsp+78h] [rbp-370h]
  PEX_SPIN_LOCK SpinLock; // [rsp+80h] [rbp-368h]
  char v40; // [rsp+90h] [rbp-358h] BYREF

  v7 = 0LL;
  v37 = a3;
  v36 = a2;
  v10 = a3;
  v12 = 16;
  v33 = 16;
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && (*(_BYTE *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 8) != 0
    && (*(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL) & 8LL) == *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider
                                                                                    + 24LL) )
  {
    QpcTimeStamp = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  else
  {
    QpcTimeStamp = 0LL;
  }
  if ( (a4 & 0xFFFFFF00) != 0 )
    __int2c();
  v13 = a5;
  if ( (a5 & 0xFFFFFFFD) != 0 )
    __int2c();
  SpinLock = (PEX_SPIN_LOCK)KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( SpinLock )
  {
    if ( (a4 & 0x20) != 0 && (a4 & 0x18) == 0 )
      VmpPrefetchForVirtualFault(a1, a2, v10);
    v14 = 0LL;
    v15 = &v40;
    if ( v10 > 0x10 || *(_QWORD *)(a1 + 8) > 0x10uLL )
    {
      v27 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)&VmpLargeFaultBatchLookasideList);
      v7 = v27;
      if ( v27 )
      {
        *((_DWORD *)v27 + 1) = 0;
        v15 = v27 + 32;
        *((_QWORD *)v27 + 1) = v27 + 32;
        v33 = 512;
        *(_DWORD *)v27 = 512;
        *((_QWORD *)v27 + 2) = v27 + 24608;
        *((_QWORD *)v27 + 3) = v27 + 24608;
      }
    }
    v16 = v36;
    v17 = 16 * v10;
    for ( i = (unsigned __int64 *)a1; (unsigned __int64)i < v17 + a1; i += 2 )
    {
      v19 = *i;
      v20 = i[1];
      v21 = *v16;
      v35 = *v16;
      v22 = v20 + v19;
      v38 = v20 + v19;
      if ( *(_QWORD *)&VmpTraceLoggingProvider )
      {
        if ( **(_DWORD **)&VmpTraceLoggingProvider )
        {
          if ( (*(_BYTE *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 0x10) != 0 )
          {
            v26 = *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL);
            if ( (v26 & 0x10) == v26 )
            {
              VmpLogAccessFaultRange(v26, v21, v19, v20, a4, a5, a6, v37, a7);
              v21 = v35;
              v22 = v38;
            }
          }
        }
      }
      while ( v19 < v22 )
      {
        if ( (unsigned __int64)(v21 << 12) > 0x7FFFFFFEFFFFLL )
          __int2c();
        v23 = 6 * v14;
        v14 = (unsigned int)(v14 + 1);
        *(_QWORD *)&v15[8 * v23 + 24] = v21 & 0xFFFFFFFFFFFFFLL;
        *(_QWORD *)&v15[8 * v23 + 32] = v19 & 0xFFFFFFFFFFFFFLL;
        if ( (_DWORD)v14 == v33 )
        {
          v24 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v15, v14, (int)v7, a4, a5, a6, a7);
          if ( v24 < 0 )
            goto LABEL_24;
          v21 = v35;
          v14 = 0LL;
          v22 = v38;
        }
        ++v19;
        v35 = ++v21;
      }
      v16 = ++v36;
    }
    if ( !(_DWORD)v14
      || (v24 = VmpAccessFaultBatch(SpinLock, (unsigned __int64)v15, v14, (int)v7, a4, a5, a6, a7), v24 >= 0) )
    {
      v24 = 0;
    }
LABEL_24:
    if ( v7 )
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)&VmpLargeFaultBatchLookasideList, v7);
    v12 = v33;
    v13 = a5;
    v10 = v37;
  }
  else
  {
    __int2c();
    v24 = -1073741688;
    v17 = 16 * v10;
  }
  if ( QpcTimeStamp )
  {
    KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    v28 = v17 + a1;
    v29 = 0LL;
    while ( a1 < v28 )
    {
      v29 += *(_QWORD *)(a1 + 8);
      a1 += 16LL;
    }
    if ( *(_QWORD *)&VmpTraceLoggingProvider
      && **(_DWORD **)&VmpTraceLoggingProvider
      && tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 8LL) )
    {
      VmpLogAccessFault(v30, a4, v13, a6, v10, v31, v12, v32, a7, v24);
    }
  }
  return (unsigned int)v24;
}
