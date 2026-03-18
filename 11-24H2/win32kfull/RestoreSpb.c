/*
 * XREFs of RestoreSpb @ 0x1402AF460
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     IsVisible @ 0x140036A48 (IsVisible.c)
 *     FreeSpb @ 0x1400979B0 (FreeSpb.c)
 *     FindSpb @ 0x1402AF418 (FindSpb.c)
 *     GreSaveScreenBits @ 0x1403308B4 (GreSaveScreenBits.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall RestoreSpb(__int64 *a1, __int64 a2, HDC *a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 **Spb; // rdi
  __int64 v10; // r12
  int v11; // eax
  __int64 *v12; // rbx
  __int64 UserSessionState; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  HDC v19; // rsi
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r13
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx

  v6 = 0;
  Spb = FindSpb(a1, a2);
  v10 = a2;
  if ( Spb[5] )
  {
    v6 = 1;
    v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 43128);
    if ( (unsigned int)GreCombineRgn(v10, a2, Spb[5], 1LL) < 2 )
      goto LABEL_10;
  }
  v11 = *((_DWORD *)Spb + 12);
  if ( (v11 & 1) != 0 )
  {
    v12 = Spb[7];
    *((_DWORD *)Spb + 12) = v11 & 0xFFFFFFFE;
    UserSessionState = W32GetUserSessionState(v8, v7);
    if ( GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL), 1LL, v12) )
    {
      v15 = W32GetUserSessionState(v14, v7);
      SetRectRgnIndirect(*(_QWORD *)(v15 + 43136), Spb + 3);
      v18 = W32GetUserSessionState(v17, v16);
      if ( (unsigned int)GreCombineRgn(a2, *(_QWORD *)(v18 + 43136), v10, 4LL) != 1 )
        v6 = 2;
      goto LABEL_12;
    }
LABEL_10:
    FreeSpb((char *)Spb, v7);
    return 1LL;
  }
  v19 = *a3;
  if ( !*a3 )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 57008);
    v19 = *(HDC *)(v8 + 64);
    *a3 = v19;
  }
  v20 = Spb[2];
  v21 = W32GetUserSessionState(v8, v7);
  v22 = GreSelectBitmap(*(_QWORD *)(v21 + 43288), v20);
  if ( !v22 )
    goto LABEL_10;
  GreSelectVisRgn(v19, v10, 2LL);
  v24 = (_DWORD)Spb[3] & 7;
  v27 = W32GetUserSessionState(v26, v25);
  GreBitBltInternal(
    v19,
    *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 7),
    *((_DWORD *)Spb + 8) - *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 9) - *((_DWORD *)Spb + 7),
    *(HDC *)(v27 + 43288),
    v24,
    0,
    0xCC0020u,
    0,
    0);
  v30 = W32GetUserSessionState(v29, v28);
  GreSelectBitmap(*(_QWORD *)(v30 + 43288), v22);
  GreCombineRgn(a2, a2, v10, 4LL);
LABEL_12:
  v31 = a1[5];
  if ( !*(_QWORD *)(v31 + 168) || !(unsigned int)IsVisible((__int64)a1) )
    FreeSpb((char *)Spb, v31);
  return v6;
}
