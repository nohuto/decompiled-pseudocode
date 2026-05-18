/*
 * XREFs of sub_180090EEC @ 0x180090EEC
 * Callers:
 *     sub_1800819AC @ 0x1800819AC (sub_1800819AC.c)
 *     ??_G?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z_1 @ 0x1800819E0 (--_G-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAAPEAXI@Z_1.c)
 *     sub_1800C97F0 @ 0x1800C97F0 (sub_1800C97F0.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

__int64 __fastcall sub_180090EEC(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::DeviceConstantBuffer::`vftable';
  v2 = (volatile signed __int32 *)a1[14];
  if ( v2 )
    sub_180010644(v2);
  return sub_1800266BC((__int64)a1);
}
