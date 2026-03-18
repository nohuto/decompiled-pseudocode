/*
 * XREFs of UnmapDesktop @ 0x1C00A1910
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C00A19D0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C00A1AF0 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1)
{
  struct tagDESKTOP *v1; // rsi
  bool v3; // bl
  __int64 v4; // rax
  __int64 v5; // rbp
  struct _KPROCESS *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v1 = *(struct tagDESKTOP **)(a1 + 8);
  v3 = IS_USERCRIT_OWNED_EXCLUSIVE();
  if ( !v3 )
    EnterCrit(1LL, 0LL);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 8) - 40LL) + 1;
  v4 = ReferenceDwmProcess();
  v5 = v4;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v6 = *(struct _KPROCESS **)a1;
    if ( *(_QWORD *)a1 != gpepCSRSS && v6 != (struct _KPROCESS *)v4 )
      FreeView(v6, v1);
  }
  DereferenceDwmProcess(v5);
  if ( *(_DWORD *)(a1 + 20) == 1 )
    DestroyDesktop(v1);
  if ( !v3 )
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return 0LL;
}
