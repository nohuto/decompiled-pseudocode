/*
 * XREFs of ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1402EEA4C
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402EE738 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 * Callees:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1402EEB24 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::SendZoomHotkey(
        InteractiveControlDefaultScroller *this,
        __int16 a2)
{
  unsigned int v4; // edi
  unsigned __int16 v5; // si
  __int64 CurrentKbdTables; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int128 v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+58h] [rbp-18h]
  __int64 v12; // [rsp+68h] [rbp-8h]

  v4 = 1;
  InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 1);
  if ( *((_BYTE *)this + 52) != 2 )
  {
    memset_0(v8, 0, 0x50uLL);
    LODWORD(v8[0]) = 1;
    v5 = ((a2 >> 15) & 2) + 187;
    WORD4(v8[0]) = v5;
    CurrentKbdTables = GetCurrentKbdTables();
    WORD5(v8[0]) = InternalMapVirtualKeyEx(v5, 0LL, CurrentKbdTables);
    v10 = v8[0];
    HIDWORD(v10) = 2;
    v12 = v9;
    v11 = v8[1];
    xxxSendInput(2u, (struct tagINPUT *)v8);
    return 0;
  }
  return v4;
}
