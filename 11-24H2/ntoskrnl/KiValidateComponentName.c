/*
 * XREFs of KiValidateComponentName @ 0x1405B1424
 * Callers:
 *     IopLiveDumpAddTriageDumpData @ 0x140595050 (IopLiveDumpAddTriageDumpData.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B0E70 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     RtlStringCbLengthA @ 0x14055DA44 (RtlStringCbLengthA.c)
 */

char __fastcall KiValidateComponentName(__int64 psz, _DWORD *a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  size_t pcbLength; // [rsp+40h] [rbp+18h] BYREF

  pcbLength = 0LL;
  if ( !MmIsAddressValidEx(psz) )
    return 0;
  v4 = psz & 0xFFFFFFFFFFFFF000uLL;
  v5 = 257;
  if ( psz - (psz & 0xFFFFFFFFFFFFF000uLL) > 0xEFF
    && (v4 + 4096 < v4 || v4 == -4096LL || !MmIsAddressValidEx(v4 + 4096)) )
  {
    v5 = v4 - psz + 4096;
  }
  if ( RtlStringCbLengthA((STRSAFE_PCNZCH)psz, v5, &pcbLength) < 0 )
    return 0;
  *a2 = pcbLength;
  return 1;
}
