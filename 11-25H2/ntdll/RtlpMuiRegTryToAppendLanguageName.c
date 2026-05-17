/*
 * XREFs of RtlpMuiRegTryToAppendLanguageName @ 0x18005C790
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180088F5C (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800600E0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLanguageName(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5)
{
  unsigned int v5; // ebp
  __int64 v10; // r12
  void *Heap; // r14
  __int64 v12; // rax
  unsigned int v13; // ecx
  void *v14; // rcx
  size_t v15; // rax
  __int64 v16; // r13
  unsigned int v17; // edi
  void *Src[2]; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  *(_OWORD *)Src = 0LL;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v10 = *a3;
  Heap = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v12 = *(__int16 *)(a2 + 6);
  if ( (__int16)v12 > 0 )
  {
    v14 = (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2 * v12));
    Src[1] = v14;
    if ( v14 )
    {
      v15 = 2 * wcslen((const wchar_t *)v14);
      if ( v15 >= 0xFFFE )
        LOWORD(v15) = -4;
      LOWORD(Src[0]) = v15;
      WORD1(Src[0]) = v15 + 2;
    }
LABEL_12:
    if ( *a3 && *a3 <= a5 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a4, (wchar_t *)Src[1]) )
      goto LABEL_23;
    v16 = (unsigned int)v10 + (LOWORD(Src[0]) >> 1);
    v17 = v16 + 1;
    if ( a4 && (unsigned int)v10 < v17 )
    {
      if ( v17 < a5 )
      {
        memmove(&a4[v10], Src[1], LOWORD(Src[0]));
        a4[v16] = 0;
        goto LABEL_22;
      }
    }
    else if ( v17 < a5 || !a4 )
    {
      goto LABEL_22;
    }
    v5 = -1073741789;
LABEL_22:
    *a3 = v17;
    goto LABEL_23;
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  Src[1] = Heap;
  LODWORD(Src[0]) = 11141120;
  if ( (unsigned __int8)RtlLCIDToCultureName(v13, (__int64)Src) )
    goto LABEL_12;
  v5 = -1073741595;
LABEL_23:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  return v5;
}
