/*
 * XREFs of MNAnimate @ 0x14006F328
 * Callers:
 *     MNGetPopupFromMenu @ 0x14006F050 (MNGetPopupFromMenu.c)
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1402B403C (MNDestroyAnimationBitmap.c)
 *     ?IS_USERCRIT_CONTENDED@@YA_NXZ @ 0x1402E8D70 (-IS_USERCRIT_CONTENDED@@YA_NXZ.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 */

char __fastcall MNAnimate(__int64 *a1, __int64 a2)
{
  int v2; // edi
  _DWORD *UserSessionState; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // edi
  unsigned int v10; // edx
  __int64 v11; // rt2
  int v12; // ecx
  int v13; // r9d
  int v14; // r10d
  int v15; // edi
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // rcx

  v2 = a2;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  if ( (UserSessionState[10768] & 0x10) != 0 )
  {
    if ( !v2 )
      LOBYTE(UserSessionState) = StopFade();
    return (char)UserSessionState;
  }
  if ( !a1[12] )
    return (char)UserSessionState;
  v5 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 26);
  if ( !v2 || v5 > 0xA5 || (LOBYTE(UserSessionState) = IS_USERCRIT_CONTENDED(), (_BYTE)UserSessionState) )
  {
    GreBitBltInternal(
      (HDC)a1[12],
      0,
      0,
      *((_DWORD *)a1 + 29),
      *((_DWORD *)a1 + 30),
      (HDC)a1[17],
      0,
      0,
      0x80CC0020,
      0xFFFFFFu,
      0);
LABEL_24:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(a1[12]);
    v18 = *a1;
    a1[12] = 0LL;
    LOBYTE(UserSessionState) = FindTimer(*(_QWORD *)(v18 + 56), 65531LL, 0, 1, 0LL);
    return (char)UserSessionState;
  }
  v8 = *((_DWORD *)a1 + 27);
  v9 = *((_DWORD *)a1 + 28);
  if ( (a1[1] & 0x180000) != 0 )
  {
    UserSessionState = (_DWORD *)((__int64 (*)(void))GetDpiMetricsForCurrentThread)();
    v7 = *((unsigned int *)a1 + 29);
    v10 = (int)(UserSessionState[4] * v5 + 4) >> 31;
    LODWORD(UserSessionState) = UserSessionState[4] * v5 + 4;
    v6 = v10;
    v11 = __SPAIR64__(v10, (unsigned int)UserSessionState) % 8;
    LODWORD(UserSessionState) = __SPAIR64__(v10, (unsigned int)UserSessionState) / 8;
    LODWORD(v6) = v11;
    *((_DWORD *)a1 + 27) = (_DWORD)UserSessionState;
    if ( (int)UserSessionState > (int)v7 )
      *((_DWORD *)a1 + 27) = v7;
  }
  if ( (a1[1] & 0x600000) != 0 )
  {
    UserSessionState = (_DWORD *)GetDpiMetricsForCurrentThread(v7, v6);
    v12 = *((_DWORD *)a1 + 30);
    LODWORD(UserSessionState) = (int)(UserSessionState[5] * v5 + 8) / 16;
    *((_DWORD *)a1 + 28) = (_DWORD)UserSessionState;
    if ( (int)UserSessionState > v12 )
      *((_DWORD *)a1 + 28) = v12;
  }
  v13 = *((_DWORD *)a1 + 27);
  if ( v13 != v8 || *((_DWORD *)a1 + 28) != v9 )
  {
    v14 = 0;
    v15 = *((_DWORD *)a1 + 28);
    if ( ((*((_DWORD *)a1 + 2) >> 19) & 8) == 0 )
      v14 = *((_DWORD *)a1 + 30) - v15;
    v16 = 0;
    v17 = (*((_DWORD *)a1 + 2) >> 19) & 2;
    if ( !v17 )
      v16 = *((_DWORD *)a1 + 29) - v13;
    GreBitBltInternal(
      (HDC)a1[12],
      v17 != 0 ? *((_DWORD *)a1 + 29) - v13 : 0,
      ((*((_DWORD *)a1 + 2) >> 19) & 8) != 0 ? *((_DWORD *)a1 + 30) - v15 : 0,
      v13,
      v15,
      (HDC)a1[17],
      v16,
      v14,
      0x80CC0020,
      0xFFFFFFu,
      0);
    LODWORD(UserSessionState) = *((_DWORD *)a1 + 27);
    if ( *((_DWORD *)a1 + 29) == (_DWORD)UserSessionState )
    {
      LODWORD(UserSessionState) = *((_DWORD *)a1 + 28);
      if ( *((_DWORD *)a1 + 30) == (_DWORD)UserSessionState )
        goto LABEL_24;
    }
  }
  return (char)UserSessionState;
}
