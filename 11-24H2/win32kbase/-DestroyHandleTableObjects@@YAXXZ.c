/*
 * XREFs of ?DestroyHandleTableObjects@@YAXXZ @ 0x14013657C
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DestroyHandleTableObjects(__int64 a1)
{
  __int64 v1; // rcx
  __int64 UserSessionState; // rsi
  void (*v3)(void); // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(UserSessionState + 19944) )
  {
    v3 = (void (*)(void))DestroyHandleFirstPass;
    *(_DWORD *)(W32GetUserSessionState(v1) + 19816) = 1;
    while ( 1 )
    {
      v5 = 0;
      W32GetUserSessionState(v4);
      do
      {
        v6 = *(_QWORD *)(UserSessionState + 19944) + 32LL * v5;
        if ( *(_BYTE *)(v6 + 24) )
          v3();
        ++v5;
      }
      while ( v5 <= *(_DWORD *)(W32GetUserSessionState(v6) + 19872) );
      if ( (char *)v3 != (char *)DestroyHandleFirstPass )
        break;
      v3 = (void (*)(void))DestroyHandleSecondPass;
    }
    *(_DWORD *)(W32GetUserSessionState(v4) + 19816) = 0;
  }
}
