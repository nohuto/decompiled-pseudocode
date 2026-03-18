/*
 * XREFs of PostMousePointerLeaveAndCleanup @ 0x14009B200
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x14003140C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostTransformableMessage @ 0x1400664C4 (_PostTransformableMessage.c)
 *     ?StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x14009B33C (-StopMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x14009B380 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     IsMiPEnabledForWindow @ 0x14009B490 (IsMiPEnabledForWindow.c)
 */

__int64 __fastcall PostMousePointerLeaveAndCleanup(__int64 a1, struct tagWND *a2)
{
  struct tagTHREADINFO *v4; // rdi
  unsigned __int64 MiPWindowFlags; // rax
  struct tagWND *v7; // rcx
  __int64 v8; // r9

  if ( a2 )
    v4 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
  else
    v4 = PtiCurrent(a1, 0LL);
  if ( !*((_QWORD *)v4 + 189) || (GetMiPWindowFlags(a2) & 1) != 0 )
    return 1LL;
  MiPWindowFlags = GetMiPWindowFlags(a2);
  SetMiPWindowFlags(a2, MiPWindowFlags | 1);
  if ( !a1 || v4 != *(struct tagTHREADINFO **)(a1 + 16) )
  {
    **((_DWORD **)v4 + 189) &= ~4u;
    **((_DWORD **)v4 + 189) &= ~0x10u;
    **((_DWORD **)v4 + 189) &= ~2u;
    **((_DWORD **)v4 + 189) &= ~8u;
  }
  if ( (**((_DWORD **)v4 + 189) & 1) != 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)IsMiPEnabledForWindow(a2) )
        PostTransformableMessage(v7, 0x24Au, ((unsigned __int64)(*(_WORD *)(v8 + 36) & 0xE1F7) << 16) | 1, 0LL, 0);
LABEL_9:
      if ( *(_QWORD *)a2 != *(_QWORD *)(*((_QWORD *)v4 + 59) + 488LL) )
      {
LABEL_11:
        StopMiPIdleNotificationTimer(a2);
        return 1LL;
      }
    }
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  *(_QWORD *)(*((_QWORD *)v4 + 59) + 488LL) = 0LL;
  if ( a2 )
    goto LABEL_11;
  return 1LL;
}
