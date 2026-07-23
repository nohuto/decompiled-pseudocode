/*
 * XREFs of RtlpUpdateTEBLanguage @ 0x18008CF30
 * Callers:
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x180087740 (RtlpInitializeUserList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpMuiRegFreeLanguageConfigList @ 0x18008D024 (RtlpMuiRegFreeLanguageConfigList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 */

__int64 __fastcall RtlpUpdateTEBLanguage(__int64 a1, __int64 a2, int a3)
{
  _QWORD *Heap; // rax
  _QWORD *UserPrefLanguages; // rbx
  int v9; // edi

  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
    UserPrefLanguages = Heap;
    if ( !Heap )
      return 3221225495LL;
    *Heap = 0LL;
    Heap[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap;
  }
  v9 = a3 - 4;
  if ( v9 )
  {
    if ( v9 != 1 )
      return 0LL;
    if ( a2 )
    {
      if ( UserPrefLanguages[1] )
        RtlpMuiRegFreeLanguageConfigList();
      UserPrefLanguages[1] = a2;
      return 0LL;
    }
  }
  else if ( a1 )
  {
    if ( *UserPrefLanguages )
    {
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40LL);
      RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
    }
    *UserPrefLanguages = a1;
    return 0LL;
  }
  return 3221225485LL;
}
