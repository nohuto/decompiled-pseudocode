/*
 * XREFs of NativeFenceUmdHandleCompareFunction @ 0x140051338
 * Callers:
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x1400469A0 (VidSchiProcessNativeFenceSignaledDpc.c)
 *     VidSchInsertNativeFenceUmdHandle @ 0x140051760 (VidSchInsertNativeFenceUmdHandle.c)
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
