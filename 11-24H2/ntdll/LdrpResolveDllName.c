/*
 * XREFs of LdrpResolveDllName @ 0x180092430
 * Callers:
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpMapDllSearchPath @ 0x180091810 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180091C68 (LdrpMapDllFullPath.c)
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x180092E1C (LdrpAppCompatRedirect.c)
 *     LdrpFindLoadedDllInternal @ 0x1800C73E0 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpGetNtPathFromDosPath @ 0x1800927B0 (LdrpGetNtPathFromDosPath.c)
 *     LdrpGetFullPath @ 0x1800928D0 (LdrpGetFullPath.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpResolveDllName(_OWORD *a1, __int64 a2, __int64 a3, _OWORD *a4, __int16 a5)
{
  int v9; // r12d
  bool v10; // r14
  __int64 v11; // rbp
  PVOID Atom; // rax
  const void *v13; // r15
  unsigned int v14; // ebx
  _WORD *v15; // rcx
  bool v16; // zf
  int NtPathFromDosPath; // eax
  int FullPath; // ebx
  int v19; // r8d
  __m128i v20; // xmm1
  unsigned __int16 v21; // r9
  unsigned __int64 v22; // xmm0_8
  unsigned __int16 v23; // dx
  __int16 v24; // cx
  __int64 v25; // rax
  __int16 v26; // dx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  void *Src[2]; // [rsp+40h] [rbp-38h] BYREF

  v9 = 0;
  *(_OWORD *)Src = 0LL;
  v10 = 0;
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1730, (__int64)"LdrpResolveDllName", 3, "DLL name: %wZ\n", a1);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1731, (__int64)"LdrpResolveDllName", 5, "%wZ\n", a1);
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
    v15 = (_WORD *)(a2 + 16);
    v16 = a2 + 16 == *(_QWORD *)(a2 + 8);
    *(_OWORD *)Src = *(_OWORD *)a2;
    v10 = !v16;
    if ( !v16 )
    {
      *(_QWORD *)(a2 + 8) = v15;
      *(_WORD *)(a2 + 2) = 256;
      *v15 = 0;
LABEL_9:
      *(_WORD *)a2 = 0;
      NtPathFromDosPath = LdrpGetNtPathFromDosPath(Src, a2);
      FullPath = NtPathFromDosPath;
      v19 = NtPathFromDosPath;
      if ( NtPathFromDosPath >= 0 )
      {
        v20 = *(__m128i *)Src;
        v21 = _mm_cvtsi128_si32(*(__m128i *)Src);
        v22 = _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
        *a4 = *(_OWORD *)Src;
        v23 = v21 >> 1;
        if ( v21 >> 1 )
        {
          do
          {
            v24 = *(_WORD *)(v22 + 2LL * v23 - 2);
            if ( v24 == 92 )
              break;
            if ( v24 == 47 )
              break;
            --v23;
          }
          while ( v23 );
        }
        v25 = v23;
        v26 = 2 * v23;
        *(_WORD *)a3 = v21 - v26;
        *(_QWORD *)(a3 + 8) = v22 + 2 * v25;
        *(_WORD *)(a3 + 2) = _mm_extract_epi16(v20, 1) - v26;
        LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1852, (__int64)"LdrpResolveDllName", 4, "Status: 0x%08lx\n", v19);
        goto LABEL_15;
      }
      v28 = (unsigned int)(NtPathFromDosPath + 1073741809);
      if ( (unsigned int)v28 <= 0x2C && (v29 = 0x1C3000000011LL, _bittest64(&v29, v28))
        || FullPath == -2147483632
        || FullPath == -1073741661 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrfind.c",
          1832,
          (__int64)"LdrpResolveDllName",
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
  v14 = v11 + 2;
  if ( (unsigned int)(v11 + 2) > 0xFFFE )
  {
    FullPath = -1073741562;
  }
  else if ( (v14 & 1) != 0 )
  {
    FullPath = -1073741811;
  }
  else
  {
    Atom = RtlpAllocateAtom(v14);
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
      RtlpSysVolFree(Atom);
      Src[1] = 0LL;
    }
    LODWORD(Src[0]) = 0;
  }
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1852, (__int64)"LdrpResolveDllName", 4, "Status: 0x%08lx\n", FullPath);
  if ( v9 )
  {
    LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1854, (__int64)"LdrpResolveDllName", 6, "%x-%x\n", v9, FullPath);
    return (unsigned int)FullPath;
  }
LABEL_15:
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 1856, (__int64)"LdrpResolveDllName", 6, "%x\n", FullPath);
  return (unsigned int)FullPath;
}
