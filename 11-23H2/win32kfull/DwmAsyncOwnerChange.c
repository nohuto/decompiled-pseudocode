/*
 * XREFs of DwmAsyncOwnerChange @ 0x1C00AA8FC
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000B40C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0020E44 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x1C00A6958 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00A6F64 (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x1C00E352C (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 *     xxxDW_DestroyOwnedWindows @ 0x1C00EF7F4 (xxxDW_DestroyOwnedWindows.c)
 *     xxxFreeWindow @ 0x1C00F2D20 (xxxFreeWindow.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C00AA9BC (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncOwnerChange(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _OWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  _QWORD v11[2]; // [rsp+4Ch] [rbp-14h]

  v6 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    WORD2(v8[0]) = 0x8000;
    LODWORD(v8[0]) = 3932180;
    v10 = 1073741878;
    v11[0] = a2;
    v11[1] = a3;
    EtwUpdateEvent(a2, 1073741878LL);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
