/*
 * XREFs of SetDesktopPattern @ 0x1401FC718
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     GreMarkDeletableBrush @ 0x1401FC9A4 (GreMarkDeletableBrush.c)
 *     RecolorDeskPattern @ 0x1402055C0 (RecolorDeskPattern.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1402B5E1C (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 SolidBrush; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  wchar_t v20; // ax
  __int128 *v21; // r8
  __int64 v22; // r9
  __int16 v23; // cx
  unsigned __int16 v24; // dx
  HBITMAP Bitmap; // rax
  __int64 v26; // rcx
  __int128 v27; // [rsp+40h] [rbp-268h] BYREF
  wchar_t Str2[24]; // [rsp+50h] [rbp-258h] BYREF
  _WORD v29[264]; // [rsp+80h] [rbp-228h] BYREF

  v4 = 0;
  memset_0(v29, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &pszFormat, v29, 260, 0) )
      return v4;
    a2 = v29;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v29[0] && _wcsicmp(a2, Str2) )
  {
    v20 = *a2;
    v21 = &v27;
    v27 = 0LL;
    v22 = 8LL;
    do
    {
      v23 = 0;
      if ( v20 )
      {
        v24 = v20;
        while ( v24 < 0x30u || v24 > 0x39u )
        {
          v20 = *++a2;
          v24 = *a2;
          if ( !*a2 )
            goto LABEL_20;
        }
        do
        {
          ++a2;
          v23 = v24 + 2 * (5 * v23 - 24);
          v20 = *a2;
          v24 = *a2;
        }
        while ( *a2 >= 0x30u && v24 <= 0x39u );
      }
LABEL_20:
      *(_WORD *)v21 = v23;
      v21 = (__int128 *)((char *)v21 + 2);
      --v22;
    }
    while ( v22 );
    Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL);
    if ( Bitmap )
    {
      SetGlobalDesktopPattern(Bitmap);
      return (unsigned int)RecolorDeskPattern(v26);
    }
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(*(_QWORD *)(UserSessionState + 19928) + 4572LL));
    if ( SolidBrush )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19928);
      if ( *(_QWORD *)(v12 + 4704) )
      {
        v16 = W32GetUserSessionState(v12, v11);
        GreMarkDeletableBrush(*(HBRUSH *)(*(_QWORD *)(v16 + 19928) + 4704LL));
        v19 = W32GetUserSessionState(v18, v17);
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(v19 + 19928) + 4704LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928) + 4704LL) = SolidBrush;
    }
  }
  return v4;
}
