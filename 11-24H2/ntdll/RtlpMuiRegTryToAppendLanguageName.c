/*
 * XREFs of RtlpMuiRegTryToAppendLanguageName @ 0x180016190
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800CB4CC (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800196B0 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
  wchar_t *Heap; // r14
  __int64 v12; // rax
  LCID v13; // ecx
  wchar_t *v14; // rcx
  size_t v15; // rax
  __int64 v16; // r13
  unsigned int v17; // edi
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  String = 0LL;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v10 = *a3;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v12 = *(__int16 *)(a2 + 6);
  if ( (__int16)v12 > 0 )
  {
    v14 = (wchar_t *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
                    + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2 * v12));
    String.Buffer = v14;
    if ( v14 )
    {
      v15 = 2 * wcslen(v14);
      if ( v15 >= 0xFFFE )
        LOWORD(v15) = -4;
      String.Length = v15;
      String.MaximumLength = v15 + 2;
    }
LABEL_12:
    if ( *a3 && *a3 <= a5 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a4, String.Buffer) )
      goto LABEL_23;
    v16 = (unsigned int)v10 + (String.Length >> 1);
    v17 = v16 + 1;
    if ( a4 && (unsigned int)v10 < v17 )
    {
      if ( v17 < a5 )
      {
        memmove(&a4[v10], String.Buffer, String.Length);
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
  String.Buffer = Heap;
  *(_DWORD *)&String.Length = 11141120;
  if ( RtlLCIDToCultureName(v13, &String) )
    goto LABEL_12;
  v5 = -1073741595;
LABEL_23:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v5;
}
