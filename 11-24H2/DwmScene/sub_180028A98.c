/*
 * XREFs of sub_180028A98 @ 0x180028A98
 * Callers:
 *     sub_18002AD10 @ 0x18002AD10 (sub_18002AD10.c)
 *     sub_18002F414 @ 0x18002F414 (sub_18002F414.c)
 *     sub_18003B060 @ 0x18003B060 (sub_18003B060.c)
 *     sub_18003B094 @ 0x18003B094 (sub_18003B094.c)
 *     sub_18003B3FC @ 0x18003B3FC (sub_18003B3FC.c)
 *     sub_18003C9A8 @ 0x18003C9A8 (sub_18003C9A8.c)
 *     sub_18003CA64 @ 0x18003CA64 (sub_18003CA64.c)
 *     sub_180041620 @ 0x180041620 (sub_180041620.c)
 *     sub_1800484E0 @ 0x1800484E0 (sub_1800484E0.c)
 *     sub_18005A870 @ 0x18005A870 (sub_18005A870.c)
 *     sub_18005B2DC @ 0x18005B2DC (sub_18005B2DC.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 *     sub_180015274 @ 0x180015274 (sub_180015274.c)
 */

__int64 *__fastcall sub_180028A98(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_180015274(v8, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  v5 = v3[1];
  v3[1] = a1[1];
  v6 = (volatile signed __int32 *)v8[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010644(v6);
  return a1;
}
