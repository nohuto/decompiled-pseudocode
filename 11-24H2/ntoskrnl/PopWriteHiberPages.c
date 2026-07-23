/*
 * XREFs of PopWriteHiberPages @ 0x140B60AA8
 * Callers:
 *     PopWriteSecurePages @ 0x1405D0EA4 (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x1405D0F58 (PopWriteSecurePagesCallback.c)
 *     PopHiberWriteBootFreePageMap @ 0x140B5F5DC (PopHiberWriteBootFreePageMap.c)
 *     PopWriteChecksumPages @ 0x140B606AC (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140B60744 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140B60DD0 (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x1405CABB0 (_PopInternalError.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopGetIoLocation @ 0x140B5F010 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B5F0A0 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140B5FBD4 (PopRecordHibernateDiagnosticInfo.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  _BYTE *v12; // r15
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rbp
  unsigned int v15; // ebx
  unsigned __int64 v16; // r14
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // eax
  __int16 v20; // ax
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  int v26; // ecx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-1D0h]
  unsigned __int64 IoLocation; // [rsp+40h] [rbp-1C8h] BYREF
  ULONG MaxDataSize[2]; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-1B8h]
  __int64 v33; // [rsp+58h] [rbp-1B0h]
  __int64 v34; // [rsp+60h] [rbp-1A8h]
  __int64 v35; // [rsp+68h] [rbp-1A0h]
  __int64 v36; // [rsp+70h] [rbp-198h]
  _BYTE v37[320]; // [rsp+80h] [rbp-188h] BYREF

  v29 = a2;
  v5 = a2;
  v34 = a1;
  v6 = a1;
  memset_0(v37, 0, 0x138uLL);
  result = (unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v28 = 0LL;
  IoLocation = 0LL;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = guard_dispatch_icall_no_overrides(v9, v8);
  ++PopWatchdogTimerCount;
  if ( *(int *)(v6 + 204) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_140F0BB90 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v6 + 200) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v6);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v6);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140F0BB90, *(unsigned int *)(v6 + 200), BugCheckParameter4);
    }
    v12 = v37;
    if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
      v12 = *(_BYTE **)(v6 + 352);
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA269AuLL);
    result = *(_QWORD *)(v6 + 176);
    v13 = a4 << 12;
    v36 = result;
    v14 = a3 << 12;
    while ( v14 )
    {
      v15 = v14;
      IoLocation = PopGetIoLocation(result, v13, &v28);
      if ( v14 > v28 )
        v15 = v28;
      v33 = (unsigned int)v5;
      v32 = v5 & 0xFFF;
      v16 = ((unsigned __int64)v15 + v32 + 4095) >> 12;
      if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
      {
        v18 = *(unsigned int *)(v6 + 440);
        if ( v16 > v18 )
        {
          v19 = ((_DWORD)v18 << 12) - ((_DWORD)v16 << 12);
          v16 = (unsigned int)v18;
          v15 += v19;
        }
      }
      else if ( v16 > 0x10 )
      {
        v17 = v16 - 16;
        v16 = 16LL;
        v15 -= v17 << 12;
      }
      v35 = v15;
      v20 = ((v32 + 4095 + (unsigned __int64)v15) >> 12) + 6;
      *((_QWORD *)v12 + 3) = v5;
      *((_WORD *)v12 + 4) = 8 * v20;
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 4) = v5 & 0xFFFFFFFFFFFFF000uLL;
      v21 = 0;
      v22 = v33 & 0xFFF;
      *((_DWORD *)v12 + 10) = v15;
      *((_DWORD *)v12 + 11) = v22;
      *((_WORD *)v12 + 5) = 1;
      if ( v16 )
      {
        v23 = v29;
        v24 = 0LL;
        do
        {
          ++v21;
          *(_QWORD *)&v12[8 * v24 + 48] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v23 + (v24 << 12))).QuadPart >> 12;
          v24 = v21;
        }
        while ( v21 < v16 );
        v6 = v34;
      }
      v25 = __rdtsc();
      v26 = guard_dispatch_icall_no_overrides(&IoLocation, v12);
      v27 = __rdtsc();
      dword_140F0C198 += v16;
      qword_140F0BFB8 += (((unsigned __int64)HIDWORD(v27) << 32) | (unsigned int)v27) - v25;
      result = v35;
      v5 = v35 + v29;
      v14 -= v35;
      v13 += v35;
      v29 += v35;
      if ( v26 < 0 )
      {
        *(_DWORD *)(v6 + 204) = v26;
        return result;
      }
      result = v36;
    }
  }
  return result;
}
