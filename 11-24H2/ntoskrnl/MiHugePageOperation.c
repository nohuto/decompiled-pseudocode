/*
 * XREFs of MiHugePageOperation @ 0x140685BC0
 * Callers:
 *     MiGetHugeRange @ 0x1406700C4 (MiGetHugeRange.c)
 *     MiHotAddHugeRange @ 0x1407EAFDC (MiHotAddHugeRange.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiUpdateProtectionMask @ 0x14021BFAC (MiUpdateProtectionMask.c)
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     MiGroupZeroHugeRange @ 0x140685AB4 (MiGroupZeroHugeRange.c)
 *     MiSoloZeroHugeRange @ 0x140685E14 (MiSoloZeroHugeRange.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiHugePageOperation(__int64 a1, unsigned __int64 a2)
{
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  unsigned __int64 UltraMapping; // r15
  int updated; // eax
  unsigned int v9; // r8d
  ULONG_PTR v10; // rbp
  __int64 result; // rax
  __int128 v12; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[128]; // [rsp+50h] [rbp-B8h] BYREF

  v12 = 0LL;
  memset_0(v13, 0, sizeof(v13));
  v4 = MiPageToNode(a2);
  MiInitializePageColorBase(
    (__int64)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink,
    3,
    v4 + 1,
    (__int64)&v12);
  if ( a2 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    v5 = (unsigned __int8)BYTE2(*(_DWORD *)(48 * a2 - 0x21FFFFFFFFE0LL)) >> 6;
  else
    v5 = 1;
  v6 = 0;
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v13, (__int64)&v12, 1, 0) )
  {
    UltraMapping = MiGetUltraMapping((__int64)v13, 0LL, 0x40000LL, 0);
    updated = MiUpdateProtectionMask(0x84000004, v5);
    MiWriteLargePte(UltraMapping, a2, 0, updated);
  }
  else
  {
    v6 = 1;
    v9 = 4;
    if ( v5 )
    {
      if ( v5 == 2 )
        v9 = 1028;
    }
    else
    {
      v9 = 516;
    }
    UltraMapping = MmMapIoSpaceEx(a2 << 12, 0x40000000LL, v9);
    if ( !UltraMapping )
      v6 = 2;
  }
  v10 = 0LL;
  if ( v6 != 2 )
    v10 = UltraMapping;
  result = MiGroupZeroHugeRange(a1, v10, a2, v5, 0);
  if ( !(_DWORD)result )
    result = MiSoloZeroHugeRange(v10, a2, v4, 0);
  if ( v6 )
  {
    if ( v6 == 1 )
      return MiUnmapContiguousMemory(v10, 0x40000000uLL, 1);
  }
  else
  {
    MiWriteLargePte(v10, a2, 0, 0);
    return MiDeleteUltraThreadContext((__int64)v13);
  }
  return result;
}
