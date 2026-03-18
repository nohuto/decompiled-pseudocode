/*
 * XREFs of MiZeroLargePage @ 0x140308BDC
 * Callers:
 *     MiGetLargePage @ 0x1402F35A0 (MiGetLargePage.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiZeroAndReleasePages @ 0x1403A0C10 (MiZeroAndReleasePages.c)
 *     MiZeroAndConvertPage @ 0x140400700 (MiZeroAndConvertPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14069197C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407FB6A4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiZeroPhysicalPage @ 0x14021EC40 (MiZeroPhysicalPage.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiAssignDefaultChannel @ 0x1402F3560 (MiAssignDefaultChannel.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiZeroWithUltraSpace @ 0x140308F60 (MiZeroWithUltraSpace.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     AccelFillMemory @ 0x14040A67C (AccelFillMemory.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140415BB8 (MiDeleteAcceleratorDescriptor.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140690914 (MiAllocateAcceleratorDescriptor.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1406B3390 (KeZeroPages.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiZeroLargePage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  int v9; // ebx
  int v10; // esi
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  unsigned __int8 v15; // al
  __int64 v16; // r10
  char v17; // r9
  __int64 v18; // r15
  __int64 v19; // r11
  unsigned int v20; // ebx
  __int64 UltraMapping; // rsi
  unsigned int v22; // ebx
  unsigned __int64 v23; // rdi
  __int64 v25; // [rsp+38h] [rbp-99h] BYREF
  __int64 v26; // [rsp+40h] [rbp-91h]
  __int64 v27; // [rsp+48h] [rbp-89h] BYREF
  int v28; // [rsp+50h] [rbp-81h]
  int v29; // [rsp+54h] [rbp-7Dh]
  _OWORD v30[4]; // [rsp+60h] [rbp-71h] BYREF
  _BYTE v31[64]; // [rsp+A0h] [rbp-31h] BYREF

  v5 = a3;
  v26 = a1;
  v29 = 0;
  memset_0(v30, 0, 0x80uLL);
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v8 = MiPageSizes[v5];
  if ( v7 <= qword_140E2DBE0
    && (*(_QWORD *)(16 * ((a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    if ( BYTE2(*(_DWORD *)(a2 + 32)) < 0x40u )
    {
      v9 = 12;
    }
    else
    {
      v9 = 4;
      if ( (HIWORD(*(_DWORD *)(a2 + 32)) & 0xC0) == 0x80 )
        v9 = 28;
    }
  }
  else
  {
    v9 = 4;
  }
  if ( (_DWORD)v5 )
  {
    v10 = 4;
    if ( (_DWORD)v5 == 1 )
      v10 = 2;
  }
  else
  {
    v10 = 1;
  }
  if ( a5 )
  {
    result = (__int64)KeGetCurrentPrcb();
    v12 = *(_QWORD *)(result + 34872);
    if ( v12 )
      return MiZeroWithUltraSpace(v12 + 8, 0LL, a2);
    for ( ; v8; --v8 )
      result = MiZeroPhysicalPage(0LL, v7++, 2, a4);
    return result;
  }
  v13 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  if ( v13 == -1 )
    v14 = *(_DWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 34644);
  else
    v14 = v13;
  v15 = MiAssignDefaultChannel(v14);
  v18 = 0LL;
  v28 = (v15 & 1 | (2 * (v17 & 0x3F | 0x380))) << 8;
  v27 = v19 + 34640;
  if ( !v26 )
  {
    if ( _bittest64(&MiFlags, 0x26u) )
    {
      v25 = 0LL;
      if ( *(_WORD *)(*(_QWORD *)(qword_140E2DAF8 + 384 * v16 + 376) + 24LL) )
      {
        if ( (unsigned int)MiAllocateAcceleratorDescriptor(0LL, (unsigned int)v16, 1LL, &v25) )
          v18 = v25 + 32;
      }
    }
  }
  result = (__int64)KeGetCurrentPrcb();
  if ( !*(_QWORD *)(result + 34872)
    || (result = MiCreateUltraThreadContext((__int64)v30, (__int64)&v27, v10, 0), !(_DWORD)result) )
  {
    v20 = 0;
    if ( v8 )
    {
      result = 0LL;
      do
      {
        MiZeroPhysicalPage(v18, result + v7, 0, a4);
        result = ++v20;
      }
      while ( v20 < v8 );
    }
    goto LABEL_19;
  }
  UltraMapping = MiGetUltraMapping((__int64)&v30[2 * (unsigned int)v5], (unsigned int)v5, v8, 0);
  if ( (_DWORD)v5 == 2 )
  {
    UltraMapping = MiGetUltraMapping((__int64)v31, 2uLL, v8, 0);
    v22 = v9 | 0xA0000000;
  }
  else
  {
    v22 = v9 | 0xA0000000;
    if ( (unsigned int)v5 <= 1 )
      v22 |= 0x4000000u;
  }
  MiWriteLargePte(UltraMapping, v7, (unsigned int)v5, v22);
  v23 = v8 << 12;
  if ( v18 )
  {
    if ( (int)AccelFillMemory(v18, UltraMapping, v23, 0, 3LL) >= 0 )
      goto LABEL_33;
    ++dword_140EF4CAC;
  }
  KeZeroPages(UltraMapping, v23);
LABEL_33:
  MiWriteLargePte(UltraMapping, v7, (unsigned int)v5, 0LL);
  result = MiDeleteUltraThreadContext((__int64)v30);
LABEL_19:
  if ( !v26 && v18 )
    return MiDeleteAcceleratorDescriptor(v18);
  return result;
}
