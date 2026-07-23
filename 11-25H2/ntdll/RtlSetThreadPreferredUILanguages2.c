/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x180088970
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpDupTebLanguageList @ 0x180087590 (RtlpDupTebLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x1800876EC (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008A6F8 (RtlpMuiRegDupLanguageList.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // ebx
  _QWORD *Heap; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  ULONG NumberOfLanguages[10]; // [rsp+20h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  NumberOfLanguages[0] = 0;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, NumberOfLanguages, 0LL, &ReturnLength);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( Heap )
  {
    if ( NtCurrentTeb()->PreferredLanguages )
    {
      v13 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->PreferredLanguages);
      *Heap = v13;
      if ( !v13 )
        goto LABEL_17;
      *(_DWORD *)(v13 + 40) &= ~0x40u;
    }
    if ( NtCurrentTeb()->MergedPrefLanguages )
    {
      v10 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->MergedPrefLanguages);
      Heap[1] = v10;
      if ( !v10 )
        goto LABEL_17;
      *(_DWORD *)(v10 + 40) &= ~0x40u;
    }
    if ( !NtCurrentTeb()->UserPrefLanguages )
      goto LABEL_11;
    v11 = RtlpDupTebLanguageList((_QWORD *)NtCurrentTeb()->UserPrefLanguages);
    Heap[2] = v11;
    if ( v11 )
    {
      *(_DWORD *)(*v11 + 40LL) &= ~0x40u;
LABEL_11:
      *((_DWORD *)Heap + 6) = NtCurrentTeb()->ClientId.UniqueThread;
      v12 = RtlSetThreadPreferredUILanguages(v7, a2, a3);
      if ( v12 >= 0 )
      {
        *a4 = Heap;
        return (unsigned int)v12;
      }
LABEL_18:
      RtlpMuiRegFreeLanguageList(*Heap);
      RtlpMuiRegFreeLanguageList(Heap[1]);
      RtlpFreeTebLanguageList((__int64 *)Heap[2]);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return (unsigned int)v12;
    }
LABEL_17:
    v12 = -1073741801;
    goto LABEL_18;
  }
  return 3221225495LL;
}
