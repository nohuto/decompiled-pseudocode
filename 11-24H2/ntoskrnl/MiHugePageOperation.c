/*
 * XREFs of MiHugePageOperation @ 0x140686CF0
 * Callers:
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 *     MiHotAddHugeRange @ 0x1407EB5AC (MiHotAddHugeRange.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FBE14 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiUpdateProtectionMask @ 0x140248CFC (MiUpdateProtectionMask.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     MiGroupZeroHugeRange @ 0x140686BE4 (MiGroupZeroHugeRange.c)
 *     MiSoloZeroHugeRange @ 0x140686F44 (MiSoloZeroHugeRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiHugePageOperation(__int64 a1, unsigned __int64 a2)
{
  int v4; // ebx
  int v5; // edi
  int v6; // esi
  unsigned __int64 UltraMapping; // r15
  int updated; // eax
  __int64 v9; // r8
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
  if ( a2 <= qword_140E2DD20 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
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
    v9 = 4LL;
    if ( v5 )
    {
      if ( v5 == 2 )
        v9 = 1028LL;
    }
    else
    {
      v9 = 516LL;
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
