/*
 * XREFs of UnmapDesktop @ 0x14023C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140083108 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1401940D0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x14023AE10 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagDESKTOP *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 UserGdiSessionState; // rax
  struct _KPROCESS *v8; // rcx
  __int64 v9; // rdx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(struct tagDESKTOP **)(a1 + 24);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11, a2, a3);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(*(_QWORD *)(a1 + 24) - 40LL) + 1;
  v6 = ReferenceDwmProcess();
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v5);
    v8 = *(struct _KPROCESS **)(a1 + 16);
    if ( v8 != *(struct _KPROCESS **)(UserGdiSessionState + 40) && v8 != (struct _KPROCESS *)v6 )
      FreeView(v8, v3);
  }
  DereferenceDwmProcess(v6);
  if ( *(_DWORD *)(a1 + 36) == 1 )
    DestroyDesktop(v3, v9);
  if ( !v11 )
    UserSessionSwitchLeaveCritWithNonPaged();
  return 0LL;
}
