/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x14022C590
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401AF538 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1, __int64 a2)
{
  char v2; // si
  struct tagTHREADINFO *v4; // rax
  struct tagTHREADINFO *v5; // rdi
  __int64 v7; // rdx
  unsigned __int8 v8; // si
  struct tagWND *v9; // rdx
  struct tagWND *v10; // rdx
  __int16 v11; // ax

  v2 = a2;
  v4 = PtiCurrent((__int64)a1, a2);
  v5 = v4;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    xxxSendMessage(a1, 0x22u);
    return 0LL;
  }
  if ( *(struct tagWND **)(*((_QWORD *)v4 + 59) + 128LL) == a1 )
    return 0LL;
  v7 = v2 & 2;
  v8 = v2 & 1;
  if ( v8 || (_DWORD)v7 )
  {
    v11 = (v8 << 8) | 2;
    if ( !(_DWORD)v7 )
      v11 = v8 << 8;
    return (unsigned __int8)xxxActivateWindowWithOptions((__int64)a1, 0LL, 0, 1, v11);
  }
  else
  {
    if ( !xxxActivateWindowWithOptions((__int64)a1, v7, 0, 1, 0) )
      return 0LL;
    v9 = *(struct tagWND **)(*((_QWORD *)v5 + 59) + 128LL);
    if ( v9 )
      SetOrClrWF(1, v9, 0x101u, 1);
    v10 = *(struct tagWND **)(*((_QWORD *)v5 + 59) + 136LL);
    if ( v10 )
      SetOrClrWF(1, v10, 0x101u, 1);
    return 1LL;
  }
}
