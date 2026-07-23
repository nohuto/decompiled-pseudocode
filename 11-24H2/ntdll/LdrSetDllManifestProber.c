/*
 * XREFs of LdrSetDllManifestProber @ 0x1801079B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrSetDllManifestProber(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, _QWORD),
        __int64 a2,
        __int64 (*a3)(void))
{
  LdrpManifestProberRoutine = a1;
  LdrpCreateActCtxLanguageW = a2;
  LdrpReleaseActCtxW = a3;
}
