/*
 * XREFs of HvFoldBackUnreconciledData @ 0x14097C368
 * Callers:
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140435740 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x14097EB5C (HvFreeUnreconciledData.c)
 */

__int64 __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1736));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1732) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 195) = 1;
  return HvFreeUnreconciledData(a1);
}
