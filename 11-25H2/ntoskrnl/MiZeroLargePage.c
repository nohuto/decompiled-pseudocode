/*
 * XREFs of MiZeroLargePage @ 0x140223DEC
 * Callers:
 *     MiGetLargePage @ 0x140222688 (MiGetLargePage.c)
 *     MiGetPage @ 0x14022CE00 (MiGetPage.c)
 *     MiZeroAndReleasePages @ 0x14038C180 (MiZeroAndReleasePages.c)
 *     MiZeroAndConvertPage @ 0x1403F8AEC (MiZeroAndConvertPage.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14068651C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1407EB814 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiAssignDefaultChannel @ 0x140222A5C (MiAssignDefaultChannel.c)
 *     MiZeroWithUltraSpace @ 0x140224410 (MiZeroWithUltraSpace.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiZeroPhysicalPage @ 0x14024D560 (MiZeroPhysicalPage.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     AccelFillMemory @ 0x140406838 (AccelFillMemory.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140418610 (MiDeleteAcceleratorDescriptor.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1406854B4 (MiAllocateAcceleratorDescriptor.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1406A80C0 (KeZeroPages.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiZeroLargePage(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  int v10; // r9d
  int ProtectionPfnCompatible; // esi
  unsigned int v12; // r13d
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rbx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int NodeColor; // r11d
  unsigned __int8 v19; // al
  char v20; // r11
  int v21; // r11d
  unsigned int *p_PageColor; // rax
  __int64 v23; // r15
  unsigned int v24; // ebx
  __int64 UltraMapping; // rbx
  unsigned int v26; // esi
  unsigned __int64 v27; // rdi
  __int64 v29; // [rsp+38h] [rbp-99h] BYREF
  __int64 v30; // [rsp+40h] [rbp-91h]
  unsigned int *v31; // [rsp+48h] [rbp-89h] BYREF
  int v32; // [rsp+50h] [rbp-81h]
  int v33; // [rsp+54h] [rbp-7Dh]
  _OWORD v34[4]; // [rsp+60h] [rbp-71h] BYREF
  char v35[64]; // [rsp+A0h] [rbp-31h] BYREF

  v5 = a3;
  v30 = a1;
  v33 = 0;
  memset_0(v34, 0, 0x80uLL);
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  v9 = MiPageSizes[v5];
  if ( v8 <= qword_140E2D9A0
    && (*(_QWORD *)(16 * ((a2 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a2);
  }
  else
  {
    v10 = 4;
    ProtectionPfnCompatible = 4;
  }
  if ( (_DWORD)v5 )
  {
    v12 = v10;
    if ( (_DWORD)v5 == 1 )
      v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  if ( a5 )
  {
    result = (__int64)KeGetCurrentPrcb();
    v14 = *(_QWORD *)(result + 34872);
    if ( v14 )
      return MiZeroWithUltraSpace(v14 + 8, 0LL, a2);
    for ( ; v9; --v9 )
      result = MiZeroPhysicalPage(0LL, v8++, 2LL, a4);
    return result;
  }
  v15 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  v16 = v15;
  if ( v15 == -1 )
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeColor = CurrentPrcb->NodeColor;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeColor = v15;
  }
  v19 = MiAssignDefaultChannel(NodeColor);
  v21 = v19 & 1 | (2 * (v20 & 0x3F | 0x380));
  p_PageColor = &CurrentPrcb->PageColor;
  v23 = 0LL;
  v32 = v21 << 8;
  v31 = p_PageColor;
  if ( !v30 )
  {
    if ( _bittest64(&MiFlags, 0x26u) )
    {
      v29 = 0LL;
      if ( *(_WORD *)(*(_QWORD *)(qword_140E2D8B8 + 384 * v16 + 376) + 24LL) )
      {
        if ( (unsigned int)MiAllocateAcceleratorDescriptor(0LL, (unsigned int)v16, 1LL, &v29) )
          v23 = v29 + 32;
      }
    }
  }
  result = (__int64)KeGetCurrentPrcb();
  if ( !*(_QWORD *)(result + 34872) || (result = MiCreateUltraThreadContext(v34, &v31, v12, 0LL), !(_DWORD)result) )
  {
    v24 = 0;
    if ( v9 )
    {
      result = 0LL;
      do
      {
        MiZeroPhysicalPage(v23, result + v8, 0LL, a4);
        result = ++v24;
      }
      while ( v24 < v9 );
    }
    goto LABEL_19;
  }
  UltraMapping = MiGetUltraMapping((__int64)&v34[2 * v5], (unsigned int)v5, v9, 0);
  if ( (_DWORD)v5 == 2 )
  {
    UltraMapping = MiGetUltraMapping((__int64)v35, 2uLL, v9, 0);
    v26 = ProtectionPfnCompatible | 0xA0000000;
  }
  else
  {
    v26 = ProtectionPfnCompatible | 0xA0000000;
    if ( (unsigned int)v5 <= 1 )
      v26 |= 0x4000000u;
  }
  MiWriteLargePte(UltraMapping, v8, (unsigned int)v5, v26);
  v27 = v9 << 12;
  if ( v23 )
  {
    if ( (int)AccelFillMemory(v23, UltraMapping, v27, 0, 3LL) >= 0 )
      goto LABEL_28;
    ++dword_140EF49CC;
  }
  KeZeroPages(UltraMapping, v27);
LABEL_28:
  MiWriteLargePte(UltraMapping, v8, (unsigned int)v5, 0LL);
  result = MiDeleteUltraThreadContext((__int64)v34);
LABEL_19:
  if ( !v30 && v23 )
    return MiDeleteAcceleratorDescriptor(v23);
  return result;
}
