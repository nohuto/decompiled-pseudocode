/*
 * XREFs of PopWriteHiberPages @ 0x140B4E968
 * Callers:
 *     PopWriteSecurePages @ 0x1405CED2C (PopWriteSecurePages.c)
 *     PopWriteSecurePagesCallback @ 0x1405CEDE0 (PopWriteSecurePagesCallback.c)
 *     PopHiberWriteBootFreePageMap @ 0x140B4D4CC (PopHiberWriteBootFreePageMap.c)
 *     PopWriteChecksumPages @ 0x140B4E56C (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140B4E604 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140B4EC1C (PopWriteImageHeader.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x1405C8F30 (_PopInternalError.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmGetNumberOfPhysicalPages @ 0x140A0A990 (MmGetNumberOfPhysicalPages.c)
 *     PopGetIoLocation @ 0x140B4CF94 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B4D024 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140B4DA90 (PopRecordHibernateDiagnosticInfo.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopWriteHiberPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r14
  unsigned int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rbx
  unsigned int i; // esi
  unsigned __int64 v19; // rbx
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 IoLocation; // [rsp+40h] [rbp-C0h] BYREF
  ULONG MaxDataSize[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-90h] BYREF
  __int16 v29; // [rsp+78h] [rbp-88h]
  __int16 v30; // [rsp+7Ah] [rbp-86h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  unsigned __int64 v32; // [rsp+90h] [rbp-70h]
  unsigned int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  _QWORD v35[34]; // [rsp+A0h] [rbp-60h]

  v25 = a1;
  v6 = a1;
  memset_0(&v28, 0, 0x138uLL);
  result = (unsigned int)PopWatchdogTimerCount;
  BugCheckParameter4 = 0LL;
  v22 = 0LL;
  IoLocation = 0LL;
  if ( (PopWatchdogTimerCount & 0x1F) == 0 )
    result = guard_dispatch_icall_no_overrides(v8);
  ++PopWatchdogTimerCount;
  if ( *(int *)(v6 + 204) >= 0 )
  {
    if ( (a4 + a3) << 12 > qword_140F0AD70 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v6 + 200) - 4) <= 1 )
        BugCheckParameter4 = PopGetRemainingHibernateRangeDataSize(v6);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v6);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140F0AD70, *(unsigned int *)(v6 + 200), BugCheckParameter4);
    }
    if ( a3 > 0xFFFFFFFFFFFFFLL )
      PopInternalError(0xA25E4uLL);
    result = *(_QWORD *)(v6 + 176);
    v11 = a4 << 12;
    v27 = result;
    v12 = a3 << 12;
    while ( v12 )
    {
      IoLocation = PopGetIoLocation(result, v11, &v22);
      v13 = v12;
      if ( v12 > v22 )
        v13 = v22;
      v14 = a2 & 0xFFF;
      v15 = ((unsigned __int64)v13 + v14 + 4095) >> 12;
      if ( v15 > 0x10 )
      {
        v16 = v15 - 16;
        v15 = 16LL;
        v13 -= v16 << 12;
      }
      v26 = v13;
      v28 = 0LL;
      v34 = a2 & 0xFFF;
      v29 = 8 * (((v14 + (unsigned __int64)v13 + 4095) >> 12) + 6);
      v33 = v13;
      v32 = a2 & 0xFFFFFFFFFFFFF000uLL;
      v31 = a2;
      v30 = 1;
      if ( v15 )
      {
        v17 = 0LL;
        for ( i = 0; i < v15; v17 = i )
        {
          ++i;
          v35[v17] = (unsigned __int64)MmGetPhysicalAddress((PVOID)(a2 + (v17 << 12))).QuadPart >> 12;
        }
        v6 = v25;
      }
      v19 = __rdtsc();
      v20 = guard_dispatch_icall_no_overrides(&IoLocation);
      v21 = __rdtsc();
      dword_140F0B2B8 += v15;
      qword_140F0B0D8 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v19;
      v12 -= v26;
      v11 += v26;
      a2 += v26;
      result = v27;
      if ( v20 < 0 )
      {
        *(_DWORD *)(v6 + 204) = v20;
        return result;
      }
    }
  }
  return result;
}
