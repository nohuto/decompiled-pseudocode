/*
 * XREFs of DwmAsyncChildStyleChange @ 0x140032044
 * Callers:
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     ?DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z @ 0x140031868 (-DecomposeWindowIfNeeded@@YAJPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1400318F0 (xxxSetWindowStyle.c)
 *     xxxDoPaint @ 0x140033DBC (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140034CB0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140035878 (xxxEndPaint.c)
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxCalcClientRect @ 0x1400712A8 (xxxCalcClientRect.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x140074820 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x140090DC8 (xxxSetLayeredWindow.c)
 *     ?OnDwmWindowNotificationClientRegistered@@YAJH@Z @ 0x1402B3290 (-OnDwmWindowNotificationClientRegistered@@YAJH@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+4Ch] [rbp-14h]
  int v14; // [rsp+54h] [rbp-Ch]
  int v15; // [rsp+58h] [rbp-8h]

  v8 = -1073741823;
  IncrementDWMWindowUniqueness();
  if ( Object )
  {
    v15 = a4;
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 3932180;
    v11 = 0LL;
    WORD2(v10[0]) = 0x8000;
    v12 = 1073741846;
    v13 = a2;
    v14 = a3;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
