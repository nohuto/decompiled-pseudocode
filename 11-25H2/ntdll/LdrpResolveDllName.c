/*
 * XREFs of LdrpResolveDllName @ 0x180070A70
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpAppCompatRedirect @ 0x18006F444 (LdrpAppCompatRedirect.c)
 *     LdrpMapDllSearchPath @ 0x18006FE50 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x1800702A8 (LdrpMapDllFullPath.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x1800CBC80 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrpGetNtPathFromDosPath @ 0x180070DF0 (LdrpGetNtPathFromDosPath.c)
 *     LdrpGetFullPath @ 0x180070F10 (LdrpGetFullPath.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpResolveDllName(_OWORD *a1, __int64 a2, __int64 a3, _OWORD *a4, __int16 a5)
{
  int v9; // r12d
  bool v10; // r14
  __int64 v11; // rbp
  void *Atom; // rax
  const void *v13; // r15
  _WORD *v14; // rcx
  bool v15; // zf
  int NtPathFromDosPath; // eax
  int FullPath; // ebx
  char v18; // r8
  __m128i v19; // xmm1
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // xmm0_8
  unsigned __int16 v22; // dx
  __int16 v23; // cx
  __int64 v24; // rax
  __int16 v25; // dx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF

  v9 = 0;
  *(_OWORD *)Src = 0LL;
  v10 = 0;
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1730, (int)"LdrpResolveDllName", 3, "DLL name: %wZ\n", (char)a1);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1731, (int)"LdrpResolveDllName", 5, "%wZ\n", (char)a1);
  if ( (a5 & 0x200) != 0 )
  {
    *(_OWORD *)Src = *a1;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    if ( FullPath < 0 )
    {
LABEL_24:
      Atom = Src[1];
      goto LABEL_25;
    }
    v14 = (_WORD *)(a2 + 16);
    v15 = a2 + 16 == *(_QWORD *)(a2 + 8);
    *(_OWORD *)Src = *(_OWORD *)a2;
    v10 = !v15;
    if ( !v15 )
    {
      *(_QWORD *)(a2 + 8) = v14;
      *(_WORD *)(a2 + 2) = 256;
      *v14 = 0;
LABEL_9:
      *(_WORD *)a2 = 0;
      NtPathFromDosPath = LdrpGetNtPathFromDosPath(Src, a2);
      FullPath = NtPathFromDosPath;
      v18 = NtPathFromDosPath;
      if ( NtPathFromDosPath >= 0 )
      {
        v19 = *(__m128i *)Src;
        v20 = _mm_cvtsi128_si32(*(__m128i *)Src);
        v21 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
        *a4 = *(_OWORD *)Src;
        v22 = v20 >> 1;
        if ( v20 >> 1 )
        {
          do
          {
            v23 = *(_WORD *)(v21 + 2LL * v22 - 2);
            if ( v23 == 92 )
              break;
            if ( v23 == 47 )
              break;
            --v22;
          }
          while ( v22 );
        }
        v24 = v22;
        v25 = 2 * v22;
        *(_WORD *)a3 = v20 - v25;
        *(_QWORD *)(a3 + 8) = v21 + 2 * v24;
        *(_WORD *)(a3 + 2) = _mm_extract_epi16(v19, 1) - v25;
        LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1852, (int)"LdrpResolveDllName", 4, "Status: 0x%08lx\n", v18);
        goto LABEL_15;
      }
      v27 = (unsigned int)(NtPathFromDosPath + 1073741809);
      if ( (unsigned int)v27 <= 0x2C && (v28 = 0x1C3000000011LL, _bittest64(&v28, v27))
        || FullPath == -2147483632
        || FullPath == -1073741661 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrfind.c",
          1832,
          (int)"LdrpResolveDllName",
          2,
          "Original status: 0x%08lx\n",
          FullPath);
        Atom = Src[1];
        v9 = FullPath;
        FullPath = -1073741515;
        goto LABEL_25;
      }
      goto LABEL_24;
    }
  }
  v11 = LOWORD(Src[0]);
  Atom = 0LL;
  v13 = Src[1];
  LODWORD(Src[0]) = 0;
  Src[1] = 0LL;
  if ( (unsigned int)(v11 + 2) > 0xFFFE )
  {
    FullPath = -1073741562;
  }
  else if ( (((_BYTE)v11 + 2) & 1) != 0 )
  {
    FullPath = -1073741811;
  }
  else
  {
    Atom = (void *)RtlpAllocateAtom();
    Src[1] = Atom;
    if ( Atom )
    {
      WORD1(Src[0]) = v11 + 2;
      v10 = 1;
      memmove(Atom, v13, v11 + 2);
      LOWORD(Src[0]) = v11;
      goto LABEL_9;
    }
    FullPath = -1073741801;
  }
LABEL_25:
  if ( v10 )
  {
    if ( Atom )
    {
      RtlpSysVolFree((__int64)Atom);
      Src[1] = 0LL;
    }
    LODWORD(Src[0]) = 0;
  }
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1852, (int)"LdrpResolveDllName", 4, "Status: 0x%08lx\n", FullPath);
  if ( v9 )
  {
    LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1854, (int)"LdrpResolveDllName", 6, "%x-%x\n", v9);
    return (unsigned int)FullPath;
  }
LABEL_15:
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 1856, (int)"LdrpResolveDllName", 6, "%x\n", FullPath);
  return (unsigned int)FullPath;
}
