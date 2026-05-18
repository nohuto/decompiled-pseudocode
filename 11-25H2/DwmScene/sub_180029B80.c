/*
 * XREFs of sub_180029B80 @ 0x180029B80
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180033500 @ 0x180033500 (sub_180033500.c)
 *     sub_180034B90 @ 0x180034B90 (sub_180034B90.c)
 *     sub_18003606C @ 0x18003606C (sub_18003606C.c)
 *     sub_180052DEC @ 0x180052DEC (sub_180052DEC.c)
 *     sub_180053AB0 @ 0x180053AB0 (sub_180053AB0.c)
 *     sub_180053C04 @ 0x180053C04 (sub_180053C04.c)
 *     sub_1800B8F60 @ 0x1800B8F60 (sub_1800B8F60.c)
 *     sub_1800B92C0 @ 0x1800B92C0 (sub_1800B92C0.c)
 *     sub_1800BDB30 @ 0x1800BDB30 (sub_1800BDB30.c)
 *     sub_1800BE7C0 @ 0x1800BE7C0 (sub_1800BE7C0.c)
 *     sub_1800D2638 @ 0x1800D2638 (sub_1800D2638.c)
 *     sub_1800D26B8 @ 0x1800D26B8 (sub_1800D26B8.c)
 *     sub_1800D7103 @ 0x1800D7103 (sub_1800D7103.c)
 *     sub_1800D750F @ 0x1800D750F (sub_1800D750F.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_25 @ 0x1800D9021 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D9021.c)
 *     sub_1800E1CEB @ 0x1800E1CEB (sub_1800E1CEB.c)
 *     sub_1800E1D21 @ 0x1800E1D21 (sub_1800E1D21.c)
 *     sub_1800E1ECB @ 0x1800E1ECB (sub_1800E1ECB.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180029B80(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
