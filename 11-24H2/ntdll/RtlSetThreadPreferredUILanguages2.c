/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetThreadPreferredUILanguages @ 0x180011A20 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpMuiRegDupLanguageList @ 0x1800C9DCC (RtlpMuiRegDupLanguageList.c)
 *     RtlpDupTebLanguageList @ 0x1800CA478 (RtlpDupTebLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x1800CA5CC (RtlpFreeTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(int a1, _WORD *a2, int *a3, _QWORD *a4)
{
  _BYTE **Heap; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  ULONG NumberOfLanguages[10]; // [rsp+20h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+20h] BYREF

  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  NumberOfLanguages[0] = 0;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, NumberOfLanguages, 0LL, &ReturnLength);
  Heap = (_BYTE **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( Heap )
  {
    if ( NtCurrentTeb()->PreferredLanguages )
    {
      v13 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->PreferredLanguages);
      *Heap = (_BYTE *)v13;
      if ( !v13 )
        goto LABEL_17;
      *(_DWORD *)(v13 + 40) &= ~0x40u;
    }
    if ( NtCurrentTeb()->MergedPrefLanguages )
    {
      v10 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->MergedPrefLanguages);
      Heap[1] = (_BYTE *)v10;
      if ( !v10 )
        goto LABEL_17;
      *(_DWORD *)(v10 + 40) &= ~0x40u;
    }
    if ( !NtCurrentTeb()->UserPrefLanguages )
      goto LABEL_11;
    v11 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
    Heap[2] = (_BYTE *)v11;
    if ( v11 )
    {
      *(_DWORD *)(*(_QWORD *)v11 + 40LL) &= ~0x40u;
LABEL_11:
      *((_DWORD *)Heap + 6) = NtCurrentTeb()->ClientId.UniqueThread;
      v12 = RtlSetThreadPreferredUILanguages(a1, a2, a3);
      if ( v12 >= 0 )
      {
        *a4 = Heap;
        return (unsigned int)v12;
      }
LABEL_18:
      RtlpMuiRegFreeLanguageList(*Heap);
      RtlpMuiRegFreeLanguageList(Heap[1]);
      RtlpFreeTebLanguageList(Heap[2]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return (unsigned int)v12;
    }
LABEL_17:
    v12 = -1073741801;
    goto LABEL_18;
  }
  return 3221225495LL;
}
