/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800A8A50 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpFreeTraverseNodes @ 0x1800A9600 (RtlpFreeTraverseNodes.c)
 *     RtlpTraverseParents @ 0x1800A9640 (RtlpTraverseParents.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

__int64 __fastcall LdrpMergeParentBaseLanguagesToList(__int64 *a1, __int64 a2, __int64 a3, int a4, __int16 a5)
{
  int v7; // ebx
  __int64 Heap; // rax
  __int64 v10; // rdi
  wchar_t *v11; // rbp
  __int64 v12; // r9
  __int16 v13; // bx
  int appended; // esi
  unsigned __int16 *v15; // rcx
  unsigned int v16; // ecx
  wchar_t *String; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  size_t v23; // rax
  wchar_t *v24[2]; // [rsp+30h] [rbp-38h] BYREF

  a5 = 0;
  v7 = a2;
  *(_OWORD *)v24 = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( !is_mul_ok(8uLL, 0x2AuLL) )
    return 3221225621LL;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x150uLL);
  v10 = Heap;
  if ( Heap )
  {
    if ( (unsigned __int8)RtlpTraverseParents(v7, Heap, a3, a4, 0, 42) )
    {
      v11 = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( v11 )
      {
        v13 = 0;
        appended = 0;
        while ( v13 < 42 )
        {
          if ( v13 )
          {
            v15 = (unsigned __int16 *)(v10 + 8LL * v13);
            if ( *((_DWORD *)v15 + 1) )
            {
              if ( *v15 )
              {
                v16 = *v15;
                v24[1] = v11;
                LODWORD(v24[0]) = 11141120;
                if ( !(unsigned __int8)RtlLCIDToCultureName(v16, (__int64)v24) )
                  goto LABEL_19;
                String = v24[1];
              }
              else
              {
                v19 = (__int16)v15[1];
                if ( (v19 & 0x8000u) != 0LL )
                {
LABEL_19:
                  appended = -1073741595;
                  break;
                }
                v20 = *(_QWORD *)(a3 + 32);
                v24[0] = 0LL;
                v21 = *(__int16 *)(*(_QWORD *)(v20 + 16) + 2 * v19);
                v22 = *(_QWORD *)(v20 + 24);
                String = (wchar_t *)(v22 + 2 * v21);
                if ( String )
                {
                  v23 = 2 * wcslen((const wchar_t *)(v22 + 2 * v21));
                  if ( v23 >= 0xFFFE )
                    LOWORD(v23) = -4;
                  LOWORD(v24[0]) = v23;
                  WORD1(v24[0]) = v23 + 2;
                }
              }
              appended = LdrpLangFallbackListAppendNode(a1, a3, 0, &a5, String);
              if ( appended < 0 )
                break;
            }
          }
          ++v13;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v11, v12);
        if ( !v10 )
          return (unsigned int)appended;
      }
      else
      {
        appended = -1073741801;
      }
    }
    else
    {
      appended = -1073741823;
    }
    RtlpFreeTraverseNodes(v10);
    return (unsigned int)appended;
  }
  return 3221225495LL;
}
