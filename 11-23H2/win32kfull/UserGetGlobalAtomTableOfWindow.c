/*
 * XREFs of UserGetGlobalAtomTableOfWindow @ 0x1C003C084
 * Callers:
 *     SetRedrawProp @ 0x1C003BD1C (SetRedrawProp.c)
 *     NtUserSetProp @ 0x1C003BD70 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00EDB04 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetGlobalAtomTableOfWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 664LL);
  if ( result )
    return *(_QWORD *)(result + 168);
  return result;
}
