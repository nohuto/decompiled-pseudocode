/*
 * XREFs of ?SBPosFromPx@@YAHPEAUtagSBCALC@@H@Z @ 0x1402E194C
 * Callers:
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1402E1D78 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402D971C (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 */

__int64 __fastcall SBPosFromPx(struct tagSBCALC *a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r15d
  INT v4; // r8d
  int v5; // ebx
  char v6; // r12
  char v7; // r13
  __int64 UserSessionState; // rax
  int v10; // [rsp+20h] [rbp-88h]

  v2 = *((_DWORD *)a1 + 15);
  if ( (int)a2 >= v2 )
  {
    v4 = *((_DWORD *)a1 + 14);
    if ( (int)a2 < v4 + v2 )
    {
      v5 = *(_DWORD *)a1;
      if ( v4 )
        v3 = v5
           + EngMulDiv(*((_DWORD *)a1 + 1) - (*((_DWORD *)a1 + 2) != 0 ? *((_DWORD *)a1 + 2) - 1 : 0) - v5, a2 - v2, v4);
      else
        v3 = v5 - 1;
    }
    else
    {
      a2 = (*((_DWORD *)a1 + 2) - 1) & (unsigned int)-(*((_DWORD *)a1 + 2) != 0);
      v3 = *((_DWORD *)a1 + 1) - a2;
    }
  }
  else
  {
    v3 = *(_DWORD *)a1;
  }
  v6 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v7 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v6 = 0;
  }
  if ( v7 || v6 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_ddddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69416),
      v10,
      9u,
      0x22u,
      (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids);
  }
  return v3;
}
