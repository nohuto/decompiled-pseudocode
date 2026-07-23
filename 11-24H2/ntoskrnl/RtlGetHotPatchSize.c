/*
 * XREFs of RtlGetHotPatchSize @ 0x1406A44AC
 * Callers:
 *     RtlHotPatchSynchronizationRequired @ 0x1406A44F8 (RtlHotPatchSynchronizationRequired.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x1407F5B04 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14082F5C8 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14082F7B8 (RtlEnumerateHotPatchPatches.c)
 *     RtlValidateHotPatchBase @ 0x14082FBA0 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140B65BA0 (RtlApplyHotPatch.c)
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
