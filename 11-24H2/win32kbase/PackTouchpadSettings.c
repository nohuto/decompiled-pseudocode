/*
 * XREFs of PackTouchpadSettings @ 0x1402139E8
 * Callers:
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140213C58 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PackTouchpadSettings(_DWORD *a1)
{
  _DWORD *v1; // rbx
  _DWORD *UserSessionState; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v12; // rcx
  int v13; // r13d
  __int64 v14; // rcx
  int v15; // r14d
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // rcx
  int v19; // ebp
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  _DWORD *result; // rax
  int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+24h] [rbp-54h]
  int v29; // [rsp+88h] [rbp+10h]
  int v30; // [rsp+90h] [rbp+18h]
  int v31; // [rsp+98h] [rbp+20h]

  v1 = a1;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1);
  v1[6] = UserSessionState[4192];
  v1[7] = UserSessionState[4194];
  v1[8] = UserSessionState[4197];
  v1[9] = UserSessionState[4198];
  v27 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v3) + 16780), 4);
  v29 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v4) + 16784), 10);
  v26 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v5) + 16780), 2);
  v31 = -(*(_DWORD *)(W32GetUserSessionState(v6) + 16780) & 1);
  v8 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v7) + 16784), 8);
  v30 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v9) + 16784), 9);
  v11 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v10) + 16784), 3);
  v13 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v12) + 16784), 5);
  v15 = -(*(_DWORD *)(W32GetUserSessionState(v14) + 16784) & 1);
  v17 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v16) + 16784), 6);
  v19 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v18) + 16784), 4);
  v21 = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v20) + 16780), 5);
  LODWORD(v1) = -__CFSHR__(*(_DWORD *)(W32GetUserSessionState(v22) + 16780), 3);
  v24 = (v31 != 0 ? 8 : 0) | (v30 != 0 ? 0x20 : 0) | (v13 != 0 ? 0x80 : 0) | (v27 != 0) | (v19 != 0 ? 0x400 : 0) | (v15 != 0 ? 0x100 : 0) | (v11 != 0 ? 0x40 : 0) | (v17 != 0 ? 0x200 : 0) | (v29 != 0 ? 2 : 0) | (v8 != 0 ? 0x10 : 0) | (v21 != 0 ? 0x800 : 0) | ((_DWORD)v1 != 0 ? 0x1000 : 0) | ((*(_DWORD *)(W32GetUserSessionState(v23) + 16784) & 0x40) << 7);
  result = a1;
  a1[10] = (v26 != 0 ? 4 : 0) | v24;
  return result;
}
