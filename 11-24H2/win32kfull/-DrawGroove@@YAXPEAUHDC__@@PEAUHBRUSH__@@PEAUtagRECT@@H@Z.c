/*
 * XREFs of ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1402E115C
 * Callers:
 *     ?DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z @ 0x140257074 (-DrawThumb2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@PEAUHBRUSH__@@HI@Z.c)
 * Callees:
 *     DrawEdge @ 0x140037D18 (DrawEdge.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ldddddd @ 0x1402E39B0 (WPP_RECORDER_AND_TRACE_SF_ldddddd.c)
 */

void __fastcall DrawGroove(HDC a1, HBRUSH a2, __m128i *a3, int a4)
{
  int v4; // edi
  HDC v7; // rbx
  char v8; // r15
  bool v9; // r12
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128i *v15; // rdx
  __m128i v16[4]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a4;
  v7 = a1;
  v8 = 1;
  v9 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v8 = 0;
  }
  if ( v9 || v8 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v9;
    v4 = a4;
    WPP_RECORDER_AND_TRACE_SF_ldddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69416));
    v7 = a1;
  }
  v14 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
  if ( a2 == *(HBRUSH *)(v14 + 4856)
    || a2 == *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928) + 4944LL) )
  {
    v15 = a3;
  }
  else
  {
    v16[0] = *a3;
    DrawEdge(v7, v16, 0xAu, v4 != 0 ? 24581 : 24586);
    v15 = v16;
  }
  FillRect(v7, (LPCRECT)v15, a2);
}
