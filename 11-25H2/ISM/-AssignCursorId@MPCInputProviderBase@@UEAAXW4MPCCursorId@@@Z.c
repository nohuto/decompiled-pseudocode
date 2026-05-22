/*
 * XREFs of ?AssignCursorId@MPCInputProviderBase@@UEAAXW4MPCCursorId@@@Z @ 0x180085690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::AssignCursorId(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 3628) = a2;
}
