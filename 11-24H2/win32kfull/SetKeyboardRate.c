/*
 * XREFs of SetKeyboardRate @ 0x14011335C
 * Callers:
 *     xxxInitWindowStation @ 0x140112ADC (xxxInitWindowStation.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetKeyboardRate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 UserSessionState; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rdx

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = W32GetUserSessionState(v5, v4);
  v9 = W32GetUserSessionState(v8, v7);
  v10 = v2 & 0x1F;
  LODWORD(v6) = v10 * (*(unsigned __int16 *)(UserSessionState + 12856) - *(unsigned __int16 *)(v6 + 12850));
  LODWORD(v10) = (138547333 * (unsigned __int64)(unsigned int)v6) >> 32;
  LOWORD(v6) = *(_WORD *)(v9 + 12850) + (unsigned int)v6 / 0x1F;
  *(_WORD *)(W32GetUserSessionState(v11, v10) + 12870) = v6;
  v14 = W32GetUserSessionState(v13, v12);
  v17 = W32GetUserSessionState(v16, v15);
  v20 = W32GetUserSessionState(v19, v18);
  v21 = *(unsigned __int16 *)(v17 + 12852);
  v22 = (v2 >> 5) & 3;
  v23 = v22 * (*(unsigned __int16 *)(v14 + 12858) - (unsigned int)v21);
  LODWORD(v23) = (unsigned __int64)(2863311531LL * v23) >> 32;
  LOWORD(v17) = *(_WORD *)(v20 + 12852) + v22 * (*(unsigned __int16 *)(v14 + 12858) - (unsigned int)v21) / 3;
  *(_WORD *)(W32GetUserSessionState(v21, v23) + 12872) = v17;
  return IoControl(1LL);
}
