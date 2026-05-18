/*
 * XREFs of sub_1800B9A04 @ 0x1800B9A04
 * Callers:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_1800B8E8C @ 0x1800B8E8C (sub_1800B8E8C.c)
 *     sub_1800B98C0 @ 0x1800B98C0 (sub_1800B98C0.c)
 *     sub_1800B9A90 @ 0x1800B9A90 (sub_1800B9A90.c)
 *     sub_1800BB110 @ 0x1800BB110 (sub_1800BB110.c)
 *     sub_1800BD660 @ 0x1800BD660 (sub_1800BD660.c)
 *     sub_1800BEF30 @ 0x1800BEF30 (sub_1800BEF30.c)
 *     sub_1800BF168 @ 0x1800BF168 (sub_1800BF168.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 *     sub_1800C0A74 @ 0x1800C0A74 (sub_1800C0A74.c)
 *     sub_1800C0E3C @ 0x1800C0E3C (sub_1800C0E3C.c)
 *     sub_1800C1068 @ 0x1800C1068 (sub_1800C1068.c)
 *     sub_1800C1330 @ 0x1800C1330 (sub_1800C1330.c)
 *     sub_1800C1DB0 @ 0x1800C1DB0 (sub_1800C1DB0.c)
 *     sub_1800C2A60 @ 0x1800C2A60 (sub_1800C2A60.c)
 *     sub_1800C30E4 @ 0x1800C30E4 (sub_1800C30E4.c)
 *     sub_1800C6430 @ 0x1800C6430 (sub_1800C6430.c)
 *     sub_1800C6E70 @ 0x1800C6E70 (sub_1800C6E70.c)
 *     sub_1800C70D0 @ 0x1800C70D0 (sub_1800C70D0.c)
 *     sub_1800C7480 @ 0x1800C7480 (sub_1800C7480.c)
 *     sub_1800C7C60 @ 0x1800C7C60 (sub_1800C7C60.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 *     sub_1800C8968 @ 0x1800C8968 (sub_1800C8968.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 *     sub_1800C9700 @ 0x1800C9700 (sub_1800C9700.c)
 *     sub_1800C9950 @ 0x1800C9950 (sub_1800C9950.c)
 *     sub_1800C9BB0 @ 0x1800C9BB0 (sub_1800C9BB0.c)
 *     sub_1800C9E10 @ 0x1800C9E10 (sub_1800C9E10.c)
 *     sub_1800CA160 @ 0x1800CA160 (sub_1800CA160.c)
 *     sub_1800CA91C @ 0x1800CA91C (sub_1800CA91C.c)
 *     sub_1800CAA88 @ 0x1800CAA88 (sub_1800CAA88.c)
 *     sub_1800CB550 @ 0x1800CB550 (sub_1800CB550.c)
 *     sub_1800CBD30 @ 0x1800CBD30 (sub_1800CBD30.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800B9A04(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 3872);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
