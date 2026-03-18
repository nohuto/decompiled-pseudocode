/*
 * XREFs of ?ClearShape@CCursorState@@UEAAXXZ @ 0x1802BBD60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18010363C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802BD18C (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 */

void __fastcall CCursorState::ClearShape(CCursorState *this)
{
  std::_Ref_count_base *v2[2]; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&g_CursorManager);
  if ( *((_QWORD *)this + 22) )
  {
    *(_OWORD *)v2 = 0LL;
    std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)this + 5, (__int64 *)v2);
    if ( v2[1] )
      std::_Ref_count_base::_Decref(v2[1]);
    *((_BYTE *)this + 23) = 1;
    CCursorState::ScheduleCompositionPass(this);
  }
  LeaveCriticalSection(&g_CursorManager);
}
