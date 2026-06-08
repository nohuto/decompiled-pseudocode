/*
 * XREFs of sub_1400299E0 @ 0x1400299E0
 * Callers:
 *     sub_14000DAA4 @ 0x14000DAA4 (sub_14000DAA4.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_140037080 @ 0x140037080 (sub_140037080.c)
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 *     sub_1400385B0 @ 0x1400385B0 (sub_1400385B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400299E0(__int64 a1, int a2, int a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  __int64 result; // rax

  v6 = (32 * a2 + 24 * a3 + 591) & 0xFFFFFFF8;
  v7 = 32 * a2 + 584;
  result = ExAllocatePool2(64LL, v6 + 8 * a3 * a2, 1919119952LL);
  if ( result )
  {
    *(_DWORD *)result = 82;
    *(_QWORD *)(result + 568) = result + 584;
    *(_DWORD *)(result + 16) = a2;
    *(_QWORD *)(result + 560) = result + v7;
    *(_DWORD *)(result + 36) = a3;
    *(_QWORD *)(result + 576) = result + v6;
    if ( *(_BYTE *)(a1 + 1138) )
      *(_QWORD *)(result + 536) = sub_14000F6B0;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x28u) )
    {
      *(_QWORD *)(result + 544) = sub_140003510;
      *(_QWORD *)(result + 552) = sub_140003150;
      *(_QWORD *)(result + 96) = *(_QWORD *)(a1 + 1120);
    }
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
      *(_QWORD *)(result + 512) = sub_1400010E0;
    *(_QWORD *)(result + 520) = sub_140046FC0;
    *(_QWORD *)(result + 528) = sub_140045940;
  }
  return result;
}
