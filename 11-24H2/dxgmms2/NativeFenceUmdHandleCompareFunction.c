/*
 * XREFs of NativeFenceUmdHandleCompareFunction @ 0x140050DBC
 * Callers:
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140044BE0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchInsertNativeFenceUmdHandle @ 0x1400511E0 (VidSchInsertNativeFenceUmdHandle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NativeFenceUmdHandleCompareFunction(_DWORD *a1, __int64 a2)
{
  if ( *a1 == *(_DWORD *)(a2 - 16) )
    return 0LL;
  else
    return *a1 < *(_DWORD *)(a2 - 16) ? -1 : 1;
}
