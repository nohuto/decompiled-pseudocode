/*
 * XREFs of sub_1800B9B64 @ 0x1800B9B64
 * Callers:
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_1800B8FEC @ 0x1800B8FEC (sub_1800B8FEC.c)
 *     sub_1800B9A20 @ 0x1800B9A20 (sub_1800B9A20.c)
 *     sub_1800B9BF0 @ 0x1800B9BF0 (sub_1800B9BF0.c)
 *     sub_1800BB270 @ 0x1800BB270 (sub_1800BB270.c)
 *     sub_1800BD7C0 @ 0x1800BD7C0 (sub_1800BD7C0.c)
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 *     sub_1800C0BD4 @ 0x1800C0BD4 (sub_1800C0BD4.c)
 *     sub_1800C0F9C @ 0x1800C0F9C (sub_1800C0F9C.c)
 *     sub_1800C11C8 @ 0x1800C11C8 (sub_1800C11C8.c)
 *     sub_1800C1490 @ 0x1800C1490 (sub_1800C1490.c)
 *     sub_1800C1F10 @ 0x1800C1F10 (sub_1800C1F10.c)
 *     sub_1800C2BC0 @ 0x1800C2BC0 (sub_1800C2BC0.c)
 *     sub_1800C3244 @ 0x1800C3244 (sub_1800C3244.c)
 *     sub_1800C6590 @ 0x1800C6590 (sub_1800C6590.c)
 *     sub_1800C6FD0 @ 0x1800C6FD0 (sub_1800C6FD0.c)
 *     sub_1800C7230 @ 0x1800C7230 (sub_1800C7230.c)
 *     sub_1800C75E0 @ 0x1800C75E0 (sub_1800C75E0.c)
 *     sub_1800C7DC0 @ 0x1800C7DC0 (sub_1800C7DC0.c)
 *     sub_1800C8630 @ 0x1800C8630 (sub_1800C8630.c)
 *     sub_1800C8AC8 @ 0x1800C8AC8 (sub_1800C8AC8.c)
 *     sub_1800C8D78 @ 0x1800C8D78 (sub_1800C8D78.c)
 *     sub_1800C9860 @ 0x1800C9860 (sub_1800C9860.c)
 *     sub_1800C9AB0 @ 0x1800C9AB0 (sub_1800C9AB0.c)
 *     sub_1800C9D10 @ 0x1800C9D10 (sub_1800C9D10.c)
 *     sub_1800C9F70 @ 0x1800C9F70 (sub_1800C9F70.c)
 *     sub_1800CA2C0 @ 0x1800CA2C0 (sub_1800CA2C0.c)
 *     sub_1800CAA7C @ 0x1800CAA7C (sub_1800CAA7C.c)
 *     sub_1800CABE8 @ 0x1800CABE8 (sub_1800CABE8.c)
 *     sub_1800CB6B0 @ 0x1800CB6B0 (sub_1800CB6B0.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_1800B9B64(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 3872);
  *a2 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
