/*
 * XREFs of ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x14002538C
 * Callers:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x140023218 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140320C58 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpDwmUpdateSpriteVisibility(struct DWMSPRITE *a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v3; // rsi
  void *v4; // rbx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  __int64 v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+54h] [rbp-14h]

  if ( a2 != (*((_BYTE *)a1 + 140) & 1) )
  {
    v2 = a2;
    *((_DWORD *)a1 + 35) = a2 | *((_DWORD *)a1 + 35) & 0xFFFFFFFE;
    v3 = *(_QWORD *)a1;
    v4 = (void *)UserReferenceDwmApiPort();
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState() + 96) + 4648LL));
    if ( v4 )
    {
      memset(v5, 0, sizeof(v5));
      v6 = 0LL;
      WORD2(v5[0]) = 0x8000;
      LODWORD(v5[0]) = 3670032;
      v7 = 1073741831;
      v8 = v3;
      v9 = v2;
      EtwUpdateEvent(v3);
      LpcRequestPort(v4, v5);
      ObfDereferenceObject(v4);
    }
  }
}
