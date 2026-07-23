/*
 * XREFs of MiHandleBootImage @ 0x140C49B04
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C45608 (MiUpdateBootHpatPagesInUse.c)
 *     MiGetBootImagePageProtection @ 0x140C49A34 (MiGetBootImagePageProtection.c)
 *     MiTradeBootImagePage @ 0x140C4A804 (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 */

__int64 __fastcall MiHandleBootImage(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rt1
  int v7; // r15d
  unsigned __int64 v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // r12
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // r8
  char BootImagePageProtection; // al
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a2 + 48);
  v5 = (unsigned __int64)(unsigned int)(dword_140E37270 + dword_140E3726C) >> 12;
  v6 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
  v19 = (unsigned int)dword_140E2D4F8;
  if ( v4 == v6 || (v7 = 0, (PVOID)v4 == PsHalImageBase) )
    v7 = 1;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)v4, 0LL, &OutHeaders);
  v8 = ((unsigned __int64)*(unsigned int *)(a2 + 64) + 4095) >> 12;
  v9 = (_QWORD *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v10 = &v9[v8];
  if ( v7 )
  {
    v5 = (unsigned __int64)(unsigned int)dword_140E3726C >> 12;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v4) )
    {
      v8 = (v8 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      v5 = (v5 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      v10 = &v9[v8];
    }
  }
  result = MiUpdateBootHpatPagesInUse(a2, v10, a1);
  v12 = v5 - result;
  v13 = v12 + v19;
  if ( v7 )
    v13 = v12;
  if ( v13 )
    result = MiFreeBootDriverPages(0LL, v4, &v10[result], v13);
  if ( !v7 )
  {
    result = (__int64)OutHeaders;
    OutHeaders->OptionalHeader.ImageBase = v4;
    if ( (*(_DWORD *)(a2 + 104) & 0x800000) == 0 )
    {
      v14 = &v9[v8];
      v19 = 0LL;
      while ( v9 < v14 )
      {
        result = MiGetPfnSlabType(48 * ((*v9 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        if ( (_DWORD)result == 9 )
        {
          BootImagePageProtection = MiGetBootImagePageProtection(v2, (__int64)OutHeaders, v15, &v19);
          result = MiAllocateDriverPage((__int64)&MiSystemPartition, BootImagePageProtection, 1);
          if ( result != -1 )
            result = MiTradeBootImagePage(v9, result);
        }
        ++v9;
        v2 += 4096;
      }
    }
  }
  return result;
}
