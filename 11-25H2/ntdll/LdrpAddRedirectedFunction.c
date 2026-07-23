/*
 * XREFs of LdrpAddRedirectedFunction @ 0x1801621C4
 * Callers:
 *     LdrpBuildImportRedirection @ 0x180162508 (LdrpBuildImportRedirection.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpHashUnicodeString @ 0x18006EBE0 (LdrpHashUnicodeString.c)
 *     LdrpHashAsciizString @ 0x180071164 (LdrpHashAsciizString.c)
 *     LdrpGetBaseNameFromFullName @ 0x1800DB670 (LdrpGetBaseNameFromFullName.c)
 *     RtlInitAnsiStringEx @ 0x1800DD5F0 (RtlInitAnsiStringEx.c)
 *     LdrpCompareRedirectedFunction @ 0x1800F1B70 (LdrpCompareRedirectedFunction.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpAddRedirectedFunction(__int64 a1, int a2)
{
  const CHAR *v4; // rdx
  int inited; // edi
  __m128i v6; // xmm6
  int v7; // eax
  __int64 Root; // rbx
  int v9; // esi
  LONG v10; // eax
  __int64 v11; // rax
  char *Heap; // rax
  _RTL_BALANCED_NODE *v13; // r14
  size_t v14; // r8
  __int64 v15; // rbx
  BOOLEAN v16; // r8
  int v17; // esi
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+30h] [rbp-D8h] BYREF
  _UNICODE_STRING v22; // [rsp+40h] [rbp-C8h] BYREF
  _STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v25[128]; // [rsp+78h] [rbp-90h] BYREF
  const void *v26; // [rsp+178h] [rbp+70h] BYREF
  _WORD *v27; // [rsp+180h] [rbp+78h]
  _WORD v28[128]; // [rsp+188h] [rbp+80h] BYREF

  v21 = 0uLL;
  memset_thunk_772440563353939046(&v24, 0, 0x110uLL);
  memset_thunk_772440563353939046(&v26, 0, 0x110uLL);
  v4 = *(const CHAR **)a1;
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
      inited = LdrpPreprocessDllName((unsigned __int16 *)&v26, (_UNICODE_STRING *)&v24, 0LL, &v20);
      if ( inited >= 0 )
      {
        v6 = v24;
        v22 = (_UNICODE_STRING)v24;
        if ( (v20 & 0x20) == 0 )
        {
          LdrpGetBaseNameFromFullName((__int64)&v22, (__int64)&v22);
          v6 = (__m128i)v22;
        }
        *((_QWORD *)&v21 + 1) = *(_QWORD *)(a1 + 8);
        LODWORD(v21) = LdrpHashAsciizString(*((char **)&v21 + 1));
        v7 = LdrpHashUnicodeString(&v22.Length);
        Root = (__int64)LdrpRedirectionTree.Root;
        DWORD1(v21) = v7;
        if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 )
        {
          if ( LdrpRedirectionTree.Root )
            Root = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
          else
            Root = 0LL;
        }
        v9 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
        if ( Root )
        {
          do
          {
            v10 = LdrpCompareRedirectedFunction((__int64)&v21, Root);
            if ( v10 >= 0 )
            {
              if ( v10 <= 0 )
                break;
              v11 = *(_QWORD *)(Root + 8);
            }
            else
            {
              v11 = *(_QWORD *)Root;
            }
            if ( v9 && v11 )
              Root ^= v11;
            else
              Root = v11;
          }
          while ( Root );
          if ( Root && !LdrpRedirectionByFunctionCalloutFunc )
          {
            inited = -1073739509;
            goto LABEL_43;
          }
          v6 = (__m128i)v22;
        }
        Heap = (char *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, (unsigned __int16)_mm_cvtsi128_si32(v6) + 74LL);
        v13 = (_RTL_BALANCED_NODE *)Heap;
        if ( Heap )
        {
          *(_OWORD *)(Heap + 24) = v21;
          *(__m128i *)(Heap + 40) = v6;
          v14 = *((unsigned __int16 *)Heap + 20);
          *((_QWORD *)Heap + 7) = *(_QWORD *)(a1 + 16);
          *((_DWORD *)Heap + 16) = a2;
          *((_QWORD *)Heap + 6) = Heap + 72;
          v14 += 2LL;
          *((_WORD *)Heap + 21) = v14;
          memmove(Heap + 72, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v14);
          v15 = (__int64)LdrpRedirectionTree.Root;
          if ( (*(_BYTE *)&LdrpRedirectionTree.0 & 1) != 0 && LdrpRedirectionTree.Root )
            v15 = (unsigned __int64)&LdrpRedirectionTree ^ (unsigned __int64)LdrpRedirectionTree.Root;
          v16 = 0;
          v17 = *(_BYTE *)&LdrpRedirectionTree.0 & 1;
          if ( v15 )
          {
            while ( 1 )
            {
              if ( LdrpCompareRedirectedFunction((__int64)&v13[1], v15) < 0 )
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
          RtlRbInsertNodeEx(&LdrpRedirectionTree, (PRTL_BALANCED_NODE)v15, v16, v13);
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
    RtlpSysVolFree((void *)v24.m128i_i64[1]);
  v24.m128i_i64[1] = (__int64)v25;
  v24.m128i_i32[0] = 0x1000000;
  v25[0] = 0;
  if ( v28 != v27 )
    RtlpSysVolFree(v27);
  return (unsigned int)inited;
}
