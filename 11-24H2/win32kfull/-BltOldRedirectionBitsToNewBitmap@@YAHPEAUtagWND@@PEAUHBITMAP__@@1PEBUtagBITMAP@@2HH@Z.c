/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140039ADC
 * Callers:
 *     RecreateRedirectionBitmap @ 0x140039394 (RecreateRedirectionBitmap.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GreExtSelectClipRgn @ 0x140038DAC (GreExtSelectClipRgn.c)
 *     ?GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z @ 0x140039E2C (-GetSpriteFillBrush@@YAPEAUHBRUSH__@@PEAUtagWND@@_NPEA_N@Z.c)
 *     GreConvertMemToRedirectionDC @ 0x140039EF4 (GreConvertMemToRedirectionDC.c)
 *     GreExcludeClipRect @ 0x140039FD0 (GreExcludeClipRect.c)
 *     GreConvertRedirectionToMemDC @ 0x140330F48 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall BltOldRedirectionBitsToNewBitmap(
        struct tagWND *a1,
        HBITMAP a2,
        HBITMAP a3,
        const struct tagBITMAP *a4,
        const struct tagBITMAP *a5,
        int a6,
        int a7)
{
  BOOL v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  LONG bmHeight; // edi
  LONG bmWidth; // esi
  HDC v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // ebx
  HBRUSH SpriteFillBrush; // rsi
  int v36; // edi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v48; // rax
  int v49; // [rsp+70h] [rbp-58h]
  int v50; // [rsp+74h] [rbp-54h]
  unsigned int v51; // [rsp+7Ch] [rbp-4Ch]
  __int64 v52; // [rsp+80h] [rbp-48h]
  RECT v53; // [rsp+88h] [rbp-40h] BYREF
  bool v54; // [rsp+E8h] [rbp+20h] BYREF

  v11 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v11 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0;
  UserSessionState = W32GetUserSessionState(v13, v12);
  v15 = GreSelectBitmap(*(_QWORD *)(UserSessionState + 43288), a2);
  v18 = W32GetUserSessionState(v17, v16);
  v52 = GreSelectBitmap(*(_QWORD *)(v18 + 43296), a3);
  v21 = W32GetUserSessionState(v20, v19);
  v22 = GreConvertMemToRedirectionDC(*(HDC *)(v21 + 43296));
  v49 = -a7;
  v50 = -a6;
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a2,
    (unsigned int)-a6,
    -a7,
    a4->bmWidth - a6,
    a4->bmHeight - a7,
    *(_QWORD *)a1,
    *(_QWORD *)a1,
    a3,
    0,
    0,
    a4->bmWidth + a6,
    a4->bmHeight);
  v25 = W32GetUserSessionState(v24, v23);
  bmHeight = a4->bmHeight;
  bmWidth = a4->bmWidth;
  v28 = *(HDC *)(v25 + 43288);
  v31 = W32GetUserSessionState(v30, v29);
  v51 = GreBitBltInternal(*(HDC *)(v31 + 43296), v50, v49, bmWidth, bmHeight, v28, 0, 0, 0x80CC0020, 0, 2u);
  v34 = v51;
  if ( v11 )
  {
    v54 = 0;
    SpriteFillBrush = GetSpriteFillBrush(a1, 0, &v54);
    if ( SpriteFillBrush )
    {
      v36 = a4->bmHeight - a7;
      v37 = W32GetUserSessionState(v33, v32);
      GreExcludeClipRect(*(HDC *)(v37 + 43296), v36);
      v53.left = 0;
      v53.top = 0;
      v53.right = a5->bmWidth;
      v53.bottom = a5->bmHeight;
      v39 = W32GetUserSessionState(a5, v38);
      FillRect(*(HDC *)(v39 + 43296), &v53, SpriteFillBrush);
      v42 = W32GetUserSessionState(v41, v40);
      GreExtSelectClipRgn(*(HDC *)(v42 + 43296), 0LL);
      v34 = v51;
    }
    if ( v54 )
      GreDeleteObject(SpriteFillBrush);
  }
  if ( v22 )
  {
    v48 = W32GetUserSessionState(v33, v32);
    GreConvertRedirectionToMemDC(*(HDC *)(v48 + 43296));
  }
  v43 = W32GetUserSessionState(v33, v32);
  GreSelectBitmap(*(_QWORD *)(v43 + 43288), v15);
  v46 = W32GetUserSessionState(v45, v44);
  GreSelectBitmap(*(_QWORD *)(v46 + 43296), v52);
  return v34;
}
