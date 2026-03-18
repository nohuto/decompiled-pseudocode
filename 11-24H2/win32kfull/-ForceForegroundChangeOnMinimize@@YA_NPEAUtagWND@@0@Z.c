/*
 * XREFs of ?ForceForegroundChangeOnMinimize@@YA_NPEAUtagWND@@0@Z @ 0x1402DD884
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1400F7A10 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1401886E8 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 */

bool __fastcall ForceForegroundChangeOnMinimize(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool result; // al

  v2 = *((_QWORD *)a1 + 2);
  result = (*(_DWORD *)(v2 + 1360) & 0x40000LL) != 0
        && *(struct tagWND **)(v2 + 1584) == a1
        && (v7 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18944), v8 = *(_QWORD *)(v2 + 472), v8 == v7)
        && *(struct tagWND **)(v8 + 128) == a1
        && *(_QWORD *)(v2 + 1592)
        && (v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18960), *(_QWORD *)(*(_QWORD *)(v2 + 1592) + 16LL) == v9)
        && (v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18944), *(_QWORD *)(*((_QWORD *)a2 + 2) + 472LL) != v11)
        && CanForceForeground(*(const struct tagPROCESSINFO **)(v2 + 464), v11) == 0;
  return result;
}
