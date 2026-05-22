/*
 * XREFs of ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x18015B970
 * Callers:
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AB6F0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     ?SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z @ 0x180080ED0 (-SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall SystemButtonEventControllerManager::OnInput(
        SystemButtonEventController **this,
        const struct LegacyInputInfo *a2)
{
  int v2; // r8d
  SystemButtonEventController *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 0x12D:
      v2 = 1;
      break;
    case 0x12E:
      v2 = 2;
      break;
    case 0x12F:
      v2 = 3;
      break;
    case 0x130:
      v2 = 4;
      break;
  }
  v3 = *this;
  v4 = *((unsigned __int64 *)a2 + 2);
  BYTE12(v4) = *((_BYTE *)a2 + 68);
  DWORD2(v4) = v2;
  SystemButtonEventController::SendSystemButtonEvent(v3, (const struct SystemButtonEventInfo *)&v4);
}
