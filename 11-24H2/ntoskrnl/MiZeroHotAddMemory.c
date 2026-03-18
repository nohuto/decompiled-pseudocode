/*
 * XREFs of MiZeroHotAddMemory @ 0x1407EA394
 * Callers:
 *     MiMapNewPfns @ 0x1407E96AC (MiMapNewPfns.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140263160 (MmUnmapIoSpace.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MmMapIoSpaceEx @ 0x1402E9A50 (MmMapIoSpaceEx.c)
 *     MiInitializeDpcGang @ 0x1403A80A0 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1403A875C (MiStartDpcGang.c)
 *     MiRestrictRangeToNode @ 0x140401E10 (MiRestrictRangeToNode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiZeroHotAddMemory(__int64 a1)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v3; // rbp
  __int64 v4; // rax
  void *v5; // rdi
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // rbx
  unsigned int v9; // eax
  ULONG_PTR v10; // rcx
  ULONG_PTR BugCheckParameter2[22]; // [rsp+20h] [rbp-198h] BYREF
  int v12; // [rsp+D4h] [rbp-E4h]
  int v13; // [rsp+D8h] [rbp-E0h]

  memset_0(BugCheckParameter2, 0, 0x168uLL);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = MmMapIoSpaceEx(v2 << 12, v3 << 12, 4u);
  v5 = (void *)v4;
  if ( !v4 )
    return 3221225626LL;
  v7 = v4;
  while ( v3 )
  {
    v8 = MiRestrictRangeToNode(v2, v3);
    v9 = MiPageToNode(v2);
    MiInitializeDpcGang((__int64 *)BugCheckParameter2, v9, 1u);
    v10 = *(_QWORD *)(a1 + 48);
    v13 |= 8u;
    BugCheckParameter2[21] = v10;
    v12 = *(_DWORD *)(a1 + 40);
    BugCheckParameter2[0] = v2;
    BugCheckParameter2[1] = v8;
    BugCheckParameter2[20] = v7;
    MiStartDpcGang((__int64 *)BugCheckParameter2);
    v3 -= v8;
    v2 += v8;
    v7 += v8 << 12;
  }
  MmUnmapIoSpace(v5, *(_QWORD *)(a1 + 32) << 12);
  return 0LL;
}
