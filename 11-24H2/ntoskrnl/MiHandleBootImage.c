/*
 * XREFs of MiHandleBootImage @ 0x140C5AE90
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C568E8 (MiUpdateBootHpatPagesInUse.c)
 *     MiGetBootImagePageProtection @ 0x140C5ADC0 (MiGetBootImagePageProtection.c)
 *     MiTradeBootImagePage @ 0x140C5BB90 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiHandleBootImage(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  int v6; // r15d
  unsigned __int64 v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r9
  _QWORD *v13; // rsi
  __int64 v14; // r8
  char BootImagePageProtection; // al
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 48);
  v5 = (unsigned __int64)(unsigned int)(dword_140E374B0 + dword_140E374AC) >> 12;
  v18 = (unsigned int)dword_140E2D738;
  if ( v4 == PsNtosImageBase || (v6 = 0, v4 == PsHalImageBase) )
    v6 = 1;
  v17 = 0LL;
  RtlImageNtHeaderEx(1, v4, 0LL, &v17);
  v7 = ((unsigned __int64)*(unsigned int *)(a2 + 64) + 4095) >> 12;
  v8 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = &v8[v7];
  if ( v6 )
  {
    v5 = (unsigned __int64)(unsigned int)dword_140E374AC >> 12;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
    {
      v7 = (v7 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      v5 = (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      v9 = &v8[v7];
    }
  }
  result = MiUpdateBootHpatPagesInUse(a2, v9, a1);
  v11 = v5 - result;
  v12 = v11 + v18;
  if ( v6 )
    v12 = v11;
  if ( v12 )
    result = MiFreeBootDriverPages(0LL, v4, &v9[result], v12);
  if ( !v6 )
  {
    result = v17;
    *(_QWORD *)(v17 + 48) = v4;
    if ( (*(_DWORD *)(a2 + 104) & 0x800000) == 0 )
    {
      v13 = &v8[v7];
      v18 = 0LL;
      while ( v8 < v13 )
      {
        result = MiGetPfnSlabType(48 * ((*v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( (_DWORD)result == 9 )
        {
          BootImagePageProtection = MiGetBootImagePageProtection(v2, v17, v14, &v18);
          result = MiAllocateDriverPage((__int64)&MiSystemPartition, BootImagePageProtection, 1);
          if ( result != -1 )
            result = MiTradeBootImagePage(v8, result);
        }
        ++v8;
        v2 += 4096;
      }
    }
  }
  return result;
}
