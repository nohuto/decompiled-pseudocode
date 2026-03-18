/*
 * XREFs of PopWriteHiberPages @ 0x140B5EA28
 * Callers:
 *     PopWriteSecurePages @ 0x1405D3784 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x1405D3838 (PopWriteSecurePagesCallback.c)
 *     PopHiberWriteBootFreePageMap @ 0x140B5D55C (PopHiberWriteBootFreePageMap.c)
 *     PopWriteChecksumPages @ 0x140B5E62C (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140B5E6C4 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140B5ED50 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     MmGetNumberOfPhysicalPages @ 0x14045F260 (MmGetNumberOfPhysicalPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x1405CD440 (_PopInternalError.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopGetIoLocation @ 0x140B5CF94 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B5D024 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140B5DB54 (PopRecordHibernateDiagnosticInfo.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  _BYTE *v14; // r15
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rbp
  unsigned int v17; // ebx
  unsigned __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int16 v24; // ax
  unsigned int v25; // r13d
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rbx
  unsigned __int64 v29; // rbx
  int v30; // ecx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-1D0h]
  unsigned __int64 IoLocation; // [rsp+40h] [rbp-1C8h] BYREF
  ULONG MaxDataSize[2]; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-1B8h]
  __int64 v37; // [rsp+58h] [rbp-1B0h]
  __int64 v38; // [rsp+60h] [rbp-1A8h]
  __int64 v39; // [rsp+68h] [rbp-1A0h]
  __int64 v40; // [rsp+70h] [rbp-198h]
  _BYTE v41[320]; // [rsp+80h] [rbp-188h] BYREF

  v33 = a2;
  v5 = a2;
  v38 = a1;
  v6 = a1;
  memset_0(v41, 0, 0x138uLL);
  result = (unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v32 = 0LL;
  IoLocation = 0LL;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = guard_dispatch_icall_no_overrides(v9, v8, v10, v11);
  ++PopWatchdogTimerCount;
  if ( *(int *)(v6 + 204) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_140F0AD50 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v6 + 200) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v6);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v6);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140F0AD50, *(unsigned int *)(v6 + 200), BugCheckParameter4);
    }
    v14 = v41;
    if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
      v14 = *(_BYTE **)(v6 + 352);
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA2688uLL);
    result = *(_QWORD *)(v6 + 176);
    v15 = a4 << 12;
    v40 = result;
    v16 = a3 << 12;
    while ( v16 )
    {
      v17 = v16;
      IoLocation = PopGetIoLocation(result, v15, &v32);
      if ( v16 > v32 )
        v17 = v32;
      v37 = (unsigned int)v5;
      v36 = v5 & 0xFFF;
      v18 = ((unsigned __int64)v17 + v36 + 4095) >> 12;
      if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
      {
        v22 = *(unsigned int *)(v6 + 440);
        if ( v18 > v22 )
        {
          v23 = ((_DWORD)v22 << 12) - ((_DWORD)v18 << 12);
          v18 = (unsigned int)v22;
          v17 += v23;
        }
      }
      else if ( v18 > 0x10 )
      {
        v21 = v18 - 16;
        v18 = 16LL;
        v17 -= v21 << 12;
      }
      v39 = v17;
      v24 = ((v36 + 4095 + (unsigned __int64)v17) >> 12) + 6;
      *((_QWORD *)v14 + 3) = v5;
      *((_WORD *)v14 + 4) = 8 * v24;
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 4) = v5 & 0xFFFFFFFFFFFFF000uLL;
      v25 = 0;
      v26 = v37 & 0xFFF;
      *((_DWORD *)v14 + 10) = v17;
      *((_DWORD *)v14 + 11) = v26;
      *((_WORD *)v14 + 5) = 1;
      if ( v18 )
      {
        v27 = v33;
        v28 = 0LL;
        do
        {
          ++v25;
          *(_QWORD *)&v14[8 * v28 + 48] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v27 + (v28 << 12))).QuadPart >> 12;
          v28 = v25;
        }
        while ( v25 < v18 );
        v6 = v38;
      }
      v29 = __rdtsc();
      v30 = guard_dispatch_icall_no_overrides(&IoLocation, v14, v19, v20);
      v31 = __rdtsc();
      dword_140F0B558 += v18;
      qword_140F0B378 += (((unsigned __int64)HIDWORD(v31) << 32) | (unsigned int)v31) - v29;
      result = v39;
      v5 = v39 + v33;
      v16 -= v39;
      v15 += v39;
      v33 += v39;
      if ( v30 < 0 )
      {
        *(_DWORD *)(v6 + 204) = v30;
        return result;
      }
      result = v40;
    }
  }
  return result;
}
