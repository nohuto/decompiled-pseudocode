/*
 * XREFs of LdrpMergeParentBaseLanguagesToList @ 0x180034340
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800DA0F0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlpTraverseParents @ 0x180033FF0 (RtlpTraverseParents.c)
 *     RtlpFreeTraverseNodes @ 0x1800345A0 (RtlpFreeTraverseNodes.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall LdrpMergeParentBaseLanguagesToList(__int64 *a1, _WORD *a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 Heap; // rax
  __int64 v10; // rdi
  wchar_t *v11; // rbp
  __int16 v12; // bx
  int appended; // esi
  unsigned __int16 *v14; // rcx
  __int64 v15; // rcx
  wchar_t *String; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  size_t v22; // rax
  wchar_t *v23[2]; // [rsp+30h] [rbp-38h] BYREF

  a5 = 0;
  *(_OWORD *)v23 = 0LL;
  if ( !a1 || !*a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( !is_mul_ok(8uLL, 0x2AuLL) )
    return 3221225621LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x150uLL);
  v10 = Heap;
  if ( Heap )
  {
    if ( RtlpTraverseParents(a2, Heap, a3, a4, 0, 42) )
    {
      v11 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( v11 )
      {
        v12 = 0;
        appended = 0;
        while ( v12 < 42 )
        {
          if ( v12 )
          {
            v14 = (unsigned __int16 *)(v10 + 8LL * v12);
            if ( *((_DWORD *)v14 + 1) )
            {
              if ( *v14 )
              {
                v15 = *v14;
                v23[1] = v11;
                LODWORD(v23[0]) = 11141120;
                if ( !(unsigned __int8)RtlLCIDToCultureName(v15, v23) )
                  goto LABEL_19;
                String = v23[1];
              }
              else
              {
                v18 = (__int16)v14[1];
                if ( (v18 & 0x8000u) != 0LL )
                {
LABEL_19:
                  appended = -1073741595;
                  break;
                }
                v19 = *(_QWORD *)(a3 + 32);
                v23[0] = 0LL;
                v20 = *(__int16 *)(*(_QWORD *)(v19 + 16) + 2 * v18);
                v21 = *(_QWORD *)(v19 + 24);
                String = (wchar_t *)(v21 + 2 * v20);
                if ( String )
                {
                  v22 = 2 * wcslen((const wchar_t *)(v21 + 2 * v20));
                  if ( v22 >= 0xFFFE )
                    LOWORD(v22) = -4;
                  LOWORD(v23[0]) = v22;
                  WORD1(v23[0]) = v22 + 2;
                }
              }
              appended = LdrpLangFallbackListAppendNode(a1, a3, 0, &a5, String);
              if ( appended < 0 )
                break;
            }
          }
          ++v12;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v11);
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
