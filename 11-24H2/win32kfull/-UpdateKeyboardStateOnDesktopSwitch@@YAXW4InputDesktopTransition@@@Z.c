/*
 * XREFs of ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x140285FAC
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 * Callees:
 *     ClearKeyboardStates @ 0x14024045C (ClearKeyboardStates.c)
 */

void __fastcall UpdateKeyboardStateOnDesktopSwitch(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // rcx
  __m128i si128; // xmm0

  v2 = a1;
  v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19200);
  if ( v5 && v2 != 1 )
  {
    ClearKeyboardStates(v4, v3);
    v6 = (_QWORD **)(v5 + 176);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      v8 = *(i - 38);
      si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
      *(__m128i *)(v8 + 248) = si128;
      *(__m128i *)(v8 + 264) = si128;
      *(_DWORD *)(v8 + 436) |= 1u;
      PostUpdateKeyStateEvent(v8);
    }
  }
}
