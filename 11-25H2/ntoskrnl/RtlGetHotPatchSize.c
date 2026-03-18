/*
 * XREFs of RtlGetHotPatchSize @ 0x14069827C
 * Callers:
 *     RtlHotPatchSynchronizationRequired @ 0x1406982C8 (RtlHotPatchSynchronizationRequired.c)
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x1407E5584 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14081F058 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14081F248 (RtlEnumerateHotPatchPatches.c)
 *     RtlValidateHotPatchBase @ 0x14081F668 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140B53980 (RtlApplyHotPatch.c)
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
