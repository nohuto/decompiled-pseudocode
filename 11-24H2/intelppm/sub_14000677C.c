/*
 * XREFs of sub_14000677C @ 0x14000677C
 * Callers:
 *     sub_14000D680 @ 0x14000D680 (sub_14000D680.c)
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14000677C(__int64 a1)
{
  int v1; // eax

  if ( (*(_DWORD *)(a1 + 280) & 0x7F070) != 0 && dword_140019B00 && byte_140019B05 )
    __outbyte(dword_140019B00, byte_140019B05);
  v1 = *(_DWORD *)(a1 + 280);
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_140019B00 )
    {
      LOBYTE(v1) = byte_140019B04;
      if ( byte_140019B04 )
        __outbyte(dword_140019B00, byte_140019B04);
    }
  }
  return v1;
}
