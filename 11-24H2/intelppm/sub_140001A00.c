/*
 * XREFs of sub_140001A00 @ 0x140001A00
 * Callers:
 *     sub_140001570 @ 0x140001570 (sub_140001570.c)
 *     sub_1400015F0 @ 0x1400015F0 (sub_1400015F0.c)
 *     sub_140009400 @ 0x140009400 (sub_140009400.c)
 *     sub_140009530 @ 0x140009530 (sub_140009530.c)
 *     sub_1400097C0 @ 0x1400097C0 (sub_1400097C0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140001A00(__int64 a1, unsigned int a2)
{
  if ( a2 == *(_DWORD *)(a1 + 100) )
    return *(_QWORD *)(a1 + 40);
  if ( a2 == 100 )
    return *(_QWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 131) && a2 == *(_DWORD *)(a1 + 116) )
    return *(_QWORD *)(a1 + 88);
  if ( a2 == *(_DWORD *)(a1 + 108) )
    return *(_QWORD *)(a1 + 56);
  if ( a2 == *(_DWORD *)(a1 + 112) )
    return *(_QWORD *)(a1 + 64);
  return (*(_QWORD *)(a1 + 48) * (unsigned __int64)a2 + 50) / 0x64;
}
