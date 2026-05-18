/*
 * XREFs of sub_180025F78 @ 0x180025F78
 * Callers:
 *     sub_180023DCC @ 0x180023DCC (sub_180023DCC.c)
 *     sub_18004E8A0 @ 0x18004E8A0 (sub_18004E8A0.c)
 *     sub_18004E98C @ 0x18004E98C (sub_18004E98C.c)
 *     sub_18004EA78 @ 0x18004EA78 (sub_18004EA78.c)
 *     sub_18004EB64 @ 0x18004EB64 (sub_18004EB64.c)
 *     sub_18004EC50 @ 0x18004EC50 (sub_18004EC50.c)
 *     sub_18004ED3C @ 0x18004ED3C (sub_18004ED3C.c)
 *     sub_18004EE28 @ 0x18004EE28 (sub_18004EE28.c)
 *     sub_18004EF14 @ 0x18004EF14 (sub_18004EF14.c)
 *     sub_180055714 @ 0x180055714 (sub_180055714.c)
 *     sub_18005C5F8 @ 0x18005C5F8 (sub_18005C5F8.c)
 *     sub_18008712C @ 0x18008712C (sub_18008712C.c)
 *     sub_180090F58 @ 0x180090F58 (sub_180090F58.c)
 *     sub_1800B6B38 @ 0x1800B6B38 (sub_1800B6B38.c)
 *     sub_1800B6C24 @ 0x1800B6C24 (sub_1800B6C24.c)
 *     sub_1800B6D10 @ 0x1800B6D10 (sub_1800B6D10.c)
 *     sub_1800B6DFC @ 0x1800B6DFC (sub_1800B6DFC.c)
 *     sub_1800B6EE8 @ 0x1800B6EE8 (sub_1800B6EE8.c)
 *     sub_1800B6FD4 @ 0x1800B6FD4 (sub_1800B6FD4.c)
 *     sub_1800B70C0 @ 0x1800B70C0 (sub_1800B70C0.c)
 *     sub_1800B71AC @ 0x1800B71AC (sub_1800B71AC.c)
 *     sub_1800B7298 @ 0x1800B7298 (sub_1800B7298.c)
 *     sub_1800B7384 @ 0x1800B7384 (sub_1800B7384.c)
 *     sub_1800B7470 @ 0x1800B7470 (sub_1800B7470.c)
 *     sub_1800B755C @ 0x1800B755C (sub_1800B755C.c)
 *     sub_1800B7648 @ 0x1800B7648 (sub_1800B7648.c)
 *     sub_1800B7734 @ 0x1800B7734 (sub_1800B7734.c)
 *     sub_1800B7820 @ 0x1800B7820 (sub_1800B7820.c)
 *     sub_1800B790C @ 0x1800B790C (sub_1800B790C.c)
 *     sub_1800B79F8 @ 0x1800B79F8 (sub_1800B79F8.c)
 *     sub_1800C7FA0 @ 0x1800C7FA0 (sub_1800C7FA0.c)
 *     sub_1800D1E90 @ 0x1800D1E90 (sub_1800D1E90.c)
 * Callees:
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180025F78(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      sub_180012508(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
