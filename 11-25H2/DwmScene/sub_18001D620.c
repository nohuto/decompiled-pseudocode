/*
 * XREFs of sub_18001D620 @ 0x18001D620
 * Callers:
 *     sub_18002A7CC @ 0x18002A7CC (sub_18002A7CC.c)
 *     sub_180039580 @ 0x180039580 (sub_180039580.c)
 *     sub_18005C16C @ 0x18005C16C (sub_18005C16C.c)
 *     sub_18007E444 @ 0x18007E444 (sub_18007E444.c)
 *     sub_18008CD40 @ 0x18008CD40 (sub_18008CD40.c)
 * Callees:
 *     sub_18001CC24 @ 0x18001CC24 (sub_18001CC24.c)
 */

__int64 __fastcall sub_18001D620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  v4 = sub_18001CC24(a2, a3);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 15LL;
  *(_BYTE *)v4 = 0;
  return a1;
}
