/*
 * XREFs of RtlGetHotPatchSize @ 0x1406A345C
 * Callers:
 *     RtlHotPatchSynchronizationRequired @ 0x1406A34A8 (RtlHotPatchSynchronizationRequired.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x1407F5414 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14082ED98 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14082EF88 (RtlEnumerateHotPatchPatches.c)
 *     RtlValidateHotPatchBase @ 0x14082F3A8 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140B63AD0 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetHotPatchSize(_DWORD *a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( *a1 >= 3u )
    return (unsigned int)(a1[6] + 2);
  return result;
}
