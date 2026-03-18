/*
 * XREFs of ?Get@CContentRects@@AEAA_NIPEAUtagRECT@@PEAI@Z @ 0x1401A9470
 * Callers:
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1401A9610 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall CContentRects::Get(CContentRects *this, unsigned int a2, struct tagRECT *a3, unsigned int *a4)
{
  unsigned int v6; // r14d
  char v8; // bl
  char v9; // di
  __int64 v10; // rax
  bool v12; // si
  bool v13; // bp
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  *a4 = *((_DWORD *)this + 20);
  v6 = *((_DWORD *)this + 20);
  if ( a2 >= v6 )
  {
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        2,
        12,
        (__int64)&WPP_4d552ac7fe0e36d399e48fd58d7f07e5_Traceguids,
        v6);
    }
    memmove(a3, (char *)this + 16, 16LL * *((unsigned int *)this + 20));
    return 1;
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v9,
        *(_QWORD *)(v10 + 69400),
        2u,
        2u,
        0xBu,
        (__int64)&WPP_4d552ac7fe0e36d399e48fd58d7f07e5_Traceguids,
        a2,
        v6);
    }
    return 0;
  }
}
