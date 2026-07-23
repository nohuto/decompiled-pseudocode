/*
 * XREFs of LdrpQueryValueKey @ 0x1800E4440
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180099E20 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1801473B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180148660 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1801488A4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180148B20 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v10; // edi
  ULONG Length; // edi
  _DWORD *Heap; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // r14d
  ULONG v16; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      ResultLength = 0;
      Length = 12;
LABEL_4:
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      if ( Heap )
      {
        v13 = NtQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
        v14 = v13;
        if ( v13 >= 0 )
        {
          if ( a4 )
          {
            if ( !v5 )
              goto LABEL_16;
            v16 = Heap[2];
            if ( v16 > *v5 )
            {
              v14 = -2147483643;
            }
            else if ( v16 <= Length )
            {
              memmove(a4, Heap + 3, v16);
            }
            goto LABEL_15;
          }
        }
        else if ( v13 != -2147483643 )
        {
LABEL_7:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v14;
        }
        if ( !v5 )
        {
LABEL_16:
          if ( a3 )
            *a3 = Heap[1];
          goto LABEL_7;
        }
LABEL_15:
        *v5 = Heap[2];
        goto LABEL_16;
      }
      return (unsigned int)-1073741670;
    }
LABEL_3:
    v10 = *a5;
    ResultLength = 0;
    Length = v10 + 12;
    if ( !Length )
      return (unsigned int)-1073741670;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
