/*
 * XREFs of ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1402EEB24
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1402EE738 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1402EEA4C (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 * Callees:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall InteractiveControlDefaultScroller::SendZoomModifiers(char a1, int a2)
{
  unsigned __int8 v4; // al
  __int64 v5; // rdi
  __int64 v6; // rbp
  int v7; // esi
  __int64 v8; // rbx
  __int64 CurrentKbdTables; // rax
  __int16 v10; // ax
  int v11; // [rsp+20h] [rbp-98h] BYREF
  _WORD v12[60]; // [rsp+28h] [rbp-90h]

  memset_0(&v11, 0, 0x78uLL);
  if ( (a1 & 1) != 0 )
    v12[0] = 17;
  v4 = a1 & 1;
  v5 = a1 & 1;
  if ( (a1 & 2) != 0 )
  {
    v12[20 * v4] = 18;
    v5 = (unsigned int)v4 + 1;
  }
  if ( (a1 & 4) != 0 )
  {
    v12[20 * v5] = 16;
    LODWORD(v5) = v5 + 1;
  }
  v6 = 0LL;
  if ( (_DWORD)v5 )
  {
    v7 = a2 == 0 ? 2 : 0;
    do
    {
      v8 = 5 * v6;
      *(_DWORD *)&v12[20 * v6] = 1;
      CurrentKbdTables = GetCurrentKbdTables();
      v10 = InternalMapVirtualKeyEx((unsigned __int16)v12[20 * v6], 0LL, CurrentKbdTables);
      v6 = (unsigned int)(v6 + 1);
      *(_DWORD *)&v12[4 * v8 + 2] = v7;
      v12[4 * v8 + 1] = v10;
    }
    while ( (_DWORD)v6 != (_DWORD)v5 );
    xxxSendInput(v5, (struct tagINPUT *)&v11);
  }
}
