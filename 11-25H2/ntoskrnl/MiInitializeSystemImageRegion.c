/*
 * XREFs of MiInitializeSystemImageRegion @ 0x140C4A30C
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiSplitBitmapPages @ 0x14038E594 (MiSplitBitmapPages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiInitializeDriverPtes @ 0x140C3F868 (MiInitializeDriverPtes.c)
 *     MiCreateInitialSystemWsles @ 0x140C42318 (MiCreateInitialSystemWsles.c)
 *     MiInitializeDynamicRegion @ 0x140C43C7C (MiInitializeDynamicRegion.c)
 *     MiFreeKernelPadSections @ 0x140C4987C (MiFreeKernelPadSections.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C49DC0 (MiInitializeBootLoadedDriverPfns.c)
 *     MxMarkActiveDriverBits @ 0x140C4AC48 (MxMarkActiveDriverBits.c)
 */

__int64 __fastcall MiInitializeSystemImageRegion(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  unsigned __int64 i; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 Pool; // rax
  char v15; // [rsp+30h] [rbp-68h] BYREF
  char v16; // [rsp+38h] [rbp-60h] BYREF

  v1 = qword_140E38980;
  v3 = qword_140E38978;
  if ( !(unsigned int)MiInitializeDynamicRegion(11) )
    return 0LL;
  v4 = v3 + v1 - 1;
  v5 = (unsigned __int64 *)&v16;
  v6 = 4LL;
  do
  {
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v5 - 1) = v3;
    *v5 = v4;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  MxMarkActiveDriverBits((unsigned int)&qword_140E2ECB0, v3, v4, (unsigned int)&v15, 3);
  v7 = qword_140E2ECB8;
  v8 = (_QWORD *)((((unsigned __int64)qword_140E2ECB8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  for ( i = 0LL; i < qword_140E2ECB0; i += 0x8000LL )
  {
    if ( (*v8 & 0x800LL) == 0 )
    {
      if ( !(unsigned int)MiSplitBitmapPages(4LL) )
        return 0LL;
      RtlClearBitsEx((__int64)&qword_140E2ECB0, i, 0x8000uLL);
    }
    v7 += 4096LL;
    ++v8;
  }
  qword_140E2D618 = 0LL;
  qword_140E2D640 = 0LL;
  v10 = 0LL;
  qword_140E2ECB0 = i;
  while ( !(_DWORD)v10 )
  {
    v11 = qword_140E2D600[v10];
    v12 = (*(_DWORD *)(v11 + 64) >> 12) + ((*(_DWORD *)(v11 + 64) & 0xFFF) != 0);
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v11 + 48)) )
      v12 = (v12 + 511) & 0xFFFFFE00;
    Pool = MiAllocatePool(0x40uLL, 8 * (((v12 & 0x3F) != 0) + (v12 >> 6)), 538987885);
    if ( !Pool )
      return 0LL;
    v10 = 1LL;
    qword_140E2D608[0] = v12;
    qword_140E2D608[1] = Pool;
  }
  if ( !(unsigned int)MiInitializeBootLoadedDriverPfns(a1)
    || !(unsigned int)MiInitializeDriverPtes(a1)
    || !MiCreateInitialSystemWsles() )
  {
    return 0LL;
  }
  MiFreeKernelPadSections(
    *(_QWORD **)(qword_140E2D600[0] + 48),
    *(_QWORD *)(qword_140E2D600[0] + 48) + *(_DWORD *)(qword_140E2D600[0] + 64));
  return 1LL;
}
