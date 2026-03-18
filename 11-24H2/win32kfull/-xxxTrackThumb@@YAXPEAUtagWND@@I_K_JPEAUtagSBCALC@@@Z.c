/*
 * XREFs of ?xxxTrackThumb@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402E2A70
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x14006E460 (PtInRect.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1402E1754 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E1D78 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     GetMouseMessageString @ 0x1402E33A8 (GetMouseMessageString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd @ 0x1402E58F8 (WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd.c)
 *     xxxEndScroll @ 0x1402E6AC0 (xxxEndScroll.c)
 */

void __fastcall xxxTrackThumb(struct tagWND *a1, __int64 a2, __int64 a3, unsigned __int64 a4, struct tagSBCALC *a5)
{
  __int16 v5; // bp
  unsigned int v6; // r14d
  struct tagWND *v7; // rsi
  __int64 v8; // rbx
  char v9; // al
  unsigned __int64 v10; // rdi
  int v11; // r8d
  int v12; // edx
  int v13; // r9d
  int v14; // r8d
  char v15; // r9
  int v16; // r10d
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  char v20; // [rsp+D0h] [rbp-68h]
  bool v21; // [rsp+D1h] [rbp-67h]
  unsigned __int64 v23; // [rsp+140h] [rbp+8h]
  unsigned int v24; // [rsp+148h] [rbp+10h]

  v24 = a2;
  v5 = a4;
  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 752LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v9 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v9 = 0;
  }
  v20 = v9;
  v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    W32GetUserSessionState(a5, a2);
    GetMouseMessageString(v24);
    LOBYTE(v11) = v21;
    LOBYTE(v12) = v20;
    v6 = v24;
    WPP_RECORDER_AND_TRACE_SF_qsDdddddddddddddd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL), v12, v11, v13);
    v10 = a4 >> 16;
    v7 = a1;
    v5 = a4;
  }
  else
  {
    v10 = a4 >> 16;
  }
  if ( BYTE1(v6) == 2 && v8 )
  {
    if ( (*(_DWORD *)v8 & 8) != 0 )
    {
      RecalcTrackRect((struct tagSBTRACK *)v8);
      *(_DWORD *)v8 &= ~8u;
    }
    HIDWORD(v23) = (__int16)v10;
    LODWORD(v23) = v5;
    if ( PtInRect((_DWORD *)(v8 + 32), v23) )
    {
      v17 = *((_DWORD *)a5 + 15);
      if ( (v15 & 2) == 0 )
        v14 = v16;
      v18 = *(_DWORD *)(v8 + 72) + v14;
      if ( v18 >= v17 )
      {
        v19 = v17 + *((_DWORD *)a5 + 14);
        v17 = v18;
        if ( v18 >= v19 )
          v17 = v19;
      }
    }
    else
    {
      v17 = *((_DWORD *)a5 + 11);
    }
    xxxMoveThumb(v7, a5, v17);
    if ( v6 == 514 || (_GetKeyState(1LL) & 0x8000u) == 0LL )
      xxxEndScroll(v7);
  }
}
