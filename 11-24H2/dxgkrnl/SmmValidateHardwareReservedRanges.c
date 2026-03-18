/*
 * XREFs of SmmValidateHardwareReservedRanges @ 0x140285A0C
 * Callers:
 *     SmmCreateHardwareReservedRanges @ 0x1402855C0 (SmmCreateHardwareReservedRanges.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall SmmValidateHardwareReservedRanges(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rsi
  unsigned int v7; // ecx
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  int i; // edx
  LARGE_INTEGER NumberOfBytes; // r8
  unsigned __int64 QuadPart; // rbp
  __int64 v14; // r14

  v4 = 0;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  if ( PhysicalMemoryRanges )
  {
    v7 = 0;
LABEL_4:
    if ( v7 < a2 )
    {
      v8 = *(_QWORD *)(a1 + 16LL * v7);
      v9 = *(_QWORD *)(a1 + 16LL * v7 + 8);
      v10 = v9 + v8;
      if ( v9 + v8 < v8 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 16LL * v7), *(_QWORD *)(a1 + 16LL * v7 + 8));
        WdLogGlobalForLineNumber = 332;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver reserved memory range overflow. BaseAddress=0x%I64x, Size=%I64u",
          v8,
          v9,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          NumberOfBytes = PhysicalMemoryRanges[i].NumberOfBytes;
          if ( !NumberOfBytes.QuadPart )
          {
            ++v7;
            goto LABEL_4;
          }
          QuadPart = PhysicalMemoryRanges[i].BaseAddress.QuadPart;
          v14 = NumberOfBytes.QuadPart + QuadPart;
          if ( v8 < NumberOfBytes.QuadPart + QuadPart && v10 > QuadPart )
            break;
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
          2LL,
          v8,
          v10,
          (PHYSICAL_ADDRESS)PhysicalMemoryRanges[i].BaseAddress.QuadPart,
          NumberOfBytes.QuadPart + QuadPart);
        WdLogGlobalForLineNumber = 354;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver hardware reserved range cannot intersect a physical range of memory in Mm",
          v8,
          v10,
          QuadPart,
          v14,
          0LL);
      }
      v4 = -1073741811;
    }
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
    return v4;
  }
  else
  {
    _InterlockedIncrement(&dword_140161680);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 314;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Couldn't allocate buffer to query system memory size",
      314LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
