/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C01AB5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010D64 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F68 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C009995C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     GetNonChildAncestor @ 0x1C00A70E4 (GetNonChildAncestor.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C0156B54 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, __int64 a2)
{
  struct tagWND *v3; // rdi
  char v4; // si
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 NonChildAncestor; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v3 = *(struct tagWND **)(a1 + 80);
  if ( a2 )
  {
    v4 = 1;
    if ( !(unsigned __int8)CheckAccess(a2, *(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL) + 432LL) )
    {
      EtwTraceUIPIInputError(
        gptiCurrent,
        *((_QWORD *)v3 + 2),
        *(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL),
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 2) + 432LL) + 432LL));
      return 0LL;
    }
  }
  else
  {
    v4 = 0;
  }
  CompositionInputWindowUIOwner = v3;
  if ( (unsigned int)IsIndependentInputWindow(v3) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
    if ( !CompositionInputWindowUIOwner )
      return 0LL;
  }
  if ( (*((_DWORD *)CompositionInputWindowUIOwner + 80) & 0x2000) == 0 )
  {
    NonChildAncestor = GetNonChildAncestor((__int64)CompositionInputWindowUIOwner);
    if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 27LL) & 8) == 0 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(NonChildAncestor + 136) + 8LL);
      if ( *(_WORD *)v8 != *(_WORD *)(gpsi + 898LL)
        && (*(_BYTE *)(v8 + 10) & 1) == 0
        && !(unsigned __int8)IsKeyboardDelegationTarget(*((_QWORD *)CompositionInputWindowUIOwner + 2)) )
      {
        v14 = 0LL;
        v13 = 0LL;
        if ( CompositionInputWindowUIOwner != v3 )
          ThreadLockAlways(CompositionInputWindowUIOwner, &v13);
        xxxForceForegroundWindowNoRestoreFocus((__int64)CompositionInputWindowUIOwner, 0LL, v9);
        if ( CompositionInputWindowUIOwner != v3 )
          ThreadUnlock1(v11, v10, v12);
        if ( v4 && gpqForeground && !(unsigned __int8)CheckAccess(a2, gpqForeground + 432LL) )
        {
          MSGLUA_GPQFOREGROUND();
          return 0LL;
        }
      }
    }
  }
  return 1LL;
}
