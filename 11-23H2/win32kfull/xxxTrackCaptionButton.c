/*
 * XREFs of xxxTrackCaptionButton @ 0x1C022BE68
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C01BA07C (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0222228 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0011678 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0011774 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C002B4E0 (xxxInternalGetMessage.c)
 *     BitBltSysBmp @ 0x1C0076710 (BitBltSysBmp.c)
 *     PtInRect @ 0x1C00AF258 (PtInRect.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C01185F4 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C0126570 (xxxSleepThread2.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     xxxCalcCaptionButton @ 0x1C022B520 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(__int64 *a1, int a2)
{
  unsigned __int16 v2; // di
  int v3; // ebx
  unsigned __int16 v5; // r14
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // esi
  int v10; // eax
  HDC DCEx; // rbx
  HDC v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  HDC v16; // rbx
  unsigned __int16 v18[2]; // [rsp+38h] [rbp-29h] BYREF
  int v19; // [rsp+3Ch] [rbp-25h]
  unsigned int v20; // [rsp+40h] [rbp-21h] BYREF
  int v21; // [rsp+44h] [rbp-1Dh]
  int v22; // [rsp+48h] [rbp-19h]
  unsigned int v23; // [rsp+4Ch] [rbp-15h]
  BOOL v24; // [rsp+50h] [rbp-11h]
  __int128 v25; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v26[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v27; // [rsp+88h] [rbp+27h]

  v2 = 0;
  v18[0] = 0;
  v20 = 0;
  v3 = 0;
  LOWORD(v19) = 0;
  v5 = 0;
  v21 = 0;
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  v25 = 0LL;
  v6 = a2 - 8;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 11;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = 4;
          v5 = 1408;
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v9 = 5;
        v5 = 1296;
      }
    }
    else
    {
      v9 = 3;
      v5 = 1312;
    }
  }
  else
  {
    v9 = 2;
    v5 = 1344;
  }
  v10 = xxxCalcCaptionButton((__int64)a1, v9, (__int16 *)v18, &v25, (int *)&v20, 0);
  v22 = SHIWORD(v10);
  v23 = (__int16)v10;
  if ( v18[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v23, v22, v20 + 1, 1);
    _ReleaseDC(DCEx);
    v19 = 1;
    SetOrClrWF(1, a1, v5, 1);
    xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, v9, 0);
    v3 = 0;
  }
  else
  {
    v9 = 0;
  }
  xxxSetCapture((__int64)a1);
  do
  {
    if ( (unsigned int)xxxInternalGetMessage(v26, 0LL, 512, 526, 1, 0) )
    {
      if ( DWORD2(v26[0]) == 514 )
      {
        xxxReleaseCapture();
        v3 = 1;
        v21 = 1;
      }
      else if ( DWORD2(v26[0]) == 512 )
      {
        if ( v18[0] )
        {
          v24 = PtInRect(&v25, *(unsigned __int64 *)((char *)&v27 + 4));
          if ( (_WORD)v19 != v24 )
          {
            LOWORD(v19) = v24;
            v12 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            BitBltSysBmp(v12, v23, v22, v20 + (unsigned __int16)v19, 1);
            _ReleaseDC(v12);
            SetOrClrWF(v24, a1, v5, 1);
            xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, v9, 0);
            v3 = v21;
          }
        }
      }
    }
    else if ( (unsigned int)xxxInternalGetMessage(v26, 0LL, 577, 599, 1, 0) )
    {
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
      xxxDispatchMessage((__int64 *)v26, v13, v14, v15);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
    }
    else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
    {
      break;
    }
  }
  while ( a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) && !v3 );
  if ( v18[0] )
  {
    if ( (_WORD)v19 && v18[0] != 0xF180 )
    {
      v16 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v16, v23, v22, v20, 1);
      _ReleaseDC(v16);
      SetOrClrWF(0, a1, v5, 1);
      xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, v9, 0);
    }
    if ( v21 && PtInRect(&v25, *(unsigned __int64 *)((char *)&v27 + 4)) )
      return v18[0];
  }
  return v2;
}
