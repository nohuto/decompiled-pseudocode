/*
 * XREFs of sub_18002655C @ 0x18002655C
 * Callers:
 *     sub_180026518 @ 0x180026518 (sub_180026518.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800370B0 @ 0x1800370B0 (sub_1800370B0.c)
 *     sub_180050358 @ 0x180050358 (sub_180050358.c)
 *     sub_1800513D4 @ 0x1800513D4 (sub_1800513D4.c)
 *     sub_180068968 @ 0x180068968 (sub_180068968.c)
 *     sub_180080E20 @ 0x180080E20 (sub_180080E20.c)
 *     sub_180080F60 @ 0x180080F60 (sub_180080F60.c)
 *     sub_18008163C @ 0x18008163C (sub_18008163C.c)
 *     sub_180081968 @ 0x180081968 (sub_180081968.c)
 *     sub_180081E54 @ 0x180081E54 (sub_180081E54.c)
 *     sub_180090D8C @ 0x180090D8C (sub_180090D8C.c)
 *     sub_1800B8688 @ 0x1800B8688 (sub_1800B8688.c)
 *     sub_1800C6DF4 @ 0x1800C6DF4 (sub_1800C6DF4.c)
 *     sub_1800C7BD8 @ 0x1800C7BD8 (sub_1800C7BD8.c)
 *     sub_1800C98D0 @ 0x1800C98D0 (sub_1800C98D0.c)
 *     sub_1800C9B30 @ 0x1800C9B30 (sub_1800C9B30.c)
 *     sub_1800C9D94 @ 0x1800C9D94 (sub_1800C9D94.c)
 *     sub_1800D4D60 @ 0x1800D4D60 (sub_1800D4D60.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_18002655C(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 80);
  if ( v2 )
    sub_180010544(v2);
  return sub_1800277F8(a1);
}
