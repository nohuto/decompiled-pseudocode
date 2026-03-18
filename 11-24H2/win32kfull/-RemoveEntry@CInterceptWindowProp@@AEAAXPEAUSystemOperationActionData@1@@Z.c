/*
 * XREFs of ?RemoveEntry@CInterceptWindowProp@@AEAAXPEAUSystemOperationActionData@1@@Z @ 0x1402CA34C
 * Callers:
 *     ?Delete@CInterceptWindowProp@@UEAAXXZ @ 0x1402C94C0 (-Delete@CInterceptWindowProp@@UEAAXXZ.c)
 *     ?PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z @ 0x1402C9E14 (-PopFrontSystemOperationData@@YA_NPEAUtagWND@@PEAUSystemOperationData@AdvancedWindowPos@@@Z.c)
 *     ?RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CA394 (-RemoveLastSystemOperationData@WindowActions@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInterceptWindowProp::RemoveEntry(
        CInterceptWindowProp *this,
        struct CInterceptWindowProp::SystemOperationActionData ***a2)
{
  struct CInterceptWindowProp::SystemOperationActionData **v2; // r8
  struct CInterceptWindowProp::SystemOperationActionData **v4; // rax

  v2 = *a2;
  if ( (*a2)[1] != (struct CInterceptWindowProp::SystemOperationActionData *)a2
    || (v4 = a2[1], *v4 != (struct CInterceptWindowProp::SystemOperationActionData *)a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct CInterceptWindowProp::SystemOperationActionData *)v2;
  v2[1] = (struct CInterceptWindowProp::SystemOperationActionData *)v4;
  Win32FreePool(a2);
  --*((_DWORD *)this + 12);
}
