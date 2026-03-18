/*
 * XREFs of MiPteNeedsCommitCharge @ 0x140246380
 * Callers:
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiPteNeedsCommitCharge(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // ecx
  unsigned __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 48);
  v6 = 0LL;
  if ( (v4 & 0x70) == 0x20 && (v4 & 0xF80) != 0x80 )
  {
    MiGetProtoPteAddress(a1, (unsigned __int64)(a2 << 25 >> 16) >> 12, 12, &v6);
    if ( v6 )
      return (v6[4] & 0xA) != 10;
  }
  LOBYTE(v2) = (*(_DWORD *)(a1 + 48) & 0x280) != 640;
  return v2;
}
