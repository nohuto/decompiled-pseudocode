/*
 * XREFs of ExpQuerySystemMemoryNumaPerformanceInformation @ 0x1407C5FDC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQuerySystemMemoryNumaPerformanceInformation(__int128 *a1, unsigned int a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v5; // r14d
  int v6; // eax
  __int128 v8; // [rsp+68h] [rbp-60h]

  if ( a1
    && a2 >= 0x10
    && (a3 || !a4)
    && (v8 = *a1, (unsigned int)*a1 == 1)
    && !HIDWORD(v8)
    && (DWORD1(v8) < (unsigned __int16)KeNumberNodes || DWORD1(v8) == -1)
    && (!DWORD2(v8)
      ? (v5 = 0)
      : DWORD2(v8) == 1
      ? (v5 = 1)
      : DWORD2(v8) == 2
      ? (v5 = 2)
      : DWORD2(v8) == 3
      ? (v5 = 3)
      : DWORD2(v8) == 4
      ? (v5 = 4)
      : DWORD2(v8) == 5
      ? (v5 = 5)
      : DWORD2(v8) == 6
      ? (v5 = 6)
      : (v5 = 7),
        v5 != 7) )
  {
    v4 = guard_dispatch_icall_no_overrides(50LL, 24LL);
    if ( v4 >= 0 )
    {
      v6 = guard_dispatch_icall_no_overrides(1LL, 0xFFFFFFFFLL);
      v4 = 0;
      if ( v6 != -1073741789 )
        v4 = v6;
      if ( v4 >= 0 )
        return (unsigned int)-1073741275;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
