/*
 * XREFs of LdrpAddRedirectedFunction @ 0x180160C30
 * Callers:
 *     LdrpBuildImportRedirection @ 0x180160F74 (LdrpBuildImportRedirection.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000BF10 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     LdrpHashUnicodeString @ 0x180074360 (LdrpHashUnicodeString.c)
 *     LdrpGetBaseNameFromFullName @ 0x1800DC100 (LdrpGetBaseNameFromFullName.c)
 *     RtlInitAnsiStringEx @ 0x1800E0390 (RtlInitAnsiStringEx.c)
 *     LdrpCompareRedirectedFunction @ 0x1800F02C0 (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800F0854 (LdrpHashAsciizString.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpAddRedirectedFunction(__int64 a1, int a2)
{
  const char *v4; // rdx
  int inited; // edi
  __m128i v6; // xmm6
  int v7; // eax
  unsigned __int64 v8; // rbx
  int v9; // esi
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 Heap; // rax
  unsigned __int64 v13; // r14
  size_t v14; // r8
  __int64 v15; // rbx
  bool v16; // r8
  int v17; // esi
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v25[128]; // [rsp+78h] [rbp-90h] BYREF
  const void *v26; // [rsp+178h] [rbp+70h] BYREF
  _WORD *v27; // [rsp+180h] [rbp+78h]
  _WORD v28[128]; // [rsp+188h] [rbp+80h] BYREF

  v21 = 0uLL;
  memset_thunk_772440563353939046(&v24, 0, 0x110uLL);
  memset_thunk_772440563353939046(&v26, 0, 0x110uLL);
  v4 = *(const char **)a1;
  v24.m128i_i64[1] = (__int64)v25;
  v24.m128i_i32[0] = 0x1000000;
  v27 = v28;
  v25[0] = 0;
  LODWORD(v26) = 0x1000000;
  v28[0] = 0;
  DestinationString_8 = 0LL;
  inited = RtlInitAnsiStringEx(&DestinationString_8, v4);
  if ( inited >= 0 )
  {
    inited = LdrpAppendAnsiStringToFilenameBuffer(&v26, &DestinationString_8);
    if ( inited >= 0 )
    {
      v20 = 0;
      inited = LdrpPreprocessDllName((__int64)&v26, (unsigned __int16 *)&v24, 0LL, &v20);
      if ( inited >= 0 )
      {
        v6 = v24;
        v22 = v24;
        if ( (v20 & 0x20) == 0 )
        {
          LdrpGetBaseNameFromFullName((__int64)&v22, (__int64)&v22);
          v6 = v22;
        }
        *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 8);
        LODWORD(v21) = LdrpHashAsciizString(*((char **)&v21 + 1));
        v7 = LdrpHashUnicodeString((unsigned __int16 *)&v22);
        v8 = LdrpRedirectionTree;
        DWORD1(v21) = v7;
        if ( (qword_1801D2608 & 1) != 0 )
        {
          if ( LdrpRedirectionTree )
            v8 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
          else
            v8 = 0LL;
        }
        v9 = qword_1801D2608 & 1;
        if ( v8 )
        {
          do
          {
            v10 = LdrpCompareRedirectedFunction((__int64)&v21, v8);
            if ( v10 >= 0 )
            {
              if ( v10 <= 0 )
                break;
              v11 = *(_QWORD *)(v8 + 8);
            }
            else
            {
              v11 = *(_QWORD *)v8;
            }
            if ( v9 && v11 )
              v8 ^= v11;
            else
              v8 = v11;
          }
          while ( v8 );
          if ( v8 && !LdrpRedirectionByFunctionCalloutFunc )
          {
            inited = -1073739509;
            goto LABEL_43;
          }
          v6 = v22;
        }
        Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, (unsigned __int16)_mm_cvtsi128_si32(v6) + 74LL);
        v13 = Heap;
        if ( Heap )
        {
          *(_OWORD *)(Heap + 24) = v21;
          *(__m128i *)(Heap + 40) = v6;
          v14 = *(unsigned __int16 *)(Heap + 40);
          *(_QWORD *)(Heap + 56) = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(Heap + 64) = a2;
          *(_QWORD *)(Heap + 48) = Heap + 72;
          v14 += 2LL;
          *(_WORD *)(Heap + 42) = v14;
          memmove((void *)(Heap + 72), (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v14);
          v15 = LdrpRedirectionTree;
          if ( (qword_1801D2608 & 1) != 0 && LdrpRedirectionTree )
            v15 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
          v16 = 0;
          v17 = qword_1801D2608 & 1;
          if ( v15 )
          {
            while ( 1 )
            {
              if ( (int)LdrpCompareRedirectedFunction(v13 + 24, v15) < 0 )
              {
                v18 = *(_QWORD *)v15;
                if ( v17 )
                {
                  if ( !v18 )
                    goto LABEL_41;
                  v18 ^= v15;
                }
                if ( !v18 )
                {
LABEL_41:
                  v16 = 0;
                  break;
                }
              }
              else
              {
                v18 = *(_QWORD *)(v15 + 8);
                if ( v17 )
                {
                  if ( !v18 )
                    goto LABEL_35;
                  v18 ^= v15;
                }
                if ( !v18 )
                {
LABEL_35:
                  v16 = 1;
                  break;
                }
              }
              v15 = v18;
            }
          }
          RtlRbInsertNodeEx((unsigned __int64)&LdrpRedirectionTree, v15, v16, v13);
        }
        else
        {
          inited = -1073741801;
        }
      }
    }
  }
LABEL_43:
  if ( v25 != (_WORD *)v24.m128i_i64[1] )
    RtlpSysVolFree(v24.m128i_i64[1]);
  v24.m128i_i64[1] = (__int64)v25;
  v24.m128i_i32[0] = 0x1000000;
  v25[0] = 0;
  if ( v28 != v27 )
    RtlpSysVolFree((__int64)v27);
  return (unsigned int)inited;
}
