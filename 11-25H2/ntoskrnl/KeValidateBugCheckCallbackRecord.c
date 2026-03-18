/*
 * XREFs of KeValidateBugCheckCallbackRecord @ 0x1405AEFE0
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1405902B4 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405903FC (IopDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1405949C0 (IopLiveDumpAddTriageDumpData.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140596458 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B054C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1405B0764 (KiInvokeBugCheckEntryCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     IoIsPartialDumpRetry @ 0x14058E370 (IoIsPartialDumpRetry.c)
 */

bool __fastcall KeValidateBugCheckCallbackRecord(__int64 a1, int a2, _QWORD *a3)
{
  bool IsAddressValid; // di
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 i; // rsi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool result; // al

  IsAddressValid = 0;
  v7 = 0LL;
  if ( (a1 & 7) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    for ( i = ((unsigned __int64)(a1 & 0xFFF) + 4143) >> 12; i; --i )
    {
      if ( !MmIsAddressValidEx(v8) )
        goto LABEL_14;
      v8 += 4096LL;
    }
    if ( *(_QWORD *)(a1 + 8) == *a3 )
    {
      v7 = a1;
      if ( IoIsPartialDumpRetry() && (unsigned __int8)(*(_BYTE *)(a1 + 44) - 3) <= 1u )
        *(_BYTE *)(a1 + 44) = 1;
      if ( *(_BYTE *)(a1 + 44) == 1 )
      {
        v10 = *(int *)(a1 + 40);
        v11 = *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(a1 + 32) == v11 + v10 + *(_QWORD *)(a1 + 24) && (_DWORD)v10 == a2 )
          IsAddressValid = MmIsAddressValidEx(v11);
      }
    }
  }
LABEL_14:
  result = IsAddressValid;
  *a3 = v7;
  return result;
}
