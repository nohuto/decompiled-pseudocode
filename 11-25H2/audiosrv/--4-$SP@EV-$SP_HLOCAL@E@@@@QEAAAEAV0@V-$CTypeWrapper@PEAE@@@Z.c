/*
 * XREFs of ??4?$SP@EV?$SP_HLOCAL@E@@@@QEAAAEAV0@V?$CTypeWrapper@PEAE@@@Z @ 0x18009F280
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092DB0 (--0AtmosCheck@@QEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180149860 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x18009F2B0 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 */

_QWORD *__fastcall SP<unsigned char,SP_HLOCAL<unsigned char>>::operator=(_QWORD *a1, __int64 a2)
{
  SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset();
  *a1 = a2;
  return a1;
}
