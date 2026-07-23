/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140964B78
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x1404281C0 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x14096736C (HvFreeUnreconciledData.c)
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
