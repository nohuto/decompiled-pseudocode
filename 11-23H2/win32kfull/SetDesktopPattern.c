/*
 * XREFs of SetDesktopPattern @ 0x1C00D6380
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     RecolorDeskPattern @ 0x1C009FC30 (RecolorDeskPattern.c)
 *     GreMarkDeletableBrush @ 0x1C00D5A10 (GreMarkDeletableBrush.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z @ 0x1C0200778 (-SetGlobalDesktopPattern@@YAHPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall SetDesktopPattern(__int64 a1, const wchar_t *a2)
{
  unsigned int v4; // ebx
  __int64 SolidBrush; // rdi
  HBRUSH v6; // rcx
  wchar_t v8; // ax
  __int128 *v9; // r8
  __int64 v10; // r9
  __int16 v11; // cx
  unsigned __int16 v12; // dx
  HBITMAP Bitmap; // rax
  __int128 v14; // [rsp+40h] [rbp-268h] BYREF
  wchar_t Str2[24]; // [rsp+50h] [rbp-258h] BYREF
  _WORD v16[264]; // [rsp+80h] [rbp-228h] BYREF

  v4 = 0;
  memset_0(v16, 0, 0x208uLL);
  if ( !a2 )
  {
    if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 2LL, &word_1C03123AC, v16, 260, 0) )
      return v4;
    a2 = v16;
  }
  RtlLoadStringOrError(82LL, Str2, 20LL);
  if ( v16[0] && _wcsicmp(a2, Str2) )
  {
    v8 = *a2;
    v9 = &v14;
    v14 = 0LL;
    v10 = 8LL;
    do
    {
      v11 = 0;
      if ( v8 )
      {
        v12 = v8;
        while ( v12 < 0x30u || v12 > 0x39u )
        {
          v8 = *++a2;
          v12 = *a2;
          if ( !*a2 )
            goto LABEL_20;
        }
        do
        {
          ++a2;
          v11 = v12 + 2 * (5 * v11 - 24);
          v8 = *a2;
          v12 = *a2;
        }
        while ( *a2 >= 0x30u && v12 <= 0x39u );
      }
LABEL_20:
      *(_WORD *)v9 = v11;
      v9 = (__int128 *)((char *)v9 + 2);
      --v10;
    }
    while ( v10 );
    Bitmap = (HBITMAP)GreCreateBitmap(8LL, 8LL, 1LL);
    if ( Bitmap )
    {
      SetGlobalDesktopPattern(Bitmap);
      return (unsigned int)RecolorDeskPattern();
    }
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(*(unsigned int *)(gpsi + 4572LL));
    if ( SolidBrush )
    {
      v6 = *(HBRUSH *)(gpsi + 4704LL);
      if ( v6 )
      {
        GreMarkDeletableBrush(v6);
        GreDeleteObject(*(_QWORD *)(gpsi + 4704LL));
      }
      GreMarkUndeletableBrush(SolidBrush);
      GreSetBrushOwner(SolidBrush, 0LL);
      *(_QWORD *)(gpsi + 4704LL) = SolidBrush;
    }
  }
  return v4;
}
