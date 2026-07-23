/*
 * XREFs of MiPteNeedsCommitCharge @ 0x14030CCA0
 * Callers:
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // ecx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  if ( (v4 & 0x70) == 0x20 && (v4 & 0xF80) != 0x80 )
  {
    MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 0xCu, &v6);
    if ( v6 )
      return (*(_BYTE *)(v6 + 32) & 0xA) != 10;
  }
  LOBYTE(v2) = (*(_DWORD *)(a1 + 48) & 0x280) != 640;
  return v2;
}
