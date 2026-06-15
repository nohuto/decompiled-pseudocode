/*
 * XREFs of StringCchLengthW @ 0x18007B954
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092DB0 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180149860 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     StringLengthWorkerW @ 0x18007B978 (StringLengthWorkerW.c)
 */

HRESULT __stdcall StringCchLengthW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  HRESULT result; // eax
  _QWORD *v4; // r8

  result = StringLengthWorkerW(psz, cchMax, pcchLength);
  if ( result < 0 )
  {
    if ( v4 )
      *v4 = 0LL;
  }
  return result;
}
