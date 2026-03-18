/*
 * XREFs of ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1C0011420
 * Callers:
 *     PowerConnectionEvent @ 0x1C00110E4 (PowerConnectionEvent.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C001124C (-UpdateAdaptiveSessionState@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplyAdaptiveSessionState(struct _PO_ADAPTIVE_SESSION_STATE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9

  v4 = 1000 * *(_DWORD *)a1;
  *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 2864) = v4;
  v6 = 1000 * *((_DWORD *)a1 + 1);
  *(_DWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 2872) = v6;
  v11 = 1000 * *((_DWORD *)a1 + 2);
  *(_DWORD *)(SGDGetUserSessionState(v13, v12, v14, v15) + 2868) = v11;
  v16 = *((unsigned __int8 *)a1 + 12);
  *(_DWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 2944) = v16;
  if ( qword_1C0295A60 && (int)qword_1C0295A60() >= 0 )
  {
    if ( qword_1C0295A68 )
      qword_1C0295A68();
  }
}
