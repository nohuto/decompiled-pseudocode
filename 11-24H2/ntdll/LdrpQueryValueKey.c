/*
 * XREFs of LdrpQueryValueKey @ 0x1800E8D50
 * Callers:
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800D2EC0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180149004 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014A2B0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x18014A4F4 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014A770 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpQueryValueKey(__int64 a1, __int64 a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned int v10; // edi
  unsigned int v11; // edi
  _DWORD *Heap; // rsi
  int v13; // eax
  unsigned int v14; // r14d
  unsigned int v16; // eax
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v17 = 0;
      v11 = 12;
LABEL_4:
      Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
      if ( Heap )
      {
        v13 = NtQueryValueKey(a1, a2, 2LL, Heap, v11, &v17);
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
            else if ( v16 <= v11 )
            {
              memmove(a4, Heap + 3, v16);
            }
            goto LABEL_15;
          }
        }
        else if ( v13 != -2147483643 )
        {
LABEL_7:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
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
    v17 = 0;
    v11 = v10 + 12;
    if ( !v11 )
      return (unsigned int)-1073741670;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
