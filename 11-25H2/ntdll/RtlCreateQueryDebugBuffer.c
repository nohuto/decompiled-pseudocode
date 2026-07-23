/*
 * XREFs of RtlCreateQueryDebugBuffer @ 0x1800F88D0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x180135940 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 */

PRTL_DEBUG_INFORMATION __cdecl RtlCreateQueryDebugBuffer(ULONG MaximumCommit, BOOLEAN UseEventPair)
{
  unsigned __int64 v2; // rbx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm0
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR v8; // [rsp+58h] [rbp-28h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-18h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-8h] BYREF
  PVOID v13; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v14; // [rsp+B8h] [rbp+38h] BYREF

  v8 = 0LL;
  RegionSize = 0LL;
  SectionHandle = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  BaseAddress = 0LL;
  if ( MaximumCommit )
  {
    v2 = (MaximumCommit + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 > 0xFFFFFFFF )
      return 0LL;
  }
  else
  {
    v2 = 0x400000LL;
  }
  ViewSize = 0LL;
  if ( is_mul_ok(v2, 2uLL) )
  {
    ViewSize = 2 * v2;
    MaximumSize.QuadPart = 2 * v2;
    if ( NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x4000000u, 0LL) >= 0
      && ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewUnmap,
           0,
           4u) >= 0 )
    {
      v13 = BaseAddress;
      RegionSize = 208LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v13, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v14 = (char *)v13 + v2;
        v8 = 208LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v14, 0LL, &v8, 0x1000u, 4u) >= 0 )
        {
          *(_QWORD *)v13 = SectionHandle;
          *((_QWORD *)v13 + 1) = v13;
          *((_QWORD *)v13 + 9) = 208LL;
          *((_QWORD *)v13 + 10) = RegionSize;
          *((_QWORD *)v13 + 11) = v2;
          v3 = v13;
          v4 = v14;
          *(_OWORD *)v14 = *(_OWORD *)v13;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          v4[5] = v3[5];
          v4[6] = v3[6];
          v4 += 8;
          v5 = v3[7];
          v3 += 8;
          *(v4 - 1) = v5;
          *v4 = *v3;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          *((_QWORD *)v14 + 1) = v14;
          *((_QWORD *)v14 + 10) = v8;
          *(_QWORD *)v14 = 0LL;
          return (PRTL_DEBUG_INFORMATION)v13;
        }
      }
    }
    if ( v13 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v13, &RegionSize, 0x8000u);
    if ( v14 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v14, &v8, 0x8000u);
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( SectionHandle )
      NtClose(SectionHandle);
  }
  return 0LL;
}
