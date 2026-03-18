/*
 * XREFs of xxxTooltipWndProc @ 0x1C00D7ED0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C00606C0 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x1C0061760 (xxxEndPaint.c)
 *     ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C009F0E8 (-DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     InitTooltipDelay @ 0x1C00D8178 (InitTooltipDelay.c)
 *     ?InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00D841C (-InitTooltipAnimation@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxValidateClassAndSize @ 0x1C00DF5B4 (xxxValidateClassAndSize.c)
 *     xxxDefWindowProc @ 0x1C00DF700 (xxxDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01BB7B0 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     StopFade @ 0x1C01BC550 (StopFade.c)
 *     zzzStartFade @ 0x1C01BCD20 (zzzStartFade.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0224ACC (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0224D38 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C02254FC (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C02255B0 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxTooltipWndProc(struct tagWND *a1, int a2, HDC a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v10; // rcx
  int v11; // eax
  HDC FadeInternal; // rax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  ULONG_PTR v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-98h] BYREF
  HDC v17[10]; // [rsp+60h] [rbp-88h] BYREF

  memset_0(v17, 0, 0x48uLL);
  v16 = 0LL;
  if ( (unsigned int)xxxValidateClassAndSize((_DWORD)a1, a2, (_DWORD)a3, a4, 694, 129, (__int64)&v16) )
  {
    v8 = *((_QWORD *)a1 + 35);
    *(_QWORD *)v8 = a1;
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 && a2 != 130 )
      return xxxDefWindowProc(a1);
    switch ( a2 )
    {
      case 15:
        xxxBeginPaint(a1, (__int64 *)v17);
        xxxTooltipRender((struct tagTOOLTIPWND *)v8, v17[0]);
        xxxEndPaint((__int64 *)a1, v17);
        break;
      case 20:
        break;
      case 71:
        v11 = *(_DWORD *)(a4 + 32);
        if ( (v11 & 0x40) == 0 )
        {
          if ( (v11 & 0x80u) != 0 )
          {
            if ( (gfade[12] & 0x20) != 0 )
              StopFade();
            else
              DestroyTooltipBitmap((struct tagTOOLTIPWND *)v8);
          }
          return xxxDefWindowProc(a1);
        }
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
        {
LABEL_26:
          v13 = *(_DWORD *)(v8 + 12);
LABEL_28:
          v14 = 2;
LABEL_30:
          SetTooltipTimer((struct tagTOOLTIPWND *)v8, v14, v13);
          return xxxDefWindowProc(a1);
        }
        if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80001000) != 0x80001000 )
        {
          if ( !(unsigned int)CreateTooltipBitmap(
                                (struct tagTOOLTIPWND *)v8,
                                *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL),
                                *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL)) )
            goto LABEL_27;
          FadeInternal = *(HDC *)(v8 + 16);
        }
        else
        {
          FadeInternal = CreateFadeInternal(a1, 0LL, 0x87u, 0x21u, 0);
        }
        if ( FadeInternal )
        {
          v15 = *(_QWORD *)v8;
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v15, 0, 0, 0LL, 1, 1);
          if ( (gfade[12] & 0x20) == 0 )
          {
            v14 = 3;
            v13 = 20;
            *(_DWORD *)(v8 + 40) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            goto LABEL_30;
          }
          zzzStartFade();
          goto LABEL_26;
        }
LABEL_27:
        v13 = 0;
        goto LABEL_28;
      default:
        switch ( a2 )
        {
          case 129:
            InitTooltipDelay(v8);
            InitTooltipAnimation((struct tagTOOLTIPWND *)v8);
            return xxxDefWindowProc(a1);
          case 130:
            DestroyTooltipBitmap((struct tagTOOLTIPWND *)v8);
            v10 = *(_QWORD *)(v8 + 16);
            if ( v10 )
              GreDeleteDC(v10);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 24LL) + 48LL) &= 0xFFFFFCFF;
            return xxxDefWindowProc(a1);
          case 280:
            xxxTooltipHandleTimer((struct tagTOOLTIPWND *)v8, (unsigned int)a3);
            break;
          case 792:
            xxxTooltipRender((struct tagTOOLTIPWND *)v8, a3);
            break;
          default:
            return xxxDefWindowProc(a1);
        }
        return 0LL;
    }
    return 0LL;
  }
  return v16;
}
