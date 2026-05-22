/*
 * XREFs of ?SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z @ 0x180080FE0
 * Callers:
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015C258 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x18015C7A0 (-OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@AEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x18015C834 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 */

void __fastcall SystemButtonEventController::SendSystemButtonEvent(
        SystemButtonEventController *this,
        const struct SystemButtonEventInfo *a2)
{
  char *v4; // rcx
  _OWORD *v5; // rdx

  v4 = (char *)this + 64;
  v5 = (_OWORD *)*((_QWORD *)this + 9);
  if ( v5 == *((_OWORD **)this + 10) )
  {
    std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(v4, v5, a2);
  }
  else
  {
    *v5 = *(_OWORD *)a2;
    *((_QWORD *)this + 9) += 16LL;
  }
  (*(void (__fastcall **)(char *, const struct SystemButtonEventInfo *))(*((_QWORD *)this + 1) + 24LL))(
    (char *)this + 8,
    a2);
}
