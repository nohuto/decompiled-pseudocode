/*
 * XREFs of CcSetReadAheadGranularity @ 0x1404737A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CcSetReadAheadGranularity(PFILE_OBJECT FileObject, ULONG Granularity)
{
  *((_DWORD *)FileObject->PrivateCacheMap + 1) = Granularity - 1;
}
