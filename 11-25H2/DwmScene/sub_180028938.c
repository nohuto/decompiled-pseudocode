/*
 * XREFs of sub_180028938 @ 0x180028938
 * Callers:
 *     sub_18002ABB0 @ 0x18002ABB0 (sub_18002ABB0.c)
 *     sub_18002F2B4 @ 0x18002F2B4 (sub_18002F2B4.c)
 *     sub_18003AF00 @ 0x18003AF00 (sub_18003AF00.c)
 *     sub_18003AF34 @ 0x18003AF34 (sub_18003AF34.c)
 *     sub_18003B29C @ 0x18003B29C (sub_18003B29C.c)
 *     sub_18003C848 @ 0x18003C848 (sub_18003C848.c)
 *     sub_18003C904 @ 0x18003C904 (sub_18003C904.c)
 *     sub_1800414C0 @ 0x1800414C0 (sub_1800414C0.c)
 *     sub_180048380 @ 0x180048380 (sub_180048380.c)
 *     sub_18005A710 @ 0x18005A710 (sub_18005A710.c)
 *     sub_18005B17C @ 0x18005B17C (sub_18005B17C.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 */

__int64 *__fastcall sub_180028938(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180015174(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = (volatile signed __int32 *)v8[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010544(v6);
  return a1;
}
