/*
 * XREFs of ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1400D2904
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400D1188 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400D136C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1400D1CEC (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x14005ABD0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 */

void __fastcall ndisNsiScheduleCompartmentBlockChangeNotification(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rcx
  bool v3; // zf

  v1 = (_QWORD *)(a1 + 1744);
  if ( (_QWORD *)*v1 == v1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    v2 = (_QWORD *)qword_140126AE8;
    if ( *(__int64 **)qword_140126AE8 != &qword_140126AE0 )
      __fastfail(3u);
    v3 = byte_140126994 == 0;
    *v1 = &qword_140126AE0;
    v1[1] = v2;
    *v2 = v1;
    qword_140126AE8 = (__int64)v1;
    if ( v3 )
    {
      ndisScheduleWorkItemInternal(&stru_140126B00);
      byte_140126994 = 1;
    }
  }
}
