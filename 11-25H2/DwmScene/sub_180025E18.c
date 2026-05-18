/*
 * XREFs of sub_180025E18 @ 0x180025E18
 * Callers:
 *     sub_180023C6C @ 0x180023C6C (sub_180023C6C.c)
 *     sub_18004E740 @ 0x18004E740 (sub_18004E740.c)
 *     sub_18004E82C @ 0x18004E82C (sub_18004E82C.c)
 *     sub_18004E918 @ 0x18004E918 (sub_18004E918.c)
 *     sub_18004EA04 @ 0x18004EA04 (sub_18004EA04.c)
 *     sub_18004EAF0 @ 0x18004EAF0 (sub_18004EAF0.c)
 *     sub_18004EBDC @ 0x18004EBDC (sub_18004EBDC.c)
 *     sub_18004ECC8 @ 0x18004ECC8 (sub_18004ECC8.c)
 *     sub_18004EDB4 @ 0x18004EDB4 (sub_18004EDB4.c)
 *     sub_1800555B4 @ 0x1800555B4 (sub_1800555B4.c)
 *     sub_18005C498 @ 0x18005C498 (sub_18005C498.c)
 *     sub_180086FCC @ 0x180086FCC (sub_180086FCC.c)
 *     sub_180090DF8 @ 0x180090DF8 (sub_180090DF8.c)
 *     sub_1800B69D8 @ 0x1800B69D8 (sub_1800B69D8.c)
 *     sub_1800B6AC4 @ 0x1800B6AC4 (sub_1800B6AC4.c)
 *     sub_1800B6BB0 @ 0x1800B6BB0 (sub_1800B6BB0.c)
 *     sub_1800B6C9C @ 0x1800B6C9C (sub_1800B6C9C.c)
 *     sub_1800B6D88 @ 0x1800B6D88 (sub_1800B6D88.c)
 *     sub_1800B6E74 @ 0x1800B6E74 (sub_1800B6E74.c)
 *     sub_1800B6F60 @ 0x1800B6F60 (sub_1800B6F60.c)
 *     sub_1800B704C @ 0x1800B704C (sub_1800B704C.c)
 *     sub_1800B7138 @ 0x1800B7138 (sub_1800B7138.c)
 *     sub_1800B7224 @ 0x1800B7224 (sub_1800B7224.c)
 *     sub_1800B7310 @ 0x1800B7310 (sub_1800B7310.c)
 *     sub_1800B73FC @ 0x1800B73FC (sub_1800B73FC.c)
 *     sub_1800B74E8 @ 0x1800B74E8 (sub_1800B74E8.c)
 *     sub_1800B75D4 @ 0x1800B75D4 (sub_1800B75D4.c)
 *     sub_1800B76C0 @ 0x1800B76C0 (sub_1800B76C0.c)
 *     sub_1800B77AC @ 0x1800B77AC (sub_1800B77AC.c)
 *     sub_1800B7898 @ 0x1800B7898 (sub_1800B7898.c)
 *     sub_1800C7E40 @ 0x1800C7E40 (sub_1800C7E40.c)
 *     sub_1800D1D30 @ 0x1800D1D30 (sub_1800D1D30.c)
 * Callees:
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180025E18(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      sub_180012408(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
