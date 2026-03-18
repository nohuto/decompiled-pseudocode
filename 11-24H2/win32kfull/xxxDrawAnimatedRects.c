/*
 * XREFs of xxxDrawAnimatedRects @ 0x1402DE074
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x14026994C (xxxMinimizeHungWindow.c)
 *     NtUserDrawAnimatedRects @ 0x140293ED0 (NtUserDrawAnimatedRects.c)
 * Callees:
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     GetThreadDesktopWindow @ 0x140176140 (GetThreadDesktopWindow.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDrawAnimatedRects(struct tagWND *a1, int a2, struct tagRECT *a3, struct tagRECT *a4)
{
  struct tagRECT v5; // xmm1
  struct tagRECT v6; // xmm0
  __int64 v7; // rdi
  __int64 DesktopWindow; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  HDC DCEx; // r14
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // r10d
  __int64 ThreadDesktopWindow; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int128 v25; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v26; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v27; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a3;
  v25 = 0LL;
  v6 = *a4;
  v26 = v5;
  v27 = v6;
  if ( a2 != 3 )
    return 1LL;
  v7 = 0LL;
  if ( !a1 )
    return 0LL;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v9 == DesktopWindow )
    return 0LL;
  if ( (unsigned int)IsToplevelWindowDesktopComposed(v9) )
    return 1LL;
  v11 = *((_QWORD *)a1 + 13);
  if ( !v11 || v11 == GetDesktopWindow(*((_QWORD *)a1 + 13)) )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL, v10);
    v25 = *(_OWORD *)(*(_QWORD *)(ThreadDesktopWindow + 40) + 104LL);
    v23 = GreCreateRectRgnIndirect(&v25, v21, v22);
    if ( !v23 )
      v23 = 1LL;
    DCEx = (HDC)_GetDCEx(ThreadDesktopWindow, v23, 1155LL);
  }
  else
  {
    v13 = _GetDCEx(v12, 1LL, 65665LL);
    v14 = *(_DWORD **)(v11 + 40);
    DCEx = (HDC)v13;
    v16 = v14[22];
    v17 = v14[26];
    v18 = v14[23];
    v19 = v14[27];
    do
    {
      *(&v26.left + 2 * v7) += v17 - v16;
      *(&v26.top + 2 * v7++) += v19 - v18;
    }
    while ( v7 < 4 );
  }
  xxxAnimateCaption(a1, DCEx, &v26, &v27);
  _ReleaseDC(DCEx);
  return 1LL;
}
