/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpMuiRegDupLanguageList @ 0x18007D0E0 (RtlpMuiRegDupLanguageList.c)
 *     RtlpDupTebLanguageList @ 0x1800EC0D4 (RtlpDupTebLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x1800EC22C (RtlpFreeTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(__int64 a1, _WORD *a2, int *a3, unsigned __int64 *a4)
{
  unsigned int v7; // ebx
  __int64 v9; // rdx
  unsigned __int64 Heap; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  _DWORD v15[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  v15[0] = 0;
  v16 = 0;
  RtlGetThreadPreferredUILanguages((void *)((unsigned int)a1 | 0x30), (unsigned __int64)v15, 0LL, &v16);
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( Heap )
  {
    if ( NtCurrentTeb()->PreferredLanguages )
    {
      v14 = RtlpMuiRegDupLanguageList((__int64)NtCurrentTeb()->PreferredLanguages, v9);
      *(_QWORD *)Heap = v14;
      if ( !v14 )
        goto LABEL_17;
      *(_DWORD *)(v14 + 40) &= ~0x40u;
    }
    if ( NtCurrentTeb()->MergedPrefLanguages )
    {
      v11 = RtlpMuiRegDupLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages, v9);
      *(_QWORD *)(Heap + 8) = v11;
      if ( !v11 )
        goto LABEL_17;
      *(_DWORD *)(v11 + 40) &= ~0x40u;
    }
    if ( !NtCurrentTeb()->UserPrefLanguages )
      goto LABEL_11;
    v12 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
    *(_QWORD *)(Heap + 16) = v12;
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)v12 + 40LL) &= ~0x40u;
LABEL_11:
      *(_DWORD *)(Heap + 24) = NtCurrentTeb()->ClientId.UniqueThread;
      v13 = RtlSetThreadPreferredUILanguages(v7, a2, a3);
      if ( v13 >= 0 )
      {
        *a4 = Heap;
        return (unsigned int)v13;
      }
LABEL_18:
      RtlpMuiRegFreeLanguageList(*(_QWORD *)Heap);
      RtlpMuiRegFreeLanguageList(*(_QWORD *)(Heap + 8));
      RtlpFreeTebLanguageList(*(_QWORD *)(Heap + 16));
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return (unsigned int)v13;
    }
LABEL_17:
    v13 = -1073741801;
    goto LABEL_18;
  }
  return 3221225495LL;
}
