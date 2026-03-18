/*
 * XREFs of ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x140215E14
 * Callers:
 *     ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x140216B40 (-ivHandleKeyboardStatesPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject.c)
 * Callees:
 *     PostUpdateKeyStateEvent @ 0x140095730 (PostUpdateKeyStateEvent.c)
 */

void __fastcall ApplyFullKeyboardStates(_OWORD *a1, _OWORD *a2)
{
  _OWORD *UserSessionState; // rax
  __int64 v5; // rcx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD **v9; // rbx
  _QWORD *i; // rdi
  __int64 v11; // rcx
  __m128i si128; // xmm0

  UserSessionState = (_OWORD *)W32GetUserSessionState(a1);
  UserSessionState[900] = *a1;
  UserSessionState[901] = a1[1];
  UserSessionState[902] = a1[2];
  UserSessionState[903] = a1[3];
  v6 = (_OWORD *)W32GetUserSessionState(v5);
  v6[896] = *a2;
  v6[897] = a2[1];
  v6[898] = a2[2];
  v6[899] = a2[3];
  if ( *(_QWORD *)(W32GetUserSessionState(v7) + 19200) )
  {
    v9 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v8) + 19200) + 176LL);
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
    {
      v11 = *(i - 38);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(_DWORD *)(v11 + 436) |= 1u;
      *(__m128i *)(v11 + 248) = si128;
      *(__m128i *)(v11 + 264) = si128;
      PostUpdateKeyStateEvent(v11);
    }
  }
}
