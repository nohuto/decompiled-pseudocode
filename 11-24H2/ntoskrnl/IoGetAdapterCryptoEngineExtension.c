/*
 * XREFs of IoGetAdapterCryptoEngineExtension @ 0x140594420
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x1403E8190 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoGetAdapterCryptoEngineExtension(__int64 a1)
{
  __int64 v1; // r8
  _QWORD *v2; // r9

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  *v2 = *(_QWORD *)(v1 + 200) + 40LL;
  return 0LL;
}
