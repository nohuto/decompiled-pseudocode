/*
 * XREFs of sub_18003D0F4 @ 0x18003D0F4
 * Callers:
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_18003CEFC @ 0x18003CEFC (sub_18003CEFC.c)
 *     sub_18003D140 @ 0x18003D140 (sub_18003D140.c)
 *     sub_1800CF6A0 @ 0x1800CF6A0 (sub_1800CF6A0.c)
 *     sub_1800CF89C @ 0x1800CF89C (sub_1800CF89C.c)
 *     sub_1800D04A0 @ 0x1800D04A0 (sub_1800D04A0.c)
 * Callees:
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001DDB0 @ 0x18001DDB0 (sub_18001DDB0.c)
 */

bool __fastcall sub_18003D0F4(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  int v8; // eax

  v2 = 0;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    sub_1800131AC(a2 + 32);
    v4 = sub_1800131AC(v3);
    LOBYTE(v8) = sub_18001DDB0(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 48));
    return v8 >= 0;
  }
  return v2;
}
