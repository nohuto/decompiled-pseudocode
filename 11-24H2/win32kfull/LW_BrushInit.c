/*
 * XREFs of LW_BrushInit @ 0x140202330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall LW_BrushInit(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 Bitmap; // rax
  __int64 v4; // rsi
  __int64 PatternBrush; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 SolidBrush; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  Bitmap = GreCreateBitmap(8LL, 8LL, 1LL);
  v4 = Bitmap;
  if ( !Bitmap )
    return 0LL;
  PatternBrush = GreCreatePatternBrush(Bitmap);
  *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928) + 4944LL) = PatternBrush;
  UserSessionState[5386] = GreGetStockObject(0LL);
  UserSessionState[5387] = GreGetStockObject(4LL);
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19928) + 4944LL) )
    return 0LL;
  GreDeleteObject(v4);
  v12 = W32GetUserSessionState(v11, v10);
  GreSetBrushOwner(*(_QWORD *)(*(_QWORD *)(v12 + 19928) + 4944LL), 0LL);
  SolidBrush = GreCreateSolidBrush(0LL);
  UserSessionState[5385] = SolidBrush;
  if ( !SolidBrush )
    return 0LL;
  GreSetBrushOwner(SolidBrush, 0LL);
  return 1LL;
}
