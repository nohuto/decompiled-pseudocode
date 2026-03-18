/*
 * XREFs of HvFoldBackUnreconciledData @ 0x140AA54A8
 * Callers:
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 *     RtlMergeBitMaps @ 0x140439210 (RtlMergeBitMaps.c)
 *     HvFreeUnreconciledData @ 0x140884F08 (HvFreeUnreconciledData.c)
 */

void __fastcall HvFoldBackUnreconciledData(__int64 a1)
{
  ULONG v2; // eax
  bool v3; // zf

  RtlMergeBitMaps(a1 + 112, (unsigned int *)(a1 + 1736));
  v2 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 112));
  v3 = *(_BYTE *)(a1 + 1732) == 0;
  *(_DWORD *)(a1 + 128) = v2;
  if ( !v3 )
    *(_BYTE *)(a1 + 195) = 1;
  HvFreeUnreconciledData(a1);
}
