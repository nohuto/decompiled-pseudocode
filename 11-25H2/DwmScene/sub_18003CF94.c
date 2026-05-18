/*
 * XREFs of sub_18003CF94 @ 0x18003CF94
 * Callers:
 *     sub_18003CB18 @ 0x18003CB18 (sub_18003CB18.c)
 *     sub_18003CD9C @ 0x18003CD9C (sub_18003CD9C.c)
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 *     sub_1800CF540 @ 0x1800CF540 (sub_1800CF540.c)
 *     sub_1800CF73C @ 0x1800CF73C (sub_1800CF73C.c)
 *     sub_1800D0340 @ 0x1800D0340 (sub_1800D0340.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 *     sub_18001DC50 @ 0x18001DC50 (sub_18001DC50.c)
 */

bool __fastcall sub_18003CF94(__int64 a1, __int64 a2)
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
    sub_1800130AC(a2 + 32);
    v4 = sub_1800130AC(v3);
    LOBYTE(v8) = sub_18001DC50(v4, *(_QWORD *)(v6 + 16), v7, *(_QWORD *)(v5 + 48));
    return v8 >= 0;
  }
  return v2;
}
