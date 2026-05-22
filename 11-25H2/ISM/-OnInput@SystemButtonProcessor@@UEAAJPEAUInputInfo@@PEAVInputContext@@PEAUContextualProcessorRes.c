/*
 * XREFs of ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AB6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180075B14 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x18015B970 (-OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z.c)
 *     ?ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801AB680 (-ButtonEvent@SystemButtonProcessor@InputETW@@SAXK_N@Z.c)
 */

__int64 __fastcall SystemButtonProcessor::OnInput(
        SystemButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int v7; // esi
  SystemButtonEventController **SystemButtonEventControllerManager; // rax

  *((_DWORD *)a4 + 2) = 0;
  if ( *(char *)a2 < 0 )
  {
    v7 = *((_DWORD *)a2 + 16);
    if ( (unsigned int)(v7 - 301) <= 3 )
    {
      SystemButtonEventControllerManager = (SystemButtonEventController **)ISMStatics::GetSystemButtonEventControllerManager();
      if ( *SystemButtonEventControllerManager )
      {
        SystemButtonEventControllerManager::OnInput(SystemButtonEventControllerManager, a2);
LABEL_6:
        *((_DWORD *)a4 + 2) = 3;
        goto LABEL_7;
      }
      if ( *((_DWORD *)a3 + 26) == 3 )
        goto LABEL_6;
    }
LABEL_7:
    InputETW::SystemButtonProcessor::ButtonEvent(v7, *((_BYTE *)a2 + 68));
  }
  return 0LL;
}
