/*
 * XREFs of _Mtx_destroy_in_situ @ 0x18001C40C
 * Callers:
 *     sub_1800D6789 @ 0x1800D6789 (sub_1800D6789.c)
 *     sub_1800D6E19 @ 0x1800D6E19 (sub_1800D6E19.c)
 *     sub_1800D711C @ 0x1800D711C (sub_1800D711C.c)
 *     sub_1800D8FA5 @ 0x1800D8FA5 (sub_1800D8FA5.c)
 *     sub_1800D9061 @ 0x1800D9061 (sub_1800D9061.c)
 *     sub_1800D9E68 @ 0x1800D9E68 (sub_1800D9E68.c)
 *     sub_1800D9E90 @ 0x1800D9E90 (sub_1800D9E90.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_1 @ 0x1800D9EA6 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_1.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_3 @ 0x1800DB362 (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_3.c)
 *     sub_1800E1D78 @ 0x1800E1D78 (sub_1800E1D78.c)
 *     sub_1800E256B @ 0x1800E256B (sub_1800E256B.c)
 *     sub_1800E2597 @ 0x1800E2597 (sub_1800E2597.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_4 @ 0x1800E27A4 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_4.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_9 @ 0x1800E285F (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl Mtx_destroy_in_situ(_Mtx_t a1)
{
  _Mtx_destroy_in_situ(a1);
}
