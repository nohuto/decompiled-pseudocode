/*
 * XREFs of sub_18000FA2C @ 0x18000FA2C
 * Callers:
 *     sub_18000D038 @ 0x18000D038 (sub_18000D038.c)
 *     sub_18000D0E4 @ 0x18000D0E4 (sub_18000D0E4.c)
 *     sub_18000D1D0 @ 0x18000D1D0 (sub_18000D1D0.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_18000FB2C @ 0x18000FB2C (sub_18000FB2C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall __noreturn sub_18000FA2C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_1801C3378 )
    qword_1801C3378();
  if ( qword_1801C3350 )
    qword_1801C3350(a1);
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 136);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_18000FB2C(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 64);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_18000FB2C(v5, v2, 0LL);
}
