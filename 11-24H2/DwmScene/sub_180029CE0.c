/*
 * XREFs of sub_180029CE0 @ 0x180029CE0
 * Callers:
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 *     sub_180033660 @ 0x180033660 (sub_180033660.c)
 *     sub_180034CF0 @ 0x180034CF0 (sub_180034CF0.c)
 *     sub_1800361CC @ 0x1800361CC (sub_1800361CC.c)
 *     sub_180052F4C @ 0x180052F4C (sub_180052F4C.c)
 *     sub_180053C10 @ 0x180053C10 (sub_180053C10.c)
 *     sub_180053D64 @ 0x180053D64 (sub_180053D64.c)
 *     sub_1800B90C0 @ 0x1800B90C0 (sub_1800B90C0.c)
 *     sub_1800B9420 @ 0x1800B9420 (sub_1800B9420.c)
 *     sub_1800BDC90 @ 0x1800BDC90 (sub_1800BDC90.c)
 *     sub_1800BE920 @ 0x1800BE920 (sub_1800BE920.c)
 *     sub_1800D2798 @ 0x1800D2798 (sub_1800D2798.c)
 *     sub_1800D2818 @ 0x1800D2818 (sub_1800D2818.c)
 *     sub_1800D7263 @ 0x1800D7263 (sub_1800D7263.c)
 *     sub_1800D766F @ 0x1800D766F (sub_1800D766F.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_25 @ 0x1800D9181 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800D9181.c)
 *     sub_1800E1E4B @ 0x1800E1E4B (sub_1800E1E4B.c)
 *     sub_1800E1E81 @ 0x1800E1E81 (sub_1800E1E81.c)
 *     sub_1800E202B @ 0x1800E202B (sub_1800E202B.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180029CE0(__int64 a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 8) )
    return Mtx_unlock(*(_Mtx_t *)a1);
  return result;
}
