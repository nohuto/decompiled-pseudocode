/*
 * XREFs of ?SetResizingState@CImmersiveApp@@UEAAXW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AF060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::SetResizingState(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 344) )
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 336) + 248LL))(**(_QWORD **)(a1 + 336));
  return result;
}
