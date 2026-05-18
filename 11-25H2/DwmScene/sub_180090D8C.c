/*
 * XREFs of sub_180090D8C @ 0x180090D8C
 * Callers:
 *     sub_18008184C @ 0x18008184C (sub_18008184C.c)
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_1 @ 0x180081880 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z_1.c)
 *     sub_1800C9690 @ 0x1800C9690 (sub_1800C9690.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

__int64 __fastcall sub_180090D8C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 )
    sub_180010544(v2);
  return sub_18002655C((__int64)a1);
}
