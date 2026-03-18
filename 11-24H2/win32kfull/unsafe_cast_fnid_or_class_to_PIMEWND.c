/*
 * XREFs of unsafe_cast_fnid_or_class_to_PIMEWND @ 0x140282FC8
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x140170BB0 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1401BF794 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1402804A4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PIMEWND(_QWORD *a1)
{
  __int64 v2; // rax
  __int16 v3; // cx
  __int16 *v5; // rcx
  __int16 v6; // bx

  if ( !a1 )
    return 0LL;
  if ( _bittest16((const signed __int16 *)(a1[5] + 42LL), 0xCu) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 913);
  v2 = a1[5];
  v3 = *(_WORD *)(v2 + 42);
  if ( (v3 & 0x1000) != 0 )
    return 0LL;
  if ( (v3 & 0x2FFF) == 0x2A9 )
    goto LABEL_6;
  v5 = *(__int16 **)(a1[17] + 8LL);
  v6 = *v5;
  if ( v6 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v5, 681LL) + 19928) + 898LL) )
    return 0LL;
  v2 = a1[5];
LABEL_6:
  if ( *(_DWORD *)(v2 + 248) )
    return a1[35];
  else
    return *(_QWORD *)(v2 + 296);
}
