/*
 * XREFs of ?Set@CContentRects@@AEAA_NIPEBUtagRECT@@@Z @ 0x1401A96C8
 * Callers:
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401A97B4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

bool __fastcall CContentRects::Set(CContentRects *this, unsigned int a2, const struct tagRECT *a3)
{
  __int64 v4; // rdi
  bool v6; // bl
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  bool result; // al

  v4 = a2;
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(this);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      2,
      10,
      (__int64)&WPP_4d552ac7fe0e36d399e48fd58d7f07e5_Traceguids,
      v4);
  }
  memmove((char *)this + 16, a3, 16 * v4);
  result = 1;
  *((_DWORD *)this + 20) = v4;
  return result;
}
